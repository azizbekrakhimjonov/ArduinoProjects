#include "I2Cdev.h"
#include "MPU6050.h"

#define TO_DEG 57.2957f
#define TIME_OUT 20

MPU6050 accgyro;

float anglex;
long int t1;

void setup() {
    Serial.begin(9600);
    // инициализация датчика
    accgyro.initialize();
}

void loop() {
    long int t = millis();
    if( t1 < t ){
        int16_t ax, ay, az, gx, gy, gz;
        float accy,gyrox;

        t1 = t + TIME_OUT;
        accgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

        // преобразование в единицы гравитации при настройках 1G
        accy = ax /4096.0;
        //  границы от -1G до +1G
        accy = clamp(accy, -1.0, 1.0);
        // получить значение в градусах
        if( accy >= 0){
            anglex = 90 - TO_DEG*acos(accy);
        } else {
            anglex = TO_DEG*acos(-ay) - 90;
        }
        Serial.println(anglex);
    }
}
