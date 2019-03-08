/*
 Example showing how to use endless mode (wheel mode) on AX-12A, with two motors in series
 Pins on motors are right to left: series means left-most 3-pins connected to next motor's right-most 3-pins
 */

#include "AX12A.h"

#define DirectionPin  (10u)
#define BaudRate      (1000000ul)
#define IDfirst       (1u)
#define IDsecond      (2u)

void setup()
{
 ax12a.begin(BaudRate, DirectionPin, &Serial1);
 ax12a.setEndless(IDfirst, ON);
 
}

void loop()
{
  ax12a.ledStatus(IDfirst, ON);
  ax12a.turn(IDfirst, LEFT, 100); //100 is speed
  delay(5000);
  
  ax12a.ledStatus(IDfirst, OFF);
  ax12a.turn(IDfirst, RIGHT, 500);
  delay(5000);

  ax12a.ledStatus(IDsecond, ON);
  ax12a.turn(IDsecond, LEFT, 100); //100 is speed
  delay(5000);
  
  ax12a.ledStatus(IDsecond, OFF);
  ax12a.turn(IDsecond, RIGHT, 500);
  delay(5000);
      
}
