#include "AX12A.h"

#define DirectionPin   (10u)
#define BaudRate       (1000000ul)
#define ID             (1u)        //Pin Number?

void setup()
{
  ax12a.begin(BaudRate, DirectionPin, &Serial1);
  ax12a.setEndless(ID, ON);
}

void loop()
{
  ax12a.ledStatus(ID, ON); //Motor LED, possible debugging
  delay(1000); //Executes above code for 3 Seconds
  ax12a.ledStatus(ID, OFF);
  delay(1000);
}
