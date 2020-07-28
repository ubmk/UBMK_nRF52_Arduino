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
  32, //  0 - P1.00 (RX)
  34, //  1 - P1.02 (TX)
  13, //  2 - P0.13 (VDIV)
   3, //  3 - P0.03 (LED_BLUE)
  45, //  4 - P1.13 (LED1)
   2, //  5 - P0.02 (LED2)
  29, //  6 - P0.29 (LED3)
  15, //  7 - P0.15 (SCK)
  17, //  8 - P0.17 (MISO)
  20, //  9 - P0.20 (MOSI)
  30, // 10 - P0.30 (HOST_INT)
  31, // 11 - P0.31 (HOST_SS)
  46, // 12 - P1.14 (BTN)
  47, //  13 - P1.15 (BTN)

  32+11, // 1.11
  32+10, // 1.10
  28, // 0.28
  26, // 0.26
  6, // 0.06
  5, // 0.05
  8, // 0.08
  32+9, // 1.09
  4, // 0.04
  12, // 0.12
  7, // 0.07
  22, // 0.22
  24, // 0.24
  32+4, // 1.04
  32+6, // 1.06
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

