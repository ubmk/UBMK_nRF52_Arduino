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
  23, //  0 - P0.23 (RX)
  25, //  1 - P0.25 (TX)
   4, //  2 - P0.04 (VDIV)
   6, //  3 - P0.06 (LED_BLUE)
  17, //  4 - P0.17 (LED1)
  20, //  5 - P0.20 (LED2)
  22, //  6 - P0.22 (LED3)
  13, //  7 - P0.13 (row0)
  24, //  8 - P0.24 (row1)
  36, //  9 - P1.04 (row2)
  38, // 10 - P1.06 (row3)
  32, // 11 - P1.00 (row4)
  34, // 12 - P1.02 (row5)
   5, // 13 - P0.05 (row6)
  41, // 14 - P1.09 (row7)
  30, // 15 - P0.30 (row8)
   2, // 16 - P0.02 (col0)
  29, // 17 - P0.29 (col1)
  31, // 18 - P0.31 (col2)
  45, // 19 - P1.13 (col3)
  43, // 20 - P1.11 (col4)
  42, // 21 - P1.10 (col5)
   3, // 22 - P0.03 (col6)
  28, // 23 - P0.28 (col7)
  15, // 24 - P0.15 (SCK)
   7, // 25 - P0.07 (MOSI)
  12, // 26 - P0.12 (MISO)
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

