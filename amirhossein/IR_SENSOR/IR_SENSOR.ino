int analogPin = A0;
int out = 13 ;
int sensorValue = 0 ;
void setup() {
  Serial.begin(9600);
  pinMode(out,OUTPUT);
  

}

void loop() {
  sensorValue = analogRead(analogPin);

  Serial.print("sensor = " );
  Serial.println(sensorValue);
  if(sensorValue>30)
  {
    digitalWrite(out,1);
  }else
  {
    digitalWrite(out,0);
  }
}
