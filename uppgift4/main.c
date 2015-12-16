#include "clock.h"
#include "keyboardml15.h"

int main(void)
{
	init_clock();
	while(1)
	{
		switch(get_key())
		{
			case 0:
				MotorStart();
				break;
			case 1:
				MotorStop();
				break;
			case 2:
				DrillDown();
				break;
			case 3:
				DrillUp();
				break;
			case 4:
				step();
				break;
			case 5:
				DrillHole();
				break;
			case 6:
				RefPos();
				break;
			case 7:
				DoAuto();
				break;
		}
	}
	return 0;
}