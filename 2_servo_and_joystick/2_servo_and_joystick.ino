#include <Servo.h>;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
 int  SERVO1 = 5;
 int SERVO2 = 6;
 int SERVO3 = 7;
 int SERVO4 = 8;
int VRx = A0;
int VRy = A1;
int VRx1 = A2;
int VRy2 = A3;

int SW1=3;
int SW = 2;
///
int x = 0;
int y = 0;
int X1 =0;
int Y1=0;
int SW_state = 0;
int SW_holat=0;
///
void setup() {
  Serial.begin(9600); 
  servo1.attach(SERVO1);
  servo2.attach(SERVO2);
  servo3.attach(SERVO3);
  servo4.attach(SERVO4);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(VRx1, INPUT);
  pinMode(VRy2, INPUT);
  pinMode(SW1, INPUT_PULLUP); 
  pinMode(SW, INPUT_PULLUP); 
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
}

void loop() {
  x = analogRead(VRx);
  y = analogRead(VRy);
  X1 = analogRead(VRx1);
  Y1 = analogRead(VRy2);
  SW_state = digitalRead(SW);
  SW_holat = digitalRead(SW);
  Serial.print("X: ");
  Serial.print(x);
  Serial.print(" | Y: ");
  Serial.print(y);
  Serial.print(" | Button: ");
  Serial.println(SW_state);
 
  if (x>600){
    
 
  servo1.write(180);}
  
  else{
  servo1.write(0);}
 
  if (y>600){
   
    servo2.write(180);
    }
    else{
      servo2.write(0);
      
       if (X1>600){
  servo3.write(180);}
  
  else{
  servo3.write(0);}
  
   if (Y1>600){
  servo4.write(180);}
  
  else{
  servo4.write(0);}
     
    }
  delay(100);
  
}



//#include <Servo.h>; 
//Servo servo1;
//Servo servo2;
//int x_key = A1;                                               
//int y_key = A0;                                               
//int x_pos;
//int y_pos;
//int servo1_pin = 8;
//int servo2_pin = 9;  
//int initial_position = 90;
//int initial_position1 = 90;
//
//void setup ( ) {
//Serial.begin (9600) ;
//servo1.attach (servo1_pin ) ; 
//servo2.attach (servo2_pin ) ; 
//servo1.write (initial_position);
//servo2.write (initial_position1);
//pinMode (x_key, INPUT) ;                     
//pinMode (y_key, INPUT) ;                      
//}
//
//void loop ( ) {
//x_pos = analogRead (x_key) ;  
//y_pos = analogRead (y_key) ;                      
//
//if (x_pos < 300){
//if (initial_position < 10) { } else{ initial_position = initial_position - 20; servo1.write ( initial_position ) ; delay (100) ; } } if (x_pos > 700){
//if (initial_position > 180)
//{  
//}  
//else{
//initial_position = initial_position + 20;
//servo1.write ( initial_position ) ;
//delay (100) ;
//}
//}
//
//if (y_pos < 300){
//if (initial_position1 < 10) { } else{ initial_position1 = initial_position1 - 20; servo2.write ( initial_position1 ) ; delay (100) ; } } if (y_pos > 700){
//if (initial_position1 > 180)
//{  
//}        
//else{
//initial_position1 = initial_position1 + 20;
//servo2.write ( initial_position1 ) ;
//delay (100) ;
//}
//}
//}
