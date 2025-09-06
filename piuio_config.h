#ifndef PIUIO_PICO_PIUIO_CONFIG_H
#define PIUIO_PICO_PIUIO_CONFIG_H
#include "piuio_ws2812_helpers.h"

//No need to define that it's a button board

// Uncomment these defines to enable WS2812 LED support.
// #define ENABLE_WS2812_SUPPORT
// #define WS2812_IS_RGBW false
// #define WS2812_PIN 16

// Modify these to edit the colors of the cabinet lamps.
static uint32_t ws2812_color[5] = {
        urgb_u32(0, 255, 0),    // Lower left
        urgb_u32(255, 0, 0),    // Upper left
        urgb_u32(0, 0, 255),    // Bass / neon
        urgb_u32(255, 0, 0),    // Upper right
        urgb_u32(0, 255, 0)     // Lower right
};

// Modify these arrays to edit the pin out.
// Map these according to your button pins.
static const uint8_t pinSwitch[12] = {
        8,     // P1 DL
        6,     // P1 UL
        7,     // P1 CN
        6,      // P1 UR
        5,      // P1 DR
        3,     // P2 DL
        1,     // P2 UL
        2,      // P2 CN
        1,      // P2 UR
        0,      // P2 DR
		// 14, // macro p1 (TODO : Imploment comand menu macro)
		// 15, // Macro p2
};

// Map these according to your LED pins.
static const uint8_t pinLED[10] = {
        26,     // P1 DL
        28,     // P1 UL
        27,     // P1 CN
        28,      // P1 UR
        29,      // P1 DR
        10,     // P2 DL
        11,     // P2 UL
        12,      // P2 CN
        11,      // P2 UR
        13       // P2 DR
};

#endif //PIUIO_PICO_PIUIO_CONFIG_H
