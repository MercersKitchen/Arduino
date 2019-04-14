/*
 Example showing how to use endless mode (wheel mode) on AX-12A
 Be sure you removed all mechanical assemblies (hinges) before using this code !
 */

#include "AX12A.h"

#define DirectionPin  (10u)
#define BaudRate      (115200) //1000000ul
#define ID            (1u)

int pos=0;

void setup()
{
 ax12a.begin(BaudRate, DirectionPin, &Serial1);
 ax12a.setEndless(ID, ON);
}

void loop()
{
    ax12a.ledStatus(ID, ON);
    ax12a.turn(ID, LEFT, 100); //100 is speed
    delay(1000);
  
    ax12a.ledStatus(ID, OFF);
    ax12a.turn(ID, RIGHT, 500);
    delay(1000);
    pos = ax12a.readPosition(1u);
    Serial.println(pos);
}
