const int bz = 11;
void setup() {
 Serial.begin(9600);
}
int MakeTime = 10;
void loop() {
if (MakeTime!=0){
  MakeTime-=1;
  Serial.println(MakeTime);
  }else{
    Serial.println("Wake Up!");
    digitalWrite(bz, HIGH);
   
    }
  delay(1000);
}
