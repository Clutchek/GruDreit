#include "drill.h"
#include "ports.h"
#include "clock.h"

static unsigned char dcShadow = 0;
char bitmaskar[] = {(char)01,(char)02,(char)04,(char)08,(char)16,(char)32,(char)64,(char)128};

//vrider borren 1 steg
int step(void){
	if(ML4IN &(2)){
		//är i toppläge
		Outone(1);
		Outone(0);
		Outzero(0);
		hold((time_type)500);
		return 1;
	}
	Alarm(2);
	return 0;
}

void MotorStart(void){
	Outone(2);
	hold((time_type)1000);
}
void MotorStop(void){
	Outzero(2);
}
void DrillDown(void){
	Outone(3);
}
void DrillUp(void){
	Outzero(3);
	hold((time_type)250);
}
int Nstep(int steps){
	int i;
	for(i = 0; i < steps; i++){
		if(!step()){
			//step failade
			return 0;
		}
	}
	return 1;
}
int DrillDownTest(void){
	int i;
	for(i = 0; i < 20; i++){
		if(ML4IN &(4)){
			//bottenläge
			return 1;
		}
		hold((time_type)250);
	}
	Alarm(2);
	return 0;
}
void Alarm(int amount){
	int i;
	for(i = 0; i < amount;i++){
		Outone(4);
		hold(1000);
		Outzero(4);
		if(!(amount-1)){
			//skippa sista iterationen av delay
			hold(500);
		}
	}

}
int DrillHole(void){
		int returnValue;
		DrillDown();
		//beskrivande variabelnamn
		returnValue = DrillDownTest();
		DrillUp();
		return returnValue;
		
}
int RefPos(void){

}
void DoAuto(void){

}

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
