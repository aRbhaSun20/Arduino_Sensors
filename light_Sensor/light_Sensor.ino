void setup(){

Serial.begin(9600);
pinMode(A0,INPUT);
}
void loop(){

int value = analogRead(A0);

Serial.print("\nnThe value = ");
Serial.print(value);
delay(500);
}

