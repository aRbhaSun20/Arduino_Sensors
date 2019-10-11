#include <Wire.h> 								//for I2C pin interface
#include "MMA7660.h" 							// for accelerometer
MMA7660 acc;  									// declare a variable
void setup()
{
	acc.init();  

}
void loop()
{
	int8_t x;										//inbuilt variables  	
	int8_t y;
	int8_t z;

	float ax,ay,az;
	
acc.getXYZ(&x,&y,&z);
	
acc.getAcceleration(&ax,&ay,&az);

	delay(500);
}
