#include <Servo.h> 
const int SERVO_PIN  = 9; 
int timer = 100;
Servo servo; 
int holat = 0;         
void setup() {
  Serial.begin(9600);  // bizga malumot chiqarish uchun monitorni ulaymiz   
  Serial.println("Running..."); // dastur ishga tushganligi haqida monitorga malumot ni chiqaramiz           
  servo.attach(SERVO_PIN);    // arduinoga servoni bog`laymiz   
  servo.write(holat);  // servo qay holatda bolsa ham  0 ga qaytaryapmiz

}
int sanoq = 0;
void loop() {

    sanoq+=1;
    Serial.println(sanoq);
   
    servo.write(sanoq); 
    delay(timer);    

}

//void loop() {
//    servo.write(holat); 
//    delay(timer);
//    servo.write(10); 
//    delay(timer); 
//    servo.write(20); 
//    delay(timer);
//        servo.write(30); 
//    delay(timer);
//        servo.write(40); 
//    delay(timer);
//        servo.write(50); 
//    delay(timer);
//        servo.write(60); 
//    delay(timer);
//        servo.write(70); 
//    delay(timer);
//        servo.write(80); 
//    delay(timer);
//        servo.write(90); 
//    delay(timer);
//   
//    servo.write(holat); 
//    delay(timer);
//}

//void loop() {
//    servo.write(holat); // har safar servoni holatini 0 ga keltirsin
//    delay(2000);
//    servo.write(180);  // servoni holatini 90 gradusga burish
//    delay(2000);  // 2 secund tohtash 
//    servo.write(holat);  // yana 0 ga keltirish
//    delay(2000);
//}

//void loop() {
//    servo.write(0); // har safar servoni holatini 0 ga keltirsin
//    delay(2000);
//    servo.write(90);  // servoni holatini 90 gradusga burish
//    delay(2000);  // 2 secund tohtash 
//    servo.write(180);  // yana 0 ga keltirish
//    delay(2000);
//}
