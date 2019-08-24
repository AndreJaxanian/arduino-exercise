int led = 13 ;
int ldrPin = A0;

void setup() {
Serial.begin(9600);
pinMode(led  , OUTPUT);
pinMode(ldrPin , INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <=800) { 

digitalWrite(led, HIGH);
Serial.println("LDR is DARK, LED is ON");
Serial.println(ldrStatus);
//delay(1000);

}

else {

digitalWrite(led, LOW);
Serial.println("LED OFF");
Serial.println(ldrStatus);
//delay(1000);



}

}
