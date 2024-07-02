#pragma once

// Display
#include <Arduino_GFX_Library.h>
#define GFX_BL 45
Arduino_DataBus *bus = new Arduino_ESP32LCD8(
    0 /* DC */, GFX_NOT_DEFINED /* CS */, 47 /* WR */, GFX_NOT_DEFINED /* RD */,
    9 /* D0 */, 46 /* D1 */, 3 /* D2 */, 8 /* D3 */, 18 /* D4 */, 17 /* D5 */, 16 /* D6 */, 15 /* D7 */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, 4 /* RST */, 3 /* rotation */, true /* IPS */);

// Touchscreen
#define TOUCH_MODULES_FT5x06
#define TOUCH_MODULE_ADDR FT5x06_ADDR
#define TOUCH_SCL 5
#define TOUCH_SDA 6
#define TOUCH_RES -1
#define TOUCH_INT -1

// MicroSD card
#define SD_SCK 39
#define SD_MISO 38
#define SD_MOSI 40
#define SD_CS 41

// I2S
#define I2S_MCLK -1
#define I2S_BCLK 36
#define I2S_LRCK 35
#define I2S_DOUT 37
#define I2S_DIN -1
