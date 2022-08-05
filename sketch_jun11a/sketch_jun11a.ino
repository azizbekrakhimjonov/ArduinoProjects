
const int ogoh = 11;
void setup() {
  Serial.begin(9600);
  pinMode(ogoh,OUTPUT);

}
int count = 60;
void loop() {
  if (count==45){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    delay(1000);
  else {
    count-=1;
  }
   delay(1000);
    if (count==30){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
     if (count==20){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
      if (count==15){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
      if (count==10){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
      if (count==5){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
      if (count==2){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
      if (count==1){
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
  }
    else {
    count-=1;
  }
    delay(1000);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(500);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(500);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(100);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(100);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(100);
    digitalWrite  (ogoh,HIGH);
    delay(500);
    digitalWrite  (ogoh,LOW);
    delay(100);    
    digitalWrite  (ogoh,HIGH);
    delay(10000);    
}

//
//const int bz = 11;
//void setup (){
//  pinMode(bz,OUTPUT);
//}
//void loop (){
//    digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(10000);
//  digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(10000);
//    digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(5000);
//  digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(5000);
//      digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(2000);
//  digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(2000);
//    digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(1000);
//  digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(1000);
//      digitalWrite(bz,1);
//  delay(150);
//  digitalWrite(bz,0);
//  delay(950);
//  digitalWrite(bz,1);
//  delay(550);
//  digitalWrite(bz,0);
//  delay(900);
//      digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(800);
//  digitalWrite(bz,1);
//  delay(500);
//  digitalWrite(bz,0);
//  delay(700);
//    digitalWrite(bz,1);
//  delay(50);
//  digitalWrite(bz,0);
//  delay(70);
//      digitalWrite(bz,1);
//  delay(45);
//  digitalWrite(bz,0);
//  delay(65);
//  digitalWrite(bz,1);
//  delay(40);
//  digitalWrite(bz,0);
//  delay(60);
//  digitalWrite(bz,1);
//  delay(35);
//  digitalWrite(bz,0);
//  delay(55);
//  digitalWrite(bz,1);
//  delay(30);
//  digitalWrite(bz,0);
//  delay(50);
//    digitalWrite(bz,1);
//  delay(25);
//  digitalWrite(bz,0);
//  delay(45);
//  digitalWrite(bz,1);
//  delay(20);
//  digitalWrite(bz,0);
//  delay(30);
//  digitalWrite(bz,1);
//  delay(10);
//  digitalWrite(bz,0);
//  delay(20);
//   digitalWrite(bz,1);
//  delay(10000);
//  
//}
