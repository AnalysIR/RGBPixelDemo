# RGBPixelDemo
An Arduino demo sketch for use with the RGBPixels available from AnalysIR's Tindie store: https://www.tindie.com/stores/AnalysIR/

**Requirements:**
- Tested with Arduino IDE v1.8.5 using an Arduino UNO.
- a minimum of 1 RGBPixel module, available via Tindie.

**Documentation:**
- Is available via the Tindie store linked above.

**Pinouts:** 
- UNO Pin 5 is connected to DataIN on first module in sequence.
- 5V & GND are connected to 5V & GND on first module in sequence.
- 5V & GND are connected from the first module to to 5V & GND on the second  module in sequence....and so on.
- DataOUT on the first module is connected to DataIN on the second module in sequence ....and so on.


**Contact via:** https://www.AnalysIR.com/blog/



*Based on the NeoPixel Ring simple sketch (c) 2013 Shae Erisson, released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library*
