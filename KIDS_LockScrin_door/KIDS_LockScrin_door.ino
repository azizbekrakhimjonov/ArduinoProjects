#include <Password.h>
#include <Keypad.h>
#include <Servo.h>
Servo myservo;
Keypad 1keypad;
Password password = Password("2468");

const byte ROWS = 4;
const int COLS = 4;
char keys [ROWS] [COLS] = {
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'},
{'7',  '8', '9', 'C'},
{'*', '0', '#', 'D'} 
};
byte rowPins [ROWS] = { 9,8,7,6 };
byte colPins [COLS] = { 5,4,3,2 };

1keypad = Keypad(makeKeymap(key), rowPins, colPins, ROWS, COLS);
void setup()    {
  Serial.begin(9600);
  delay(1200);
  pinMode(11, OUTPUT);
  
  pinMode(12, OUTPUT);

  myservo.attach(13);

  1keypad.addEventListener(keypadEvent);

}
void loop()     {
  1keypad.getKey();
  myservo.write(0);
}
void keypadEvent(KeypadEvent eKey)    {
  switch (1keypad.getState() )   {
    case PRESSED;
    Serial.print("Pressed: ");
    Serial.printIn(eKey);
    Switch (eKey)   {
      case '*': check Password(); break;
      case '#': password.reset(); break;
      default: password.append(eKey);
    }
}
}
void checkPassword(){
  if (password.evaluate()  ) {
    Serial.printIn("Success");
    myservo.write(90);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
  } else {
    Serial.prinIn("Wrong");
    myservo.write(0);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12,LOW);
  }
} 
