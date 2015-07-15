#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include "asciiart.h"

#define SWITCH1 0
#define SWITCH2 1
#define LED1 2
#define LED2 3

#define DELAYTIME 100

int main(void)
{
	if (wiringPiSetup() == -1)
	{
		printf("GPIO Error occured. \n");
		return -1;
	}

	pinMode(SWITCH1, INPUT);
	pinMode(SWITCH2, INPUT);
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);

	while(1)
	{
		if(digitalRead(SWITCH1) == 0)
		{
			if(digitalRead(SWITCH2) == 0)
				ArtAttackTogether();
			else
				ArtAttackA();
		}
		else if(digitalRead(SWITCH2) == 0)
			ArtAttackB();
		else
			ArtMain();

		delay(DELAYTIME);
		system("clear");
	}

	return 0;
}
