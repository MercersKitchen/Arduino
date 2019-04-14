/*
 * Example showing how to read internal register of AX-12A
 * Can be usefull for debugging purposes
 */

#include "AX12A.h"

#define DirectionPin   (10u)
#define BaudRate       (115200ul) //1000000ul
#define ID             (1u)        //Pin Number?

int reg = 0;

void setup()
{
  ax12a.begin(BaudRate, DirectionPin, &Serial1);
}

void loop()
{
  reg = ax12a.readRegister(ID, AX_PRESENT_VOLTAGE, 1);
  Serial.println(reg);

  delay(1000);
}
