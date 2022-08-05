//
//#include <Wire.h> 
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);
//void setup() {
//  
//  lcd.init();
//  lcd.backlight();
//}
//void loop() {
//  delay(1000);
//  lcd.setCursor(0,0);
//  lcd.print("Salom Hammaga");
//  lcd.setCursor(0,1);
//  lcd.print("assasalomu aleykum Iskandar aka");
//  

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int timer(1000);
int a=1;
int numbers[] = {a, 20, 40, 80, 160, 320};
int son=6;
void setup() {
  
  lcd.init();
  lcd.backlight();
}
int k=0;
void loop() {
   lcd.setCursor(0,0);
 
   delay(1000);
 
   
  if (k==6){
  k=0;
  }else{
     lcd.println(numbers[k]);
     k+=1;
    }
}
