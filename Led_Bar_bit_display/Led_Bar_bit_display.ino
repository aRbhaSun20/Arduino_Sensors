

#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(7, 6, 0, LED_BAR_10); // Clock pin, Data pin, Orientation

void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{    //to be used in terms of hexa or binary
  // Turn on all LEDs
  bar.setBits(0x3ff);
  delay(1000);

  // Turn off all LEDs
  bar.setBits(0x0);
  delay(1000);

  // Turn on LED 1
  // 0b000000000000001 can also be written as 0x1:
  bar.setBits(0b000000000000001);
  delay(1000);

  // Turn on LEDs 1 and 3
  // 0b000000000000101 can also be written as 0x5:
  bar.setBits(0b000000000000101);
  delay(1000);

  // Turn on LEDs 1, 3, 5, 7, 9
  bar.setBits(0x155);
  delay(1000);

  // Turn on LEDs 2, 4, 6, 8, 10
  bar.setBits(0x2AA);
  delay(1000);

  // Turn on LEDs 1, 2, 3, 4, 5
  // 0b000000000011111 == 0x1F
  bar.setBits(0b000000000011111);
  delay(1000);

  // Turn on LEDs 6, 7, 8, 9, 10
  // 0b000001111100000 == 0x3E0
  bar.setBits(0b000001111100000);
  delay(1000);
}
