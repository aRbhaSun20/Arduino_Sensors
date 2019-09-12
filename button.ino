const Button_Pin = 8;


void setup(){

Serial.begin(9600);
pinMode(Button_Pin,INPUT);
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
