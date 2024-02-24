// Copyright 2024 ibakha (@ibakha)
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


/** Split keyboard Config */
// #define SOFT_SERIAL_PIN     D2
#define SERIAL_USART_FULL_DUPLEX
#define SOFT_SERIAL_PIN A2
// #define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_RX_PIN A3

#define SERIAL_USART_PIN_SWAP
#define SELECT_SOFT_SERIAL_SPEED 1
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_TX_PAL_MODE 7
#define SERIAL_USART_RX_PAL_MODE 7
#define SERIAL_USART_TIMEOUT 20


// #define SPI_DRIVER SPID1
// #define SPI_SCK_PIN A5
// #define SPI_MISO_PIN A6
// #define SPI_MOSI_PIN A7
// #define SPI_SCK_PAL_MODE 5
// #define SPI_MISO_PAL_MODE 5
// #define SPI_MOSI_PAL_MODE 5

// #ifdef POINTING_DEVICE_ENABLE
// /** Trackball Config*/
// #define SPLIT_POINTING_ENABLE
// #define PMW33XX_CS_PIN  C10
// #define POINTING_DEVICE_SDIO_PIN    A14
// #define POINTING_DEVICE_SCLK_PIN    A15
// #define POINTING_DEVICE_RIGHT
// #endif

// #ifdef RGB_MATRIX_ENABLE
// /** WS2812 Config */
// #define WS2812_DI_PIN   D7
// #define RGB_MATRIX_SPLIT    {26, 26}
// #endif

// #ifdef BLUETOOTH_ENABLE
// /** Bluetooth config */
// #define BLUEFRUIT_LE_RST_PIN B0
// #define BLUEFRUIT_LE_CS_PIN  C4
// #define BLUEFRUIT_LE_IRQ_PIN C5
// #endif
