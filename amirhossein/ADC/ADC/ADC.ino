void setup() {
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int A = analogRead(A0);
  Serial.println(A);
  delay(500);
  
  
}
