#include <rgb_lcd.h>

rgb_lcd lcd;
#include <Ultrasonic.h>
Ultrasonic ultra1(7);

//#include "ADXL335.h"
//
//ADXL335 accelerometer;


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
long ultc1;
ultc1 = ultra1.MeasureInCentimeters();
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);


if(ultc1 < 85){
  ultc1=ultc1+2;//from 0-84
  digitalWrite(13,HIGH);
}
  else if(ultc1 < 140){
    ultc1=ultc1+3;//from 85-139
    digitalWrite(12,HIGH);
  }
    else if(ultc1 < 195){
       ultc1=ultc1+4;//from 140-194
       digitalWrite(11,HIGH);
    }
        else if (ultc1 <=330){
           ultc1=ultc1+2;//from 195-330
           digitalWrite(10,HIGH);
        }
            else{
              ultc1=0;
              digitalWrite(13,HIGH);
              digitalWrite(12,HIGH);
              digitalWrite(11,HIGH);
              digitalWrite(10,HIGH);
              
              }
          
Serial.print("Distance:");
Serial.println(ultc1);
Serial.print("Cms");
lcd.setCursor(0,0);
lcd.print("Cur dist = ");
lcd.print(ultc1);
lcd.print("cms");
delay(200);
lcd.clear();

}
