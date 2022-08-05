const int oq = 8;
const int yashil= 9;
const int sariq = 10;
const int qizil = 11;  

void setup() {
  pinMode(oq, OUTPUT);
  pinMode(yashil, OUTPUT);
  pinMode(sariq, OUTPUT);
  pinMode(qizil, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int analogValue = analogRead(A0);

  Serial.print("Analog reading: ");
  Serial.print(analogValue);  
  if (analogValue < 10) {
    Serial.println("Qorong`u");
    digitalWrite(oq, HIGH); // oq  on
    digitalWrite(yashil, LOW); // yashil off
    digitalWrite(sariq, LOW); // yashil off
    digitalWrite(qizil, LOW); // qizil off
   
  } else if (analogValue < 50) {
    Serial.println("Yorug`");
    digitalWrite(yashil, HIGH); // yashil on
    digitalWrite(sariq, LOW); // sariq off
    digitalWrite(qizil, LOW); // qizil off
    digitalWrite(oq, LOW); // oq off
    
  } else if (analogValue < 200) {
    Serial.println("Quyoshli");
    digitalWrite(sariq, HIGH); // sariq on
    digitalWrite(yashil, LOW); // yashil off
    digitalWrite(qizil, LOW); // qizil off
    digitalWrite(oq, LOW); // oq off
    
  } else if (analogValue < 500) {
    Serial.println("Yorqin");
    digitalWrite(qizil, HIGH); // qizil on
    digitalWrite(sariq, LOW); // sariq on
    digitalWrite(yashil, LOW); // yashil off
    digitalWrite(oq, LOW); // oq off
    
  } else if (analogValue < 800) {
    Serial.println("Juda Yorqin");
  }

  delay(1000);
}
