#include <rgb_lcd.h>       //for I2C PINS

#include <Wire.h>          // LIBRARY FOR RGB_LCD

rgb_lcd lcd;                 //DECLARE A VARIABLE

byte smiley[8] = {
    0b00000,
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000
};


byte armsDown[8] = {
    0b00100,
    0b01010,
    0b00100,
    0b00100,
    0b01110,
    0b10101,
    0b00100,
    0b01010
};

byte armsUp[8] = {
    0b00100,
    0b01010,
    0b00100,
    0b10101,
    0b01110,
    0b00100,
    0b00100,
    0b01010
};;


void setup(){


    lcd.begin(16, 2);
 #if 1   

    // create a new character
    lcd.createChar(1, smiley);
  ;
    // create a new character
    lcd.createChar(3, armsDown);
    
    // create a new character
    lcd.createChar(4, armsUp);
#endif 

    // set up the lcd's number of columns and rows:
    lcd.write(0);
        lcd.write(1);
}


void loop(){
 

  
  lcd.setCursor(0,0);                        // set the cursor:
      // read the potentiometer on A0:
    int sensorReading = analogRead(A0);
    // map the result to 200 - 1000:
    int delayTime = map(sensorReading, 0, 1023, 20, 1000);
    // set the cursor to the bottom row, 5th position:
    lcd.setCursor(4, 1);
    // draw the little man, arms down:
    lcd.write(3);
    delay(delayTime);
    lcd.setCursor(4, 1);
    // draw him arms up:
    lcd.write(4);
    delay(delayTime);
 
//  lcd.println("hello everyon");              //to print on RGB
//          lcd.autoscroll();                  //to start autoscroll     
//          
//  delay(1000);
//  lcd.noAutoscroll();                        //to stop autoscroll
//
//  delay(3000);
//  lcd.noBlink();                            //not ot blink
//  
//    delay(500);
//  lcd.blink();                              //to blink
//  
//    lcd.noCursor();                         // Turn off the cursor:
//    delay(500);                             
//    lcd.cursor();                             // Turn on the cursor:    
  
lcd.clear();                                 // to clear the screen
  
}


