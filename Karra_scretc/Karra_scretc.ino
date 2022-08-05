void setup() {
  Serial.begin(9600);
}
// for(start, stop, step)
int otherCount = 0;
void loop() {
  int i;
  for(i = 0; i<10; i++){
    Serial.println(i);
    delay(1000);
    }       
    delay(4000);
    otherCount+=1;
    Serial.print("Umumiy Aylanish: ");
    Serial.print(otherCount);
}
