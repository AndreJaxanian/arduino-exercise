#define led 3
#define knob 0
void setup() {

   
  pinMode(led , OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int A = analogRead(knob);
  A = map(A,1,1024,1,255);
  analogWrite(led,A);  
  
}
