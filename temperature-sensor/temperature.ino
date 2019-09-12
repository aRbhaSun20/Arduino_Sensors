#include <math.h>		//for log
int a;
float temperature;
int B=3975;                  //B value of the thermistor
float resistance;
void setup()
{
}
void loop()
{
    a=analogRead(0);
    resistance=(float)(1023-a)*10000/a; //get the resistance of the sensor;
    temperature=1/(log(resistance/10000)/B+1/298.15)-273.15; // to K → C
    delay(1000);
}
