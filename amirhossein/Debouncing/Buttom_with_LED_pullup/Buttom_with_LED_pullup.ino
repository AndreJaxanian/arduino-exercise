int LED = 13;
int Buttom = 4;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(Buttom,INPUT);
  
  //adding PULL_UP resistor built in arduino chip itself
  digitalWrite(Buttom,HIGH);
  //enabling pull up resistor in the pin
  //it actully reverts the states from hifh to low and low to high 
}

void loop() {
  
  if(digitalRead(Buttom)==LOW) //it was HIGH before using pull_up registors
  {
    digitalWrite(LED,HIGH);
  }else{
      digitalWrite(LED,LOW);

  }

}
