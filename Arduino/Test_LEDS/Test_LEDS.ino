
void setup() {
  for(int i = 13; i >1; i--){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

}

void loop() {
  for(int i = 2; i <14; i++){
    digitalWrite(i,!digitalRead(i));
    delay(500);    
    digitalWrite(i,!digitalRead(i));
  }
  for(int i = 13; i >1; i--){
    digitalWrite(i,!digitalRead(i));
    delay(500);    
    digitalWrite(i,!digitalRead(i));
  }
}
