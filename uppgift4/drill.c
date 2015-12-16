#include "drill.h"
#include "ports.h"
#include "clock.h"

static unsigned char dcShadow = 0;
char bitmaskar[] = {(char)01,(char)02,(char)04,(char)08,(char)16,(char)32,(char)64,(char)128};

void MotorStart(void);
void MotorStop(void);
void DrillDown(void);
void DrillUp(void);
int Nstep(int);
int DrillDownTest(void);
void Alarm(int);
void DrillHole(void);
int RefPos(void);
void DoAuto(void);

void Outzero(int bit){
	if(((unsigned int)bit) < 8){
		dcShadow &= ~bitmaskar[bit];
		ML4OUT = dcShadow;
	}
}
void Outone(int bit){
	if(((unsigned int)bit) < 8){
		dcShadow |= bitmaskar[bit];
		ML4OUT = dcShadow;
	}
}
