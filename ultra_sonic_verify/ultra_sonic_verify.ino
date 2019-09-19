#include <rgb_lcd.h>

rgb_lcd lcd;
#include <Ultrasonic.h>
Ultrasonic ultra1(7);

//#include "ADXL335.h"
//
//ADXL335 accelerometer;

const int LED1 13;
const int LED2 12;
const int LED3 11;
const int LED4 10;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);

pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
long ultc1;
ultc1 = ultra1.MeasureInCentimeters();
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);


map(ultc1,0,85,);


// if(ultc1 < 85){
//   ultc1=ultc1+2;//from 0-84
//   digitalWrite(LED1,HIGH);
// }
//   else if(ultc1 < 140){
//     ultc1=ultc1+3;//from 85-139
//     digitalWrite(LED2,HIGH);
//   }
//     else if(ultc1 < 195){
//        ultc1=ultc1+4;//from 140-194
//        digitalWrite(LED3,HIGH);
//     }
//         else if (ultc1 <=330){
//            ultc1=ultc1+2;//from 195-330
//            digitalWrite(LED4,HIGH);
//         }
//             else{
//               ultc1=0;
//               digitalWrite(LED1,HIGH);
//               digitalWrite(LED2,HIGH);
//               digitalWrite(LED3,HIGH);
//               digitalWrite(LED4,HIGH);
              
//               }
          
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
