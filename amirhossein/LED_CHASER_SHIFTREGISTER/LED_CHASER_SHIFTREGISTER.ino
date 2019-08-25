#define DATA 6
#define LATCH 8
#define CLOCK 10
int data[14] = {1,2,4,8,16,32,64,128,64,32,16,8,4,2};
void setup() {
pinMode(DATA,OUTPUT);
pinMode(LATCH,OUTPUT);
pinMode(CLOCK,OUTPUT);

}

void loop() {
for(int i = 0 ; i < 14 ; i++){
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,LSBFIRST,data[i]);
  digitalWrite(LATCH,HIGH);
  delay(500);
}
}
