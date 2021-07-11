#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER    Alenas
#define PRODUCT         Handwired Preonic
#define DESCRIPTION     For Honor


#define MATRIX_ROWS 5
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4}
#define MATRIX_COL_PINS { D7, E6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6}
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

/* key combination for magic key command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

