void setup(){
    pinMode(3, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(12, OUTPUT);
  }
void loop(){
  //qizil
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(50);

  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  delay(50);

    digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(50);

  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  delay(50);

  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  delay(100);

  
  }
