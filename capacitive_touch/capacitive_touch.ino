const int TouchPin=2;
const int ledPin=3;

void setup() {
    pinMode(TouchPin, INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int sensorValue = digitalRead(TouchPin);
    if(sensorValue==1)
    {
        digitalWrite(ledPin,HIGH);
        Serial.print("switch is on");
    }
    else
    {
        digitalWrite(ledPin,LOW);
        Serial.print("switch is off");
        
    }
    Serial.print("\n");
    delay(50);
}
