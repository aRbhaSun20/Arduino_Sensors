int foot_Switch = 8;
int LED = 5;

void setup() {
  // put your setup code here, to run once:
pinMode(foot_Switch, INPUT);
pinMode(LED, OUTPUT);
}
t
void loop() {
  // put your main code here, to run repeatedly:
if(digitaRead(foot_Switch)== HIGH)
digitalWrite(LED, HIGH);
else
digitalWrite(LED, LOW);
}
