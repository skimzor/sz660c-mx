/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4853 /* HS */
#define PRODUCT_ID      0x660C
#define DEVICE_VER      0x0100
#define MANUFACTURER    skimzor
#define PRODUCT         SZ660C-MX
#define DESCRIPTION     Leopold FC660C with SkimZor alternative controller using QMK

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B0,F7,C7,B1,D2}
#define MATRIX_COL_PINS {D3,D7,D6,B4,D1,F6,B3,B2,C6,B6,B5,F0,F1,F4,F5}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*#define LED_CAPS_LOCK_PIN B2 */
/*#define LED_PIN_ON_STATE 0 */

/* Backlight configuration */
//#define BACKLIGHT_PIN B6
//#define BACKLIGHT_BREATHING
//#define BACKLIGHT_LEVELS 4

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
