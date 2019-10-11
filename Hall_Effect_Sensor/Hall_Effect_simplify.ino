int LED = 8;
int Hall_Effect = 2;

void loop(){
pinMode(LED, OUTPUT);
pinMode(Hall_Effect,INPUT);
}

void setup(){
 int value = digitalRead(Hall_Effect);
 if(value == HIGH)
 digitalWrite(LED, HIGH);
 else
 digitalWrite(LED, LOW);
}
