/*
Linear_Softpot it divided mainly into 3 regions of Resistance 0,5k and 10k ohm
i.e Placing your wiper at the base of the soft pot will effect a nearly 0Ω resistance between the middle pin and pin 1 (indicated by the arrow). When the wiper reaches the far end of the soft pot, the resistance will approach 10kΩ. And, if the wiper is in the middle, the resistance should be around 5kΩ.


*/

int Soft_Pot = A0;
int Graph_Length = 40; //variable according to the sensor length.

void setup() {
  // put your setup code here, to run once:
  pinMode(Soft_Pot, INPUT);
  Serial.begin(9600);
}

void loop() {	
  // put your main code here, to run repeatedly:
  int softPotADC = analogRead(Soft_Pot);

  int softPotPosition = map(softPotADC, 0, 1023 , 0, Graph_Length);


  //print the graph

Serial.print("<"); // Starting point
for(int i = 0; i<Graph_Length; i++){
	if(i == softPotPosition){
		Serial.print("|");
	else
	{
	Serial.print("-");
	}
	delay(500);
	}
}

}
