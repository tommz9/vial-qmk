// Copyright 2022 Tomas Barton (@tommz9)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

#define EE_HANDS
#define SOFT_SERIAL_PIN D2
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS \
    { B4, B5, B6, B2, B3 }
#define MATRIX_COL_PINS \
    { D1, D0, D4, C6, D7, E6 }


// #define MATRIX_ROW_PINS_RIGHT { B4, B5, B6, B2, B3 }
// #define MATRIX_COL_PINS_RIGHT { D1, D0, D4, C6, D7, E6 }

#define USB_POLLING_INTERVAL_MS 1
