const int axisX=A0; // A0 ga ulangan X o’qi
const int axisY=A1; // Y o’qi A1 ga ulangan
const int axisZ=2; // D-ga ulangan Z o’qi (joystick tugmasi)
const int oq = 8;
const int yashil= 10;
const int kok = 9;
const int qizil = 11;  
int valX, valY, valZ = 0; // o’q qiymatlarini 

void setup()
{
  pinMode(axisZ, INPUT_PULLUP); 
  pinMode(oq, OUTPUT);
  pinMode(yashil, OUTPUT);
  pinMode(kok, OUTPUT);
  pinMode(qizil, OUTPUT);
  Serial.begin(9600);
}
void loop() {
valX = analogRead(axisX); // X o’qi qiymati
valY = analogRead(axisY); // Y o’qi qiymati
valZ = 1-digitalRead(axisZ); // Z o’qi qiymati (tugma)
if (valZ == 1){
  digitalWrite(oq, LOW);
  digitalWrite(yashil, LOW); 
  digitalWrite(kok, LOW);
  digitalWrite(qizil, LOW); 
  }
  
if (valY<350 || valY==0){
  digitalWrite(qizil, HIGH);
  digitalWrite(kok, LOW); 
  
}else if (valY>750 || valY==1023){
  digitalWrite(kok, HIGH);
  digitalWrite(qizil, LOW);
  
}else if (valX<350 || valX==0){
  digitalWrite(oq, HIGH);
  digitalWrite(yashil, LOW);
  
}else if (valX>750 || valX==1023){
  digitalWrite(oq, LOW);
  digitalWrite(yashil, HIGH);
  
}

// monitordagi qiymatlarni ko’rsatish
Serial.print("X:");
Serial.print(valX, DEC);
Serial.print(" | Y:");
Serial.print(valY, DEC);
Serial.print(" | Z: ");
Serial.println(valZ, DEC);
delay(500); // keyingi ma’lumotlarni

}
