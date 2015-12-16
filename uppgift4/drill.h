// instruktioner till borren
void MotorStart(void);
void MotorStop(void);
void DrillDown(void);
void DrillUp(void);
int Nstep(int steps);
int DrillDownTest(void);
void Alarm(int amount);
int DrillHole(void);
int RefPos(void);
void DoAuto(void);
int step(void);

//Ett/nollställa register;
void Outzero(int bit);
void Outone(int bit);
