int number = 0;
void setup() {
 Serial.begin(9600);
 Serial.println("Working!");
}

void loop() {
  number = random(1000);
  Serial.print("Result: "); 
  Serial.println(number);
  delay(500);

}
