//RGBPixel Demo, by AnalysIR July 2018
//
// This example toggles the LEDs on one RGBPixel module between Green and Red evety 0.5 seconds
// Users can expand the features easily with addition code and additional modules.
//
// Based on the NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
//
//Updated by AnalysIR to support RGBPixel modules- July 2018.

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the RGBPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            5

// How many RGBPixels are attached to the Arduino?
#define NUMMODULES      1 //for the demo we use one RGBPixel module. Increase this value to match the number of modules you have linked in series.
#define NUMPIXELS      NUMMODULES * 2 //there are 2 LEDS on each RGBPixel module

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel RGBpixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayVal = 500; // delay for half a second, between changes

uint8_t flag = true;
#define level 8 //the brightness level from 0 to 255 (can be set individually for each LED)

void setup() {
  RGBpixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  //For each RGBPixel (when facing the front) the LED on the  right is the first and the LED on the left is the second in sequence.
  //The first LED is 0, second is 1, all the way up to the count of modules connected time 2  minus one.

  for (uint16_t pxl = 0; pxl < NUMPIXELS; pxl += 2) {
    if (flag) {
      RGBpixels.setPixelColor(pxl, RGBpixels.Color(0, level, 0)); // Right LED Green color.
      RGBpixels.setPixelColor(pxl + 1, RGBpixels.Color(level, 0, 0)); // Left LED Red color.
    }
    else {
      RGBpixels.setPixelColor(pxl + 1, RGBpixels.Color(0, level, 0)); // Right LED Red color.
      RGBpixels.setPixelColor(pxl, RGBpixels.Color(level, 0, 0)); // Left LED Green color.
    }
  }
  flag = !flag;

  RGBpixels.show(); // This sends the updated pixel color to the hardware.

  delay(delayVal); // Delay for a period of time (in milliseconds).
}
