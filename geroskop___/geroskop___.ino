#include "Wire.h"
 
// I2Cdev and ADXL345 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "ADXL345.h"
 
// class default I2C address is 0x53
// specific I2C addresses may be passed as a parameter here
// ALT low = 0x53 (default for SparkFun 6DOF board)
// ALT high = 0x1D
ADXL345 accel;
 
int16_t ax, ay, az;
 
#define LED_PIN 13 // (Arduino is 13, Teensy is 6)
bool blinkState = false;
 
void setup() {
    // join I2C bus (I2Cdev library doesn't do this automatically)
    Wire.begin();
 
    // initialize serial communication
    // (38400 chosen because it works as well at 8MHz as it does at 16MHz, but
    // it's really up to you depending on your project)
    Serial.begin(38400);
 
    // initialize device
    Serial.println("Initializing I2C devices...");
    accel.initialize();
 
    // verify connection
    Serial.println("Testing device connections...");
    Serial.println(accel.testConnection() ? "ADXL345 connection successful" : "ADXL345 connection failed");
 
    // configure LED for output
    pinMode(LED_PIN, OUTPUT);
}
 
void loop() {
    // read raw accel measurements from device
    accel.getAcceleration(&ax, &ay, &az);
 
    // display tab-separated accel x/y/z values
    Serial.print("accel:\t");
    Serial.print(ax); Serial.print("\t");
    Serial.print(ay); Serial.print("\t");
    Serial.println(az);
 
    // blink LED to indicate activity
    blinkState = !blinkState;
    digitalWrite(LED_PIN, blinkState);
}#include "Wire.h"
 
// I2Cdev and ADXL345 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "ADXL345.h"
 
// class default I2C address is 0x53
// specific I2C addresses may be passed as a parameter here
// ALT low = 0x53 (default for SparkFun 6DOF board)
// ALT high = 0x1D
ADXL345 accel;
 
int16_t ax, ay, az;
 
#define LED_PIN 13 // (Arduino is 13, Teensy is 6)
bool blinkState = false;
 
void setup() {
    // join I2C bus (I2Cdev library doesn't do this automatically)
    Wire.begin();
 
    // initialize serial communication
    // (38400 chosen because it works as well at 8MHz as it does at 16MHz, but
    // it's really up to you depending on your project)
    Serial.begin(38400);
 
    // initialize device
    Serial.println("Initializing I2C devices...");
    accel.initialize();
 
    // verify connection
    Serial.println("Testing device connections...");
    Serial.println(accel.testConnection() ? "ADXL345 connection successful" : "ADXL345 connection failed");
 
    // configure LED for output
    pinMode(LED_PIN, OUTPUT);
}
 
void loop() {
    // read raw accel measurements from device
    accel.getAcceleration(&ax, &ay, &az);
 
    // display tab-separated accel x/y/z values
    Serial.print("accel:\t");
    Serial.print(ax); Serial.print("\t");
    Serial.print(ay); Serial.print("\t");
    Serial.println(az);
 
    // blink LED to indicate activity
    blinkState = !blinkState;
    digitalWrite(LED_PIN, blinkState);
}
