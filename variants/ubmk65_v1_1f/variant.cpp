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
   5, //  2 - P0.05 (VDIV)
  26, //  3 - P0.26 (LED_BLUE)
  32, //  4 - P1.00 (LED1)
  34, //  5 - P1.02 (LED2)
  36, //  6 - P1.04 (LED3)
  15, //  7 - P0.15 (row0)
  17, //  8 - P0.17 (row1)
  20, //  9 - P0.20 (row2)
  22, // 10 - P0.22 (row3)
  13, // 11 - P0.13 (row4)
  24, // 12 - P0.24 (row5)
  12, // 13 - P0.12 (row6)
   7, // 14 - P0.07 (row7)
  30, // 15 - P0.30 (row8)
   2, // 16 - P0.02 (col0)
  29, // 17 - P0.29 (col1)
  31, // 18 - P0.31 (col2)
  45, // 19 - P1.13 (col3)
  43, // 20 - P1.11 (col4)
  42, // 21 - P1.10 (col5)
   3, // 22 - P0.03 (col6)
  28, // 23 - P0.28 (col7)
   6, // 24 - P0.06 (P0/SCK)
   8, // 25 - P0.08 (P1/MOSI)
  41, // 26 - P1.09 (P2/MISO)
   4, // 27 - P0.04 (A0)
   9, // 28 - P0.09 (P4/NFC1)
  10, // 29 - P0.10 (P5/NRF2)
  38, // 30 - P1.06 (LED_CAP)
  46, // 31 - P1.14 (BTN)
  47 //  32 - P1.15 (BTN)
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED0, OUTPUT);
  ledOff(PIN_LED0);
}

