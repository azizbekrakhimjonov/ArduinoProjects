const int qizil = 5;
const int sariq = 6;
const int yashil = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(qizil, OUTPUT);
pinMode(sariq, OUTPUT);
pinMode(yashil, OUTPUT);
}

void loop() {
  digitalWrite(qizil, HIGH);
  delay(4000);
  digitalWrite(qizil, LOW);
//  delay(500);
  
  digitalWrite(sariq, HIGH);
  delay(3000);
  
  digitalWrite(yashil, HIGH);
  delay(700);
  digitalWrite(sariq, LOW);
  delay(3000);
  digitalWrite(yashil, LOW);
  delay(500);
   digitalWrite(yashil, HIGH);
  delay(500);
    digitalWrite(yashil, LOW);
  delay(500);
     digitalWrite(yashil, HIGH);
  delay(500);
    digitalWrite(yashil, LOW);
  delay(500);
}
