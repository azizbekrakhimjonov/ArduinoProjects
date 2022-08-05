
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  
  lcd.init();
  lcd.backlight();
}
void loop() {
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("Salom Hammaga");
  lcd.setCursor(0,1);
  lcd.print("Salom Iskandar");
  
}
