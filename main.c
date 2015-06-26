#include <stdio.h>
#include <wiringPi.h>
#include "asciiart.h"

int main(void)
{
	if (wiringPiSetup() == -1)
	{
		printf("GPIO Error occured. \n");
		return -1;
	}

	return 0;
}
