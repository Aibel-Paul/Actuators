#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 12

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {

  // Red
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(100);
  }

  delay(500);

  // Green
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0,255,0));
    pixels.show();
    delay(100);
  }

  delay(500);

  // Blue
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0,0,255));
    pixels.show();
    delay(100);
  }

  delay(500);

  // Turn OFF
  pixels.clear();
  pixels.show();
  delay(1000);
}