#include "Wire.h"

//#define MY_SERIAL //

void setup()
  {
  Serial.begin(9600);
  Serial.println("\nI2C Scanner");
  Wire.begin();
  }
void loop()
  {
  int nDevices;
  byte error, address;
  Serial.println("Scanning I2C bus...\n");
  nDevices = 0;
  Serial.print("   00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F");
  for(address = 0; address < 128; address++ )
  {
    if((address % 0x10) == 0)
    {
      Serial.println();
      if(address < 16)
        Serial.print('0');
      Serial.print(address, 16);
      Serial.print(" ");
    }
    Wire.beginTransmission(address);error = Wire.endTransmission();


    if (error == 0)
    {
      if (address<16)
         Serial.print("0");
      Serial.print(address, HEX);

      nDevices++;
    }
    else
    { 
      Serial.print("--");
    }

    Serial.print(" ");
    delay(1);
  }
  Serial.println();

  if (nDevices == 0)
     Serial.println("No I2C devices found\n");
   else
   {
     Serial.print("Found ");
     Serial.print(nDevices);
     Serial.println(" device(s) ");
   }
  delay(2500);     
  }
