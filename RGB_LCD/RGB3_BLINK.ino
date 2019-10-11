#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;


void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);

    // Print a message to the LCD.
    lcd.print("hello, world!");
    
    delay(1000);
}

void loop() 
{
    // Turn off the blinking cursor:
    lcd.noBlink();
    delay(3000);
    // Turn on the blinking cursor:
    lcd.blink();
    delay(3000);
}
