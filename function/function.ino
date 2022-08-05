                //void setup(){
//  Serial.begin(9600);
//  pinMode(12, OUTPUT);
//  pinMode(13, OUTPUT);
//  Serial.println("Led Turn On");
//}
//void loop(){
//     calculate(12,13);
//}
//float calculate(int x, int y){
//    digitalWrite(x, HIGH);
//    delay(500);
//    digitalWrite(x, LOW);
//    delay(500);
//    digitalWrite(y, HIGH);
//    delay(500);
//    digitalWrite(y, LOW);
//    delay(500);
//}

int myValue = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    myValue = random(100);
    Serial.print("Qiymat: ");
    Serial.println(myValue);
    delay(1000);
}
