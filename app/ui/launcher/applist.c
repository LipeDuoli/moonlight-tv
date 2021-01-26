#include "window.h"
#include "backend/application_manager.h"
#include "backend/coverloader.h"
#include "stream/session.h"

#include "res.h"
#include "util/bus.h"
#include "util/user_event.h"

static bool _applist_item(struct nk_context *ctx, PSERVER_LIST node, PAPP_DLIST cur, int cover_width, int cover_height,
                          bool event_emitted, bool *ever_hovered);
static void _applist_item_do_click(PSERVER_LIST node, PAPP_DLIST cur, int clicked);
static bool _applist_item_select(PSERVER_LIST node, int offset);
static bool _cover_use_default(struct nk_image *img);

static PAPP_DLIST applist_hovered_item = NULL, applist_hover_request = NULL;
static PAPP_DLIST _applist_visible_start = NULL;
static struct nk_list_view list_view;
static int _applist_colcount = 5;
static int _applist_rowcount = 0;
static struct nk_vec2 applist_focused_item_center = {0, 0}, applist_focused_resume_center = {0, 0}, applist_focused_close_center = {0, 0};

bool launcher_applist(struct nk_context *ctx, PSERVER_LIST node, bool event_emitted)
{
    struct nk_style_window winstyle = ctx->style.window;
    int app_len = applist_len(node->apps);
    int colcount = _applist_colcount, rowcount = app_len / colcount;
    if (app_len && app_len % colcount)
    {
        rowcount++;
    }

    // Row width of list item content
    int rowwidth = nk_widget_width(ctx) - winstyle.group_padding.x * 2 - winstyle.group_border * 2 - winstyle.scrollbar_size.x;
    int itemwidth = (rowwidth - winstyle.spacing.x * (colcount - 1)) / colcount;
    int coverwidth = itemwidth - winstyle.group_padding.x * 2 - winstyle.group_border * 2, coverheight = coverwidth / 3 * 4;
    int itemheight = coverheight + winstyle.group_padding.y * 2 + winstyle.group_border * 2;
    _applist_rowcount = rowcount;

    if (nk_list_view_begin(ctx, &list_view, "apps_list", 0, itemheight, rowcount))
    {
        bool ever_hovered = false;
        nk_layout_row_dynamic(ctx, itemheight, colcount);
        int startidx = list_view.begin * colcount;
        PAPP_DLIST cur = applist_nth(node->apps, startidx);
        _applist_visible_start = cur;
        for (int row = 0; row < list_view.count; row++)
        {
            int col;
            for (col = 0; col < colcount && cur != NULL; col++, cur = cur->next)
            {
                _applist_item(ctx, node, cur, coverwidth, coverheight, event_emitted, &ever_hovered);
            }
            if (col < colcount)
            {
                nk_spacing(ctx, colcount - col);
            }
        }
        if (!ever_hovered)
        {
            applist_hovered_item = NULL;
        }

        nk_list_view_end(&list_view);
    }
    return event_emitted;
}

