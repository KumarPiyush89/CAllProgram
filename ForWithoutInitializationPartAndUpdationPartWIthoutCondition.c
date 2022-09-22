/*
In For loop initialization statement can be ignored  and updation part can also ignored*/
//For will work without condition part. if no condition is passed it will be treated true by default
//C program to print numbers from 5 to 15
#include<stdio.h>
int main()
{
	int i=5;
	for(;;)//this loop will repeat from 5 to infinite
	{
		printf("\n%d",i);
		i=i+1;
	}
	return 0;
}
/* Because for can work without condition so it is called unconditional loop.
While, while and do can't work without condition So, these are called conditional loop.

for is also entry control loop
*/
