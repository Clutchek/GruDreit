#include "ports.h"

int main ( void )
{
	while(1)
	{
		char c = ML4READ;
		ML4WRITE = c;
	}

	return 0;
}