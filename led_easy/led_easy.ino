void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);

}
