/*
____*
___**+
__***++
_****+++
*****++++

*/
#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{ //print _
		for(b=1;b<=5-a;b++)
		printf("_");
		{
			//print *
			for(b=1;b<=a;b++)
			printf("*");
			//print +
			for(b=2;b<=a;b++)
			printf("+");
		}
		printf("\n");
	}
	return 0;
}