bool _applist_item(struct nk_context *ctx, PSERVER_LIST node, PAPP_DLIST cur,
                   int cover_width, int cover_height, bool event_emitted, bool *ever_hovered)
{
    nk_bool hovered = nk_widget_is_hovered(ctx), mouse_down = nk_widget_has_mouse_click_down(ctx, NK_BUTTON_LEFT, true);
    if (hovered)
    {
        applist_hovered_item = cur;
        *ever_hovered = true;
    }
    static int click_down_id = -1, should_ignore_click = -1;
    if (mouse_down && click_down_id == -1)
    {
        click_down_id = cur->id;
        // If event_emitted is true, means there's combo opened. So next click event shoule be ignored
        if (event_emitted)
        {
            should_ignore_click = cur->id;
        }
    }
    bool running = node->server->currentGame == cur->id;
    // Don't react to grid click if there's action button
    int clicked = 0;
    struct nk_rect tmp_bounds = nk_widget_bounds(ctx);
    int item_height = tmp_bounds.h;
    if (cur == applist_hover_request)
    {
        // Send mouse pointer to the item
        applist_focused_item_center.x = nk_rect_center_x(tmp_bounds);
        applist_focused_item_center.y = nk_rect_center_y(tmp_bounds);
        bus_pushevent(USER_FAKEINPUT_MOUSE_MOTION, &applist_focused_item_center, NULL);
        applist_hover_request = NULL;
    }
    if (nk_group_begin(ctx, cur->name, NK_WINDOW_NO_SCROLLBAR))
    {
        struct nk_image *cover = coverloader_get(node, cur->id, cover_width, cover_height);
        bool defcover = _cover_use_default(cover);
        nk_layout_space_begin(ctx, NK_STATIC, item_height, running ? 3 : (defcover ? 2 : 1));
        nk_layout_space_push(ctx, nk_rect(0, 0, cover_width, cover_height));
        clicked = !running & nk_button_image(ctx, defcover ? launcher_default_cover : *cover);
        if (defcover && !running)
        {
            int insetx = 8 * NK_UI_SCALE, insety = 6 * NK_UI_SCALE;
            nk_layout_space_push(ctx, nk_rect(insetx, insety, cover_width - insetx * 2, cover_height - insety * 2));
            nk_label(ctx, cur->name, NK_TEXT_CENTERED);
        }

        if (running)
        {
            const int button_size = 24 * NK_UI_SCALE;
            int button_x = (cover_width - button_size) / 2;
            int button_spacing = 4 * NK_UI_SCALE;
            nk_layout_space_push(ctx, nk_rect(button_x, cover_height / 2 - button_size - button_spacing, button_size, button_size));
            tmp_bounds = nk_widget_bounds(ctx);
            if (hovered)
            {
                applist_focused_resume_center.x = nk_rect_center_x(tmp_bounds);
                applist_focused_resume_center.y = nk_rect_center_y(tmp_bounds);
            }
            nk_style_push_vec2(ctx, &ctx->style.button.padding, nk_vec2_s(0, 0));
            if (nk_button_image(ctx, sprites_ui.ic_play))
            {
                clicked = 1;
            }
            nk_layout_space_push(ctx, nk_rect(button_x, cover_height / 2 + button_spacing, button_size, button_size));
            tmp_bounds = nk_widget_bounds(ctx);
            if (hovered)
            {
                applist_focused_close_center.x = nk_rect_center_x(tmp_bounds);
                applist_focused_close_center.y = nk_rect_center_y(tmp_bounds);
            }
            if (nk_button_image(ctx, sprites_ui.ic_close))
            {
                clicked = -1;
            }
            nk_style_pop_vec2(ctx);
        }
        nk_layout_space_end(ctx);
        nk_group_end(ctx);
    }
    // Captured a click event that should be ignored, reset state
    if (should_ignore_click == cur->id && !mouse_down)
    {
        clicked = 0;
        should_ignore_click = -1;
    }
    if (clicked)
    {
        if (should_ignore_click == -1 && click_down_id == cur->id)
        {
            event_emitted |= true;
            _applist_item_do_click(node, cur, clicked);
        }
        should_ignore_click = -1;
        click_down_id = -1;
    }
    return event_emitted;
}

void _applist_item_do_click(PSERVER_LIST node, PAPP_DLIST cur, int clicked)
{
    if (clicked == 1)
    {
        if (node->server->currentGame > 0 && node->server->currentGame != cur->id)
        {
            printf("Quit running game first\n");
        }
        else
        {
            streaming_begin(node, cur->id);
        }
    }
    else
    {
        computer_manager_quitapp(node);
    }
}

bool _applist_dispatch_navkey(struct nk_context *ctx, PSERVER_LIST node, NAVKEY navkey, bool down)
{
    switch (navkey)
    {
    case NAVKEY_LEFT:
        return down || _applist_item_select(node, -1);
    case NAVKEY_RIGHT:
        return down || _applist_item_select(node, 1);
    case NAVKEY_UP:
        return down || _applist_item_select(node, -_applist_colcount);
    case NAVKEY_DOWN:
        return down || _applist_item_select(node, _applist_colcount);
    case NAVKEY_NEGATIVE:
        if (applist_hovered_item && node->server->currentGame == applist_hovered_item->id)
        {
            bus_pushevent(USER_FAKEINPUT_MOUSE_CLICK, &applist_focused_close_center, (void *)down);
        }
        return true;
    case NAVKEY_CONFIRM:
    case NAVKEY_START:
        if (applist_hovered_item)
        {
            if (node->server->currentGame == applist_hovered_item->id)
            {
                bus_pushevent(USER_FAKEINPUT_MOUSE_CLICK, &applist_focused_resume_center, (void *)down);
            }
            else
            {
                bus_pushevent(USER_FAKEINPUT_MOUSE_CLICK, &applist_focused_item_center, (void *)down);
            }
        }
        return true;
    default:
        break;
    }
    return false;
}

bool _applist_item_select(PSERVER_LIST node, int offset)
{
    if (_applist_visible_start == NULL)
    {
        return true;
    }
    if (applist_hovered_item == NULL)
    {
        // Select first visible item
        applist_hover_request = _applist_visible_start;
        return true;
    }
    PAPP_DLIST item = applist_nth(applist_hovered_item, offset);
    if (item)
    {
        applist_hover_request = item;
        if (_applist_rowcount)
        {
            int rowheight = list_view.total_height / _applist_rowcount;
            int index = applist_index(node->apps, item);
            if (index >= 0)
            {
                int row = index / _applist_colcount;
                *list_view.scroll_pointer = rowheight * row;
            }
        }
    }
    return true;
}

bool _cover_use_default(struct nk_image *img)
{
    return img == NULL || img->w == 0 || img->h == 0;
}