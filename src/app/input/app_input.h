#pragma once

#include <SDL_haptic.h>
#include <SDL_joystick.h>
#include <SDL_version.h>
#include "gamecontrollerdb_updater.h"

#include "lvgl.h"
#include "lvgl/input/lv_drv_sdl_key.h"

typedef struct app_t app_t;

typedef struct app_gamepad_state_t {
    char leftTrigger, rightTrigger;
    short leftStickX, leftStickY;
    short rightStickX, rightStickY;
    int buttons;
    SDL_JoystickID sdl_id;
    SDL_GameController *controller;
#if !SDL_VERSION_ATLEAST(2, 0, 9)
    SDL_Haptic *haptic;
    int haptic_effect_id;
#endif
    short id;
    bool initialized;
} app_gamepad_state_t;

typedef struct app_input_t {
    commons_gcdb_updater_t gcdb_updater;
    SDL_Surface *blank_cursor_surface;
    app_gamepad_state_t gamepads[4];
    size_t gamepads_count;
    short activeGamepadMask;
} app_input_t;


void app_input_init(app_input_t *input, app_t *app);

void app_input_deinit(app_input_t *input);

void app_input_handle_event(app_input_t *input, const SDL_Event *event);
