#include <TimerOne.h>

int mainLED = 7 ;
int interruptLED = 8 ;

volatile boolean LEDSTAT = LOW ;

volatile unsigned long  counterINterrupt;
unsigned int counerMain;

void setup() {
pinMode(mainLED,OUTPUT);
pinMode(interruptLED,OUTPUT);
Timer1.initialize(2000000);
Timer1.attachInterrupt(function);
Serial.begin(9600);
}


void loop() {


//noInterrupts();
//counerMain = counterINterrupt ;
//interrupts();
//Serial.print("number of counter main : ");
//  Serial.println(counerMain);
//  Serial.print("number of counter function : ");
//  Serial.println(counterINterrupt);
//
// if(counerMain == 12){
//  counterINterrupt = 0; 
//  } 


digitalWrite(mainLED,HIGH);
delay(500);
digitalWrite(mainLED,LOW);
delay(500);
}


void function(){
digitalWrite(interruptLED , LEDSTAT );
LEDSTAT =! LEDSTAT ;
counterINterrupt+=1;
  
}
