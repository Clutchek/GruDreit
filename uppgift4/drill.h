// instruktioner till borren
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

//Ett/nollställa register;
void Outzero(int bit);
void Outone(int bit);
