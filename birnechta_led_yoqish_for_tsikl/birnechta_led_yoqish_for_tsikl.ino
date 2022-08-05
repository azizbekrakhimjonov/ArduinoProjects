int pins[] = {8, 9, 10, 11, 12, 13};
const int timer = 20;
void setup() {
  int i = 0;
  for (i=0; i<6; i++){
  pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  int i = 0;
  for (i=0; i<6; i++){
    digitalWrite(pins[i], HIGH);
    delay(timer);
    digitalWrite(pins[i], LOW);
    delay(timer);
  }
  int j = 6;
  for (j=6; j>0; j--){
    digitalWrite(pins[j], HIGH);
    delay(timer);
    digitalWrite(pins[j], LOW);
    delay(timer);
  }

}
