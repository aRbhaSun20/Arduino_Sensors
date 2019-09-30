
int Pulse = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(Pulse, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(Pulse);
Serial.print(value);
delay(100);
}
