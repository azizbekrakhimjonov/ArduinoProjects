//int x = 100;  // global variable(o`zgaruvchi)
//void setup() {
//  Serial.begin(9600);
//}
//void loop() {
//  int y,z; // local variable
//  y = 25;
//  z = 30; 
//  Serial.println(x+y+z);
//  delay(1000);
// koni izohga yani ochirib qoyish uchun ikkita slash -> //
// kop qatorli kodni izohga olish uchun kerakli qatorlarni bergilab -> ctrl+/ 
//  }


//int x = 100; 
//float f = 0.005;
//void setup() {
//  Serial.begin(9600);
//}
//void loop() {
//  Serial.println(x);
//  Serial.println(f);
//  delay(1000);
//}


//void setup() {
//  Serial.begin(9600);
//}
//void loop() {
//  Serial.println(10<5);
//  delay(10000);
//}

//int x = 10;
//int y = 10; 
//void setup(){
//  pinMode(12, OUTPUT);
//  pinMode(11, OUTPUT);
//  Serial.begin(9600);
//}
//void loop(){
//   if (x>=y){
//    digitalWrite(12, 1);
//    Serial.println("shart bajarildi!");
//    Serial.println("oq HIGH");
//    delay(500);
//   }
//   else {
//    digitalWrite(11, 1);
//    Serial.println("bajarilmadi!");
//    Serial.println("qizil HIGH!");
//    delay(500);
//    }
//    
//}
const int buttonPin = 10; // tugma kalit
const int ledPin = 12; // led diod
int buttonState; // tugma kalit holati
int count = 0;
void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT); // button holatini oqish jarayoni 
  pinMode(ledPin, OUTPUT); // led diod uchun pin ochish
  }
void loop(){
  //button dan holatni qabul qilamiz buttonState ga(HIGH/LOW)
  buttonState = digitalRead(buttonPin); 
  if (buttonState==HIGH){
    Serial.println("button onClick");
    digitalWrite(ledPin, HIGH);
    count+=1;
    Serial.println(count);
  }else {
    digitalWrite(ledPin, LOW);
    Serial.println("button off");
    }   
  }
