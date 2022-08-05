void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
 digitalWrite(13, HIGH);  // led yondi
 delay(25);  // 1 second kutadi
 digitalWrite(13, LOW);  // led ochdi
 delay(25);  // 1 second kutadi

 digitalWrite(13, HIGH);  // led yondi
 delay(25);  // 1 second kutadi
 digitalWrite(13, LOW);  // led ochdi
 delay(25);  // 1 second kutadi
 
 digitalWrite(12, HIGH);  // led yondi
 delay(25);  // 1 second kutadi
 digitalWrite(12, LOW);  // led ochdi
 delay(25);  // 1 second kutadi
  digitalWrite(12, HIGH);  // led yondi
 delay(25);  // 1 second kutadi
 digitalWrite(12, LOW);  // led ochdi
 delay(25);  // 1 second kutadi
}
