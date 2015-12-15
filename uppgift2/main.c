#include "displayml15.h"
#include "keyboardml15.h"
#include "ports.h"
int main( void ){
	DISPLAY_DATA_MODE = 1;
	DISPLAY_DATA_REG = 0xD0;
	DISPLAY_DATA_MODE = 0;
	
	while(1)
	{
		int i = get_key();
		display_dec(i);
	}
	return 0;
	
}