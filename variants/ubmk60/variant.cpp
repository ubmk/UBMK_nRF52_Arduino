/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  36, //  0 - P1.04 (RX)
  34, //  1 - P1.02 (TX)
  26, //  2 - P0.26 (VDIV)
   6, //  3 - P0.06 (LED_BLUE)
   8, //  4 - P0.08 (LED1)
   4, //  5 - P0.04 (LED2)
  12, //  6 - P0.12 (LED3)
  13, //  7 - P0.13 (row0)
  24, //  8 - P0.24 (row1)
  15, //  9 - P0.15 (row2)
  17, // 10 - P0.17 (row3)
  41, // 11 - P1.09 (row4)
   7, // 12 - P0.07 (row5)
  45, // 13 - P1.13 (row6)
  28, // 14 - P0.28 (row7)
   2, // 15 - P0.02 (row8)
  29, // 16 - P0.29 (col0)
  31, // 17 - P0.31 (col1)
  30, // 18 - P0.30 (col2)
   5, // 19 - P0.05 (col3)
  43, // 20 - P1.11 (col4)
  42, // 21 - P1.10 (col5)
   3, // 22 - P0.03 (col6)
  38, // 23 - P1.06 (SS)
  20, // 24 - P0.20 (SCK)
  22, // 25 - P0.22 (MOSI)
  32, // 26 - P1.00 (MISO)
   9, // 27 - P0.09 (NFC1)
  10, // 28 - P0.10 (NRF2)
  46, // 29 - P1.14 (BTN)
  47 //  30 - P1.15 (BTN)
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED0, OUTPUT);
  ledOff(PIN_LED0);
}

