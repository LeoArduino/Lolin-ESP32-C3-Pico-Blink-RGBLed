#include <Adafruit_NeoPixel.h>

#define PIN 7 // pin that the NeoPixel is connected to
#define NUM_PIXELS 1 // number of pixels in the strip

Adafruit_NeoPixel pixels(NUM_PIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  pixels.begin(); // initialize the NeoPixel strip
}

void loop() {
  // set the color of the pixel to red
    pixels.setBrightness(50); // set the brightness to 50%
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show(); // send the color to the NeoPixel strip
  delay(1000); // wait for one second

  // set the color of the pixel to green
    pixels.setBrightness(20); // set the brightness to 20%
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show(); // send the color to the NeoPixel strip
  delay(1000); // wait for one second

  //set the color of the pixel to blue
    pixels.setBrightness(50); // set the brightness to 50%
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show(); // send the color to the NeoPixel strip
  delay(1000); // wait for one second

}
