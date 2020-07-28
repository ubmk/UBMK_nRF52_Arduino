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
  13, //  2 - P0.13 (SCK)
  41, //  3 - P1.09 (MOSI)
   5, //  4 - P0.05 (MISO)
  31, //  5 - P0.31 (SS)
  30, //  6 - P0.30 (INT)
   3, //  7 - P0.03 (A1)
  28, //  8 - P0.28 (A4)
  45, //  9 - P1.13 (A3)
   2, // 10 - P0.02 (A0)
  29, // 11 - P0.29 (A5)
  24, // 12 - P0.24 (A2)
  42, // 13 - P1.10 (SCL)
  43, // 14 - P1.11 (SDA)
   9, // 15 - P0.09 (NFC1)
  10, // 16 - P0.10 (NRF2)
  46, // 17 - P1.14 (BTN)
  47 //  18 - P1.15 (BTN)
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED0, OUTPUT);
  ledOff(PIN_LED0);
}

