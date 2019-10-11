
int LED1 = 2;
int LED2 = 3;
int Tilt = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(Tilt,INPUT);
}

void loop() {
  if (digitalRead(Tilt) == 1)
  {
  digitalWrite(LED1, HIGH);  
  digitalWrite(LED2, HIGH);
  delay(300);                      
  digitalWrite(LED1, LOW);   
  digitalWrite(LED2, LOW);
  delay(300); 
  }
}