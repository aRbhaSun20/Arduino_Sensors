/*
Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means. 
Digital control is used to create a square wave, a signal switched between on and off.

continuous pulsating wave form of - | _ _ _ | - - | _ _ | ...
of once  a cycle of 1 high and 3 low outputs and consecutively 2 highs and 2 lows
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
       digitalWrite(ctr_a,HIGH);//A
       digitalWrite(ctr_b,LOW);
       digitalWrite(ctr_c,LOW);
       digitalWrite(ctr_d,LOW);
       delay(t);
       digitalWrite(ctr_a,HIGH);
       digitalWrite(ctr_b,HIGH);//AB
       digitalWrite(ctr_c,LOW);
       digitalWrite(ctr_d,LOW);
       delay(t);
       digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_b,HIGH);//B
       digitalWrite(ctr_c,LOW);
       digitalWrite(ctr_d,LOW);
       delay(t);
       digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_b,HIGH);
       digitalWrite(ctr_c,HIGH);//BC
        digitalWrite(ctr_d,LOW);
       delay(t);
       digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_b,LOW);
       digitalWrite(ctr_c,HIGH);//C
       digitalWrite(ctr_d,LOW);
       delay(t);
       digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_b,LOW);
       digitalWrite(ctr_c,HIGH);//CD
       digitalWrite(ctr_d,HIGH);
       delay(t);
        digitalWrite(ctr_a,LOW);
       digitalWrite(ctr_b,LOW);
       digitalWrite(ctr_c,LOW);//D
       digitalWrite(ctr_d,HIGH);
       delay(t);
        digitalWrite(ctr_a,HIGH);
       digitalWrite(ctr_b,LOW);
       digitalWrite(ctr_c,LOW);//DA
       digitalWrite(ctr_d,HIGH);
       delay(t);
       
   } 


}

