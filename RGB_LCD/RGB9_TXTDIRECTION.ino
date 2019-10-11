
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

int thisChar = 'a';

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    // turn on the cursor:
    lcd.cursor();
}

void loop() 
{
    // reverse directions at 'm':
    if (thisChar == 'm') 
    {
        // go right for the next letter
        lcd.rightToLeft();
    }
    // reverse again at 's':
    if (thisChar == 's') 
    {
        // go left for the next letter
        lcd.leftToRight();
    }
    // reset at 'z':
    if (thisChar > 'z')
    {
        // go to (0,0):
        lcd.home();
        // start again at 0
        thisChar = 'a';
    }
    // print the character
    lcd.write(thisChar);
    // wait a second:
    delay(1000);
    // increment the letter:
    thisChar++;
}
