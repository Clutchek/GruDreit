#include "displayml15.h"
#include "ports.h"

void display_digits (unsigned char charArray[])
{
	int i;
	
	DISPLAY_DATA_MODE = 1;
	DISPLAY_DATA_REG = 0xD0;
	DISPLAY_DATA_MODE = 0;
	
	for(i = 0; i < 6; i++)
	{
		DISPLAY_DATA_REG = charArray[i];
	}
	DISPLAY_DATA_REG = 0;
	DISPLAY_DATA_REG = 0;

	return;
}

void display_dec (unsigned int theInt)
{
	//char charArray[] = (char)malloc(sizeof(char[6]));
	char charArray[6];

	int i;
	for(i = 6; i > 0; i--)
	{
		int tempInt = theInt%10;
		charArray[i-1] = tempInt;
		theInt = theInt/10;
	}
	display_digits(charArray);
}