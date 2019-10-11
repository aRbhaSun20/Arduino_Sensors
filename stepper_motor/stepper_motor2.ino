/*
Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means. 
Digital control is used to create a square wave, a signal switched between on and off.

continuous pulsating wave form of _ | - - | _  | - - | _ ....
of once  a cycle of 2 high and 1 low outputs 
*/


const int pwm1 = 9;
const int pwm2 = 10;

const int ctr_a = 8;
const int ctr_b = 9;
const int ctr_c = 10;
const int ctr_d = 11;


int i = 0;
int t = 1500;

void setup(){

pinMode(ctr_a,OUTPUT);
pinMode(ctr_b,OUTPUT);
pinMode(ctr_c,OUTPUT);
pinMode(ctr_d,OUTPUT);
delay(1);

}

void loop(){

     for(i=1500;i>=1;i--)
   {
     
       digitalWrite(ctr_d,HIGH);//D
       delay(t);
       digitalWrite(ctr_c,HIGH);//DC
       delay(t);
       digitalWrite(ctr_d,LOW);//C
       delay(t);
       digitalWrite(ctr_b,HIGH);//CB
       delay(t);
       digitalWrite(ctr_c,LOW);//B
       delay(t);
       digitalWrite(ctr_a,HIGH);//BA
       delay(t);
       digitalWrite(ctr_b,LOW);//A
       delay(t);
       digitalWrite(ctr_d,HIGH);//AD
       delay(t);
       digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_d,LOW);
   }


}

