#include "AX12A.h"

#define DirectionPin   (10u)
#define BaudRate       (1000000ul)
#define ID             (1u)        //Pin Number?

int pos=0; //delete this

void setup()
{
  ax12a.begin(BaudRate, DirectionPin, &Serial1);
  Serial.begin(1000000ul); //Delete this
  ax12a.setEndless(ID, ON);
}

void loop()
{
  //New Lines
  pos = ax12a.readPosition(ID);
  Serial.println(pos);
  //To Here
  
  
  ax12a.ledStatus(ID, ON); //Motor LED, possible debugging
  delay(1000); //Executes above code for 3 Seconds
  ax12a.ledStatus(ID, OFF);
  delay(1000);
}
