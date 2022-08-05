void setup() {
Serial.begin(9600);
 pinMode(12, OUTPUT); 
 }
void loop() {
 if(Serial.available()>0)
   {     
      char data= Serial.read(); 
      switch(data)
      {
        case '1': digitalWrite(12, HIGH);break; 
        case '0': digitalWrite(12, LOW);break; 
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}

//
//int qiymat = 0;
//void setup() {
//Serial.begin(9600);
//pinMode(12,OUTPUT);
//}
//
//void loop() {
////  if (Serial.available() > 0)
////    {
//      qiymat = Serial.read();
//      Serial.print(qiymat);
//      Serial.print("/n");
//      if (qiymat == 1)
//        digitalWrite(12,HIGH);
//      else if(qiymat == 0)
//        digitalWrite(12,LOW);
////    }
//}
