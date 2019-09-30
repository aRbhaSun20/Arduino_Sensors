
int IR_Dist = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(IR_Dist, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(IR_Dist);
Serial.print (value);
delay(100);
}
