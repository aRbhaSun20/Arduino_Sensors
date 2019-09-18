#include <Servo.h>

#define Ras A0
#define LED 13  
#define ADC_REF 5 
#define GROVE_VCC 5 
#define FULL_ANGLE 300 

Servo dem;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
   pinMode(ROTARY_ANGLE_SENSOR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 float voltage;
    int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
    voltage = (float)sensor_value*ADC_REF/1023;

    int val;
    val=map(sensor_value,0,1023,0,FULL_ANGLE);
    dem.write(val);
    delay(15);
}
