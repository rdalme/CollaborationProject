// Adapted from ArrayOfLedArrays https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples

#include <FastLED.h>

#define NUM_STRIPS 2 // 2 strips connected
#define NUM_LEDS_PER_STRIP 4  // 4 LEDs per strip
CRGB leds[NUM_STRIPS][NUM_LEDS_PER_STRIP];

void setup() {
  // tell FastLED there's 4 NEOPIXEL leds on pin 2
  FastLED.addLeds<NEOPIXEL, 2>(leds[0], NUM_LEDS_PER_STRIP);

  // tell FastLED there's 4 NEOPIXEL leds on pin 3
  FastLED.addLeds<NEOPIXEL, 8>(leds[1], NUM_LEDS_PER_STRIP);

  FastLED.setBrightness(5);  //brightness set to 50 out of 255
}

void loop() {
  // This outer loop will go over each strip, one at a time
  for (int x = 0; x < NUM_STRIPS; x++) {
    // This inner loop will go over each led in the current strip, one at a time
    for (int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
      leds[x][i] = CRGB::Red;  // Purple
      FastLED.show();
      leds[x][i] = CRGB::Black;
      delay(1000);  // 100 ms delay
    }
  }
}
