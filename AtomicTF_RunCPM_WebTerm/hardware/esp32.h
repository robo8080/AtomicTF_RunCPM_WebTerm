#ifndef ESP32_H
#define ESP32_H

SdFat SD;
#define SDINIT 23,33,19,-1 // AtomicTF
//#define SDINIT 18,38,2,4 // M5Stack Core2
//#define SDINIT 14,2,15,13 // TTGO_T1,LOLIN32_Pro
//#define SDINIT 18,19,23,5 // ePaper,ESP32_DevKit
#define SDMHZ 20 // TTGO_T1,LOLIN32_Pro=25 ePaper,ESP32_DevKit=20
//#define SDMHZ 25 // TTGO_T1,LOLIN32_Pro=25 ePaper,ESP32_DevKit=20
#define LED 26 // TTGO_T1=22 LOLIN32_Pro=5(inverted) DOIT_Esp32=2 ESP32-PICO-KIT=no led
//#define LED 5 // TTGO_T1=22 LOLIN32_Pro=5(inverted) DOIT_Esp32=2 ESP32-PICO-KIT=no led
#define LEDinv 1
#define BOARD "AtomicTF"
//#define BOARD "LOLIN32_Pro (clone)"
#define board_esp32
#define board_digital_io

uint8 esp32bdos(uint16 dmaaddr) {
	return(0x00);
}

#endif