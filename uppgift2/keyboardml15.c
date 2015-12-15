#include "keyboardml15.h"
#include "ports.h"

int get_key(void){
	int input;
	do{
		input = ML2IN;
	}while(input & 0x80);//Check if button is pressed
	
	while(!(ML2IN & 0x80));
	return input;
}