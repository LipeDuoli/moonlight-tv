/*******************************************************************************
 * Size: 32 px
 * Bpp: 4
 * Opts: -f res/MaterialIcons-Regular.ttf -c res/MaterialIcons-Regular.codepoints -l res/mat_icons_font.list -o app/lvgl/font -n material_icons_regular -p MAT_SYMBOL -s 28 32 38
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef MATERIAL_ICONS_REGULAR_32
#define MATERIAL_ICONS_REGULAR_32 1
#endif

#if MATERIAL_ICONS_REGULAR_32

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E002 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x99, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xf5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0xfb, 0x11, 0xbf, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xff, 0xfb, 0x0, 0xbf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xfb, 0x0, 0xbf, 0xff, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xfb, 0x0, 0xbf, 0xff, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xfb,
    0x0, 0xbf, 0xff, 0xff, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xfd, 0x88,
    0xdf, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xff, 0xfb, 0x11, 0xbf, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xfb, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,
    0x0, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30,
    0xd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x6f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf6,

    /* U+E05C "" */
    0x7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xaf, 0xfb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xbb, 0x50, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x1, 0xbb, 0xbb, 0xff, 0xdb,
    0xbb, 0x50, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xaf, 0xf8,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x8f, 0xf9, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf5, 0x9, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x90, 0x0, 0x1, 0x11, 0x11, 0x12,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x11, 0x11,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0x60, 0x0, 0x0, 0x0, 0x0,

    /* U+E30C "" */
    0x1, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0x10, 0x1e,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x8f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xaf, 0xf1, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x1f, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfb,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfb, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfb, 0xbf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfb, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfb, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfb, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfb,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfb, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfb, 0xbf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfb, 0xaf, 0xfb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbf, 0xfa, 0x5f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x6, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x88, 0xcf, 0xff,
    0xff, 0x88, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+E333 "" */
    0x7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xaf, 0xfb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xaf, 0xf8,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x8f, 0xf9, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf5, 0x8, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x90, 0x0, 0x1, 0x11, 0x11, 0x12,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x11, 0x11,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0x60, 0x0, 0x0, 0x0, 0x0,

    /* U+E429 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x33, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xb0, 0x0, 0x0, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x82, 0x0, 0xff, 0xd8, 0x88, 0x88,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x0, 0xff, 0xff, 0xff, 0xff,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x0,
    0xff, 0xb1, 0x11, 0x11, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x33, 0x0, 0x0, 0x0, 0x0,
    0xcc, 0x80, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x88, 0x88, 0x8d, 0xff,
    0x0, 0x28, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x5f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x11, 0x11, 0x1b, 0xff, 0x0, 0x1, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x0, 0x0, 0xb, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xcc, 0x0, 0x13, 0x31, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x88, 0x88, 0x88, 0x88,
    0x0, 0x5f, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x5f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x11, 0x11, 0x11, 0x11, 0x0, 0x5f, 0xf6, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0xc3, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+E5CD "" */
    0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x0, 0x4, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0x40, 0x1f, 0xff, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xf1, 0x6, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0x60,
    0x0, 0x6f, 0xff, 0x60, 0x0, 0x0, 0x6, 0xff,
    0xf6, 0x0, 0x0, 0x6, 0xff, 0xf6, 0x0, 0x0,
    0x6f, 0xff, 0x60, 0x0, 0x0, 0x0, 0x6f, 0xff,
    0x60, 0x6, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xf6, 0x6f, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xf6, 0x6f, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0x60, 0x6,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf6,
    0x0, 0x0, 0x6f, 0xff, 0x60, 0x0, 0x0, 0x6f,
    0xff, 0x60, 0x0, 0x0, 0x6, 0xff, 0xf6, 0x0,
    0x6, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0x60, 0x1f, 0xff, 0x60, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xf1, 0x4, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0x40, 0x0, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0,

    /* U+E63A "" */
    0x7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xaf, 0xfb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0xf,
    0xd4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xb2, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x91, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x70, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x91, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xb2, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xd4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0xf,
    0xe6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfa, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xbf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfa, 0xaf, 0xf8,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x8f, 0xf9, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf5, 0x9, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x90, 0x0, 0x1, 0x11, 0x11, 0x12,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x11, 0x11,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0x60, 0x0, 0x0, 0x0, 0x0,

    /* U+E887 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xae, 0xff, 0xff, 0xea, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x3e, 0xff, 0xff, 0xff, 0xfe, 0xef,
    0xff, 0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x1,
    0xef, 0xff, 0xff, 0xf8, 0x10, 0x1, 0x8f, 0xff,
    0xff, 0xfe, 0x10, 0x0, 0x0, 0xc, 0xff, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x4, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf7, 0x0,
    0x29, 0x93, 0x0, 0x7f, 0xff, 0xff, 0xf7, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xf0, 0x1, 0xef, 0xff,
    0x30, 0xf, 0xff, 0xff, 0xfe, 0x10, 0x6, 0xff,
    0xff, 0xff, 0xc0, 0x8, 0xff, 0xff, 0xa0, 0xd,
    0xff, 0xff, 0xff, 0x60, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xa0, 0xc, 0xff, 0xff,
    0xff, 0xb0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x30, 0xf, 0xff, 0xff, 0xff, 0xf0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0x0, 0x9f, 0xff, 0xff, 0xff, 0xf1, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x5f, 0xff, 0xff, 0xff,
    0xff, 0xf2, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf1, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x8,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xb0, 0x6, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x1, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x10,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xbe,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xc, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xef, 0xff,
    0xff, 0xff, 0xc0, 0xc, 0xff, 0xff, 0xff, 0xfe,
    0x10, 0x0, 0x0, 0x0, 0x2e, 0xff, 0xff, 0xff,
    0xfe, 0xef, 0xff, 0xff, 0xff, 0xd2, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x9d, 0xff, 0xff, 0xd9, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+E88E "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x57, 0x86,
    0x52, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3a, 0xef, 0xff, 0xff, 0xff, 0xd8,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1a,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xb0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xe1, 0x15, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
    0x0, 0xef, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x5, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x4, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0xa, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0xe, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xbc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x4, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x4, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfa, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9,
    0xc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x8, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x4, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf2, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x4, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x8a,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x9,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x91, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x8c, 0xef, 0xff, 0xeb, 0x61, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+E897 "" */
    0x0, 0x0, 0x0, 0x0, 0x49, 0xa9, 0x61, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3d, 0xff,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xef, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0xff, 0x81, 0x0, 0x5e,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xf7,
    0x0, 0x0, 0x2, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xe0, 0x0, 0x0, 0x0, 0x9f, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0xb0, 0x0, 0x0,
    0x0, 0x5f, 0xf3, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xa0, 0x0, 0x0, 0x0, 0x5f, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0xef, 0xa0, 0x0, 0x0, 0x0, 0x5f,
    0xf4, 0x0, 0x0, 0x2, 0x67, 0xff, 0xd7, 0x77,
    0x77, 0x77, 0xaf, 0xf9, 0x74, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf1, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0xef, 0xff, 0xff, 0xff, 0xf8, 0x35, 0xef, 0xff,
    0xff, 0xff, 0xf4, 0xef, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x2f, 0xff, 0xff, 0xff, 0xf4, 0xef, 0xff,
    0xff, 0xff, 0x20, 0x0, 0xd, 0xff, 0xff, 0xff,
    0xf4, 0xef, 0xff, 0xff, 0xff, 0x30, 0x0, 0xe,
    0xff, 0xff, 0xff, 0xf4, 0xef, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xf4, 0xef,
    0xff, 0xff, 0xff, 0xfd, 0x9b, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf4, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x30, 0x0, 0x1, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x0,

    /* U+E8B8 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x88, 0x88,
    0x81, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x72, 0x0, 0x2, 0xdf, 0xff, 0xff,
    0xfd, 0x20, 0x0, 0x27, 0x10, 0x0, 0x0, 0x9,
    0xff, 0xb5, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x5b, 0xff, 0x90, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0x0, 0x0, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x50, 0xd, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x52, 0x25, 0xdf, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x7, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xff,
    0xff, 0x70, 0x0, 0x4e, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0xef, 0xff, 0xff, 0xe4, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0x70, 0x0,
    0x0, 0xaf, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xfa, 0x0, 0xd, 0xff,
    0xff, 0xff, 0xff, 0xe4, 0x0, 0x0, 0x4e, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0xa, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc9, 0x9c, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xe,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xef, 0xff, 0xe0, 0x0, 0x0, 0x5, 0xfa, 0x40,
    0x2a, 0xff, 0xff, 0xff, 0xff, 0xa2, 0x4, 0xbf,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x11, 0x11, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+EA28 "" */
    0x0, 0x0, 0x0, 0x1, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7,
    0x0, 0x0, 0x0, 0x1c, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf9, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x5, 0xff, 0xff, 0xfb, 0xf, 0xff, 0xff,
    0xfd, 0x0, 0xdf, 0xff, 0xff, 0x50, 0x7, 0xff,
    0xff, 0xfb, 0xf, 0xff, 0xff, 0xfd, 0x0, 0xdf,
    0xff, 0xff, 0x70, 0xa, 0xff, 0xf8, 0x85, 0x8,
    0x8a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90,
    0xc, 0xff, 0xf8, 0x85, 0x8, 0x8a, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xe, 0xff, 0xff,
    0xfb, 0xf, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f,
    0xff, 0xe0, 0x1f, 0xff, 0xff, 0xfb, 0xf, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xf0, 0x3f,
    0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0x5f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf5, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0xcf, 0xff, 0xff, 0xff, 0x91,
    0x11, 0x11, 0x11, 0x19, 0xff, 0xff, 0xff, 0xfc,
    0xaf, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xff, 0xfb, 0x4f, 0xff, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff,
    0xff, 0xf4, 0x5, 0xef, 0xe6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7e, 0xfe, 0x50, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+EA75 "" */
    0x3, 0x9a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0x30, 0x3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x9f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xa, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xa0, 0xaf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfa, 0xa, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xa0, 0xaf, 0xf0, 0x0,
    0x0, 0x0, 0xe, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfa, 0xa, 0xff, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xa1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xa0, 0xaf, 0xf0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xe5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfa, 0xa, 0xff, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xfa, 0x10, 0x0, 0x0, 0x0,
    0x0, 0xaa, 0x70, 0xaf, 0xf0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xfe, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xe5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xf0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xa1, 0x0, 0x0, 0x3a, 0xaa, 0x0,
    0x0, 0xa, 0xff, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xfe, 0x50, 0x0, 0x0, 0x7, 0xff, 0xf2, 0x0,
    0x0, 0xaf, 0xf0, 0x0, 0x0, 0x0, 0xf, 0xfa,
    0x10, 0x0, 0x9, 0x52, 0xcf, 0xff, 0x81, 0x75,
    0xa, 0xff, 0x0, 0x0, 0x0, 0x0, 0xe5, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1,
    0xaf, 0xf0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9a,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xfe, 0x30, 0x7f, 0xff, 0xf7, 0xaf,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0x60, 0x0, 0xcf, 0xf6, 0x9, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0,
    0xbf, 0xf6, 0x0, 0xc, 0xff, 0x60, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xbf,
    0xff, 0xe3, 0x7, 0xff, 0xff, 0x60, 0x39, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x0, 0xe, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x85, 0x2d,
    0xff, 0xf8, 0x27, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x99,
    0x90, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 512, .box_w = 30, .box_h = 26, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 390, .adv_w = 512, .box_w = 30, .box_h = 24, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 750, .adv_w = 512, .box_w = 30, .box_h = 28, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1170, .adv_w = 512, .box_w = 30, .box_h = 24, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1530, .adv_w = 512, .box_w = 24, .box_h = 25, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 1830, .adv_w = 512, .box_w = 20, .box_h = 20, .ofs_x = 6, .ofs_y = 6},
    {.bitmap_index = 2030, .adv_w = 512, .box_w = 30, .box_h = 24, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2390, .adv_w = 512, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 2782, .adv_w = 512, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3174, .adv_w = 512, .box_w = 22, .box_h = 29, .ofs_x = 5, .ofs_y = 2},
    {.bitmap_index = 3493, .adv_w = 512, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3885, .adv_w = 512, .box_w = 26, .box_h = 20, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 4145, .adv_w = 512, .box_w = 31, .box_h = 26, .ofs_x = 1, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x5a, 0x30a, 0x331, 0x427, 0x5cb, 0x638, 0x885,
    0x88c, 0x895, 0x8b6, 0xa26, 0xa73
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 57346, .range_length = 2676, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 13, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t material_icons_regular_32 = {
#else
lv_font_t material_icons_regular_32 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = -1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -8,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if MATERIAL_ICONS_REGULAR_32*/
