/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Espressif ESP32 (Tensilica Xtensa LX6) pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Espressif ESP32"


//
// I2S (steppers & other output-only pins)
//
// #define I2S_STEPPER_STREAM
#if ENABLED(I2S_STEPPER_STREAM)
  #define I2S_WS                              25
  #define I2S_BCK                             26
  #define I2S_DATA                            27
#endif

//
// I2C pins to be used for LCD adapter
//
// The ESP32 allows these to be set to any output-capable pin,
// so we have the freedom to connect the LCD adapter to any
// pin we like.
#define ESP_I2C_SDA                           27
#define ESP_I2C_SCL                           26

//
// Limit Switches
//
#define X_MIN_PIN                             15 
#define Y_MIN_PIN                             21
#define Z_MIN_PIN                             -1

//
// Steppers
//
#define X_STEP_PIN                             4
#define X_DIR_PIN                              5
#define X_ENABLE_PIN                          -1
//#define X_CS_PIN                             0

#define Y_STEP_PIN                            18
#define Y_DIR_PIN                             19
#define Y_ENABLE_PIN                          -1
//#define Y_CS_PIN                            13

#define Z_STEP_PIN                             2
#define Z_DIR_PIN                             25
#define Z_ENABLE_PIN                          -1
//#define Z_CS_PIN                             5  // SS_PIN

//#define E0_STEP_PIN                        137
//#define E0_DIR_PIN                         138
//#define E0_ENABLE_PIN                      139
//#define E0_CS_PIN                           21

#define X_HARDWARE_SERIAL Serial2
#define Y_HARDWARE_SERIAL X_HARDWARE_SERIAL
#define Z_HARDWARE_SERIAL X_HARDWARE_SERIAL

//
// Temperature Sensors
//
#define TEMP_0_PIN                            -1  // Analog Input
//#define TEMP_BED_PIN                       120  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                          -1
#define FAN_PIN                               14
//#define HEATER_BED_PIN                      -1

// SPI
//#define SDSS                                -1

// Servo
#define SERVO0_PIN 13

//
// LCD / Controller
//
#if (HAS_WIRED_LCD && IS_ULTIPANEL) || TOUCH_UI_ULTIPANEL

  #define BTN_ENC                             12

#endif