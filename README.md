# Arduino Core for Nordic Semiconductor nRF5 based boards

## Installing
  
### Arduino nRF5x BSP via Board Manager

**NOTE:** For now, you need to install this BSP to gain access to the compiler. In the future, only the Adafruit nRF52 BSP will be required.

 1. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software) (At least v1.6.12)
 2. Start the Arduino IDE
 3. Go into Preferences
 4. Add ```https://sandeepmistry.github.io/arduino-nRF5/package_nRF5_boards_index.json``` as an "Additional Board Manager URL"
 5. Open the Boards Manager from the Tools -> Board menu and install "Nordic Semiconductor nRF5 Boards"
 6. Select your nRF5 board from the Tools -> Board menu

### Adafruit nRF52 BSP via git (for core development)

 1. Follow steps from Board Manager section above
 2. ```cd <SKETCHBOOK>```, where ```<SKETCHBOOK>``` is your Arduino Sketch folder:
  * OS X: ```~/Documents/Arduino```
  * Linux: ```~/Arduino```
  * Windows: ```~/Documents/Arduino```
 3. Create a folder named ```hardware/Adafruit```, if it does not exist, and change directories to it
 4. Clone this repo: `git clone git@github.com:adafruit/Adafruit_nRF52_Arduino.git`
 5. Restart the Arduino IDE

### Third Party Tools

#### nrfutil

The Adafruit nRF52 BSP includes a [python wrapper](https://github.com/NordicSemiconductor/pc-nrfutil) for Nordic's `nrfutil`, which is used to flash boards. Go into the BSP folder (`hardware/Adafruit/Adafruit_nRF52_Arduino`), and run the following to make this available to the Arduino IDE:

 - cd tools/nrfutil-0.5.2
 - sudo pip install nrfutil
 
 **Note**: if this fails you may need to run `$ sudo pip install -r requirements.txt` from the same folder.

## Bootloader Support

### Third Party Tools

To burn the bootloader from within the Arduino IDE, you will need the following tools installed on your system and available in the system path:

#### Jlink Driver and Tools

Download and install the [JLink Software and Documentation Pack](https://www.segger.com/downloads/jlink) from Segger, which will also install a set of command line tools.

#### nrfjprog

In order to burn the bootloader with a J-Link, you will need `nrfjprog` from Nordic:

- Download [nRF5x-Command-Line-Tools](https://www.nordicsemi.com/eng/Products/Bluetooth-low-energy/nRF52832#Downloads) for OSX/Linux/Win32
- Extract the downloaded file and add the extracted path to your environment `PATH` variable
- Check to make sure you can run `nrfjprog` from your terminal/command prompt

### Burning the Bootloader

Once the tools above have been installed and added to your system path, from the Arduino IDE:

- Select `Tools > Board > Feather52`
- Select `Tools > Programmer > J-Link with Feather52`
- Select `Tools > Burn Bootloader` with the board and J-Link connected

## BLE Arduino Support

This Arduino Core does **not** contain any Arduino style API's for BLE functionality. All the relevant Nordic SoftDevice (S110, S130, S132) header files are included build path when a SoftDevice is selected via the `Tools` menu.

### Recommend BLE Libraries

 * [BLEPeripheral](https://github.com/sandeepmistry/arduino-BLEPeripheral)
   * v0.3.0 and greater, available via the Arduino IDE's library manager.
   * Supports peripheral mode only.

## Credits

This core is based on the [Arduino SAMD Core](https://github.com/arduino/ArduinoCore-samd) and licensed under the same [GPL License](LICENSE)

The following tools are used:

 * [GCC ARM Embedded](https://launchpad.net/gcc-arm-embedded) as the compiler
 * A [forked](https://github.com/sandeepmistry/openocd-code-nrf5) version of [OpenOCD](http://openocd.org) to flash sketches