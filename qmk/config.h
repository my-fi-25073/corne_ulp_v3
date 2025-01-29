// Copyright 2025 my-fi (@my-fi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN GP1
#define USB_VBUS_PIN GP28
#define SPLIT_HAND_PIN GP0

// #define RGB_DISABLE_WHEN_USB_SUSPENDED
// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define RGB_MATRIX_KEYPRESSES

#define USB_SUSPEND_WAKEUP_DELAY 200

/* RP2040- and hardware-specific config */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

