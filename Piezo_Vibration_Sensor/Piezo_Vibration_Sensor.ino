Name: Piezo Vibration Sensor

Principle:
Similar to an accelerometer with a wide range of frequency receptors.

Type of protocol:SERIAL ANALOG

 PIN Connection: All Digital and Analog Pins

Type of Sensor: Passive

Codes:

const int ledPin=3;
void setup() {
    Serial.begin(9600);
    pinMode(ledPin,OUTPUT);
}

void loop() {
    int sensorState = digitalRead(2);
    Serial.println(sensorState);
    delay(100);
    if(sensorState == HIGH)
    {
        digitalWrite(ledPin,HIGH);
    }
    else
    {
        digitalWrite(ledPin,LOW);
    }
    delay(1000);
}

Ratings:

Wide dynamic range：0.1Hz~180Hz
    • Adjustable sensitivity
    • High receptivity for strong impact