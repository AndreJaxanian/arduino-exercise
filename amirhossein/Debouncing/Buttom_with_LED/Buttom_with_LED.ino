int LED = 12;
int Buttom = 4;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(Buttom,INPUT);
  

}

void loop() {
  if(digitalRead(Buttom)==HIGH)
  {
    digitalWrite(LED,HIGH);
   // delay(500);
  //  digitalWrite(LED,LOW);
    delay(500);
  }else{
      digitalWrite(LED,LOW);
   // delay(500);
    //digitalWrite(LED,LOW);
    //delay(500);

  }

}
