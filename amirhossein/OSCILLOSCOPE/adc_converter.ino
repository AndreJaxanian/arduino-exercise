
//this is a simple code for measuring the light of environment
//al you need is 10k ohm resistor and a LDR 

int sensorpin = A0;
void setup() {
 
  Serial.begin(115200);
}
void loop() {
  float sensorValue = analogRead(sensorpin);
  byte data = Serial.read();
  if (data == 's')
  {
    Serial.println(sensorValue);
  }
  delay(10);
}
