#include<stdio.h>
#define DELAY 128000

struct my_time
{
	int hours;
	int minutes;
	int seconds;
};
void display(struct my_time *t);
void update(struct my_time *t);
int main(void)
{
	struct my_time systime;
	systime.hours = 0;
	systime.minutes = 0;
	systime.seconds = 0;
	for(;;)
	{
		update(&systime);
		display(&systime);
	}

	return 0;
}
void update(struct my_time *t)
{
	t->seconds++;
	if(t->seconds==60)
	{
		t->seconds = 0;
		t->minutes++;
	}
	if(t->minutes==60)
	{
		t->minutes = 0;
		t->hours++;
	}
	if(t->hours==24)
	t->hours=0;
	delay();
}
void display(struct my_time *t)
{
	printf("%02d:",t->hours);
	printf("%2d:",t->minutes);
	printf("%2d\n",t->seconds);
}
void delay(void)
{
	long int t;
	//change this as needed
	for(t=1;t<DELAY; t++);
}