const int qizil = 12;
const int kok = 11;
const int t = 50;
void setup() {
  pinMode(qizil, OUTPUT);
  pinMode(kok, OUTPUT);
}

void loop() {
  digitalWrite(qizil, HIGH);
  delay(t);
  digitalWrite(qizil, LOW);
  delay(t);

    digitalWrite(qizil, HIGH);
  delay(t);
  digitalWrite(qizil, LOW);
  delay(t);
  
  
  digitalWrite(kok, HIGH);
  delay(t);
  digitalWrite(kok, LOW);
  delay(t);
  digitalWrite(kok, HIGH);
  delay(t);
  digitalWrite(kok, LOW);
  delay(t);


}
