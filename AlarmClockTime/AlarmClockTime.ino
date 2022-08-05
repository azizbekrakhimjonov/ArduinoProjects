const int bz = 11;
void setup() {
 Serial.begin(9600);
 pinMode(bz, OUTPUT);
}
int MakeTime = 10;
void loop() {
if (MakeTime!=0){
  MakeTime-=1;
  Serial.println(MakeTime);
  }else{
    Serial.println("Wake Up!");
    digitalWrite(bz, HIGH);
    MakeTime = 0;
    }

   if (MakeTime==5){
    digitalWrite(bz, HIGH);
    delay(100);
    digitalWrite(bz, LOW);
    }
  delay(1000);
}
