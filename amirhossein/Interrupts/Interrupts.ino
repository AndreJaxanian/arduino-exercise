volatile boolean ifLedOn = false ;
void setup() {
pinMode(13,OUTPUT);
pinMode(2,INPUT);
attachInterrupt(0,ifPressedButton,CHANGE);
//it has three argument which is for interrupt pin , the function inorder to do interrupts , and the three ( change , falling , rising ) state 
// the rising do the interrupts whe the clock is in rising edge , falling is the same in faling edge , and change is whenever the state changes to low to high or high t low
// first i tried falling , but it was succusfull when we pressed the button while the led is on , so i changed it and got the resultS 

}

void loop() {

}

void ifPressedButton (){
    if(ifLedOn){
      ifLedOn = false;
      digitalWrite(13,LOW);
    }else{
      ifLedOn = true ;
      digitalWrite(13,HIGH);
    }
}
