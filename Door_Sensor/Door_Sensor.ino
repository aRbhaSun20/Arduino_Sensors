/*
Door Sensor acts similar to a reed Switch acting upon on the magnetic field
so formed.
In this section connect a door Sensor with an LED such that as soon as it reads a value the LED switchs on.

*/

int LED = 8;
int Switch = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(Switch,INPUT);
pinMode(LED,OUTPUT);
digitalWrite(Switch,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(Switch) == LOW){
	digitalWrite(LED,LOW);
}
else{
	digitalWrite(LED,HIGH);
}


}
