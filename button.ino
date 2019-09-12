void setup(){

Serial.begin(9600);
pinMode(8,INPUT);
}


void loop(){
int state;
state = digitalRead(8);
delay(500);

if(state == HIGH)
  Serial.print("switch on");

else
  Serial.print("switch off");
  Serial.print("\n");
}
