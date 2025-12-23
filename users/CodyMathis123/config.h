// Copyright @filterpaper
// SPDX-License-Identifier: GPL-2.0+

#pragma once

// Common QMK settings
#define USB_SUSPEND_WAKEUP_DELAY 2000
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// Space saving options
#define LAYER_STATE_8BIT
#define NO_ACTION_ONESHOT
// Tap-hold settings
#define TAPPING_TERM 185
#define QUICK_TAP_TERM 105
#ifdef CONVERT_TO_KB2040
#   define SHIFT_TAP_TERM 165
#else
#   define SHIFT_TAP_TERM 180
#endif
#define TAPPING_TERM_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#ifdef SPLIT_KEYBOARD
#   define EE_HANDS
#endif

#ifdef COMBO_ENABLE
#   define COMBO_TERM 30
#   define EXTRA_SHORT_COMBOS
#   define COMBO_SHOULD_TRIGGER
#   define COMBO_ONLY_FROM_LAYER 0
#endif

#ifdef MOUSEKEY_ENABLE
#	define MOUSEKEY_DELAY 0			// Delay between pressing a key and cursor movement
#	define MOUSEKEY_INTERVAL 15		// Time between cursor movements in milliseconds
#	define MOUSEKEY_MOVE_DELTA 10	// Step size for acceleration
#	define MOUSEKEY_MAX_SPEED 9
#	define MOUSEKEY_TIME_TO_MAX 90
#	define MOUSEKEY_WHEEL_DELAY 16
#	define MOUSEKEY_WHEEL_INTERVAL 30
#	define MOUSEKEY_WHEEL_MAX_SPEED 10
#	define MOUSEKEY_WHEEL_TIME_TO_MAX 95
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES
#   define RGB_MATRIX_DEFAULT_SPD 128
#   define RGB_MATRIX_DEFAULT_HUE 180
#   define ENABLE_RGB_MATRIX_CUSTOM_CANDY_TAP
#   define ENABLE_RGB_MATRIX_CUSTOM_CANDY_MOSAIC
#   define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CUSTOM_CANDY_TAP
#   define DEF_MODE RGB_MATRIX_CUSTOM_CANDY_TAP
#   define CMK_MODE RGB_MATRIX_CUSTOM_CANDY_MOSAIC
#endif

// Layout macros
#ifndef __ASSEMBLER__
#   include "layout.h"
#endif
