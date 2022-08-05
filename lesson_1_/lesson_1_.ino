
const int qizilLed = 12; 
const int kok = 11;

void setup(){
  // bosh qisim yani dastur faqat bir matta oqiyi
  pinMode(qizilLed, OUTPUT);
  pinMode(kok, OUTPUT);
}

 void loop(){
 digitalWrite(qizilLed, HIGH);
 delay(50); 
 digitalWrite(qizilLed, LOW);
 delay(50);

  digitalWrite(qizilLed, HIGH);
 delay(50); 
 digitalWrite(qizilLed, LOW);
 delay(50);

  digitalWrite(kok, HIGH);
 delay(50); 
 digitalWrite(kok, LOW);
 delay(50);

 
  digitalWrite(kok, HIGH);
 delay(50); 
 digitalWrite(kok, LOW);
 delay(50);
  
 }
