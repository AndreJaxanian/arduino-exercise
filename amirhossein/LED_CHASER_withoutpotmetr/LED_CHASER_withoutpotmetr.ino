  int LED1= 9;
  int LED2= 10;
  int LED3= 11;
  int LED4= 12;
  int LED5= 13;
void setup() {
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);

}

void loop() {
 digitalWrite(LED1,HIGH);
 delay(500);
 digitalWrite(LED2,HIGH);
 delay(500);
 digitalWrite(LED3,HIGH);
 delay(500);
 digitalWrite(LED4,HIGH);
 delay(500);
 digitalWrite(LED5,HIGH);
 delay(500);
 //turning off LEDs
 digitalWrite(LED1,LOW);
 delay(500);
 digitalWrite(LED2,LOW);
 delay(500);
 digitalWrite(LED3,LOW);
 delay(500);
 digitalWrite(LED4,LOW);
 delay(500);
 digitalWrite(LED5,LOW);
 delay(500);
}
