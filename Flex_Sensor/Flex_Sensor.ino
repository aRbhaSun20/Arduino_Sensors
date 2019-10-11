int Flex_pin = A0;
int LED_Pin = 8;

void setup() {
  // put your setup code here, to run once:
 pinMode(Flex_pin,INPUT);
 Serial.begin(9600);
 pinMode(LED_Pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Read the value from the sensor
int value = analogRead(Flex_pin);
Serial.print(value);
//map the values of the sensor
value = map(value, 700, 900, 0, 255);
analogWrite(LED_Pin,value);
delay(100);
}
