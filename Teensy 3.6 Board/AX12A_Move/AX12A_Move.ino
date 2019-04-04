/*
 * Example showing how to send position commands to AX-12A
 */

#include "AX12A.h"

#define DirectionPin 	(10u)
#define BaudRate  		(1000000ul)
#define ID				    (1u)

int initial_pos = 512;
int max1 = initial_pos + 100;
int min1 = initial_pos - 100;

int pos = initial_pos;
int delta = 5;

void setup()
{
	ax12a.begin(BaudRate, DirectionPin, &Serial1);
}

void loop()
{
	pos = pos + delta;

	if (pos > max1)
	{
		pos = max1;
		delta *= -1;
	}

	if (pos < min1)
	{
		pos = min1;
		delta *= -1;
	}

	ax12a.move(ID, pos);
	delay(20);
}
