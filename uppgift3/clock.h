typedef volatile unsigned long int time_type;

void init_clock(void);

void clock_inter(void);

time_type get_time(void);

void hold(time_type delay_time);