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
  38, //  2 - P1.06 (LED0)
  32, //  3 - P1.00 (LED1)
  34, //  4 - P1.02 (LED2)
  36, //  5 - P1.04 (LED3)
  26, //  6 - P0.26 (SCK)
   8, //  7 - P0.08 (MOSI)
   6, //  8 - P0.06 (MISO)
  12, //  9 - P0.12 (INT)
   7, // 10 - P0.07 (SS)
   3, // 11 - P0.03 (A1)
  28, // 12 - P0.28 (A4)
   2, // 13 - P0.02 (A0)
  29, // 14 - P0.29 (A5)
  30, // 15 - P0.30 (A6)
  15, // 16 - P0.15 (SDA)
  17, // 17 - P0.17 (SCL)
   9, // 18 - P0.09 (NFC1)
  10, // 19 - P0.10 (NRF2)
  46, // 20 - P1.14 (BTN)
  47 //  21 - P1.15 (BTN)
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED0, OUTPUT);
  ledOff(PIN_LED0);
}

