const int buzzer = 9; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){

  for(int i = 200; i < 1000; i++){
    tone(buzzer, i); // Send 1KHz sound signal...
    delay(1);        // ...for 1 sec
  }

  for(int j = 1000; j > 200; j--){
    tone(buzzer, j); // Send 1KHz sound signal...
    delay(1);        // ...for 1 sec
  }
  
}
