//connections remains the same

int ForceSensi = 0;   // FSR is connected to analog 0
int LEDpin = 11;      // connect Red LED to pin 11 (PWM pin)
int ForceSensiRead;      // the analog reading from the FSR resistor divider
int LEDbrightness;
 
void setup(void) {
  Serial.begin(9600);   // We'll send debugging information via the Serial monitor
  pinMode(LEDpin, OUTPUT);
}
 
void loop(void) {
  ForceSensiRead = analogRead(ForceSensi);
  Serial.print("Analog reading = ");
  Serial.println(ForceSensiRead);
 
  LEDbrightness = map(ForceSensiRead, 0, 1023, 0, 255);
  // LED gets brighter the harder you press
  analogWrite(LEDpin, LEDbrightness);
 
  delay(100);
}