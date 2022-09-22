/*
____*
___**
__***
_****
*****
_****
__***
___**
____*
*/

#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=7;a++)
	{
		//print _
		for(b=1;b<=7-a;b++)
		printf("_");
		//print *
		for(b=1;b<=a;b++)
		printf("*");
		printf("\n");
	}
	for(a=1;a<=6;a++)
	{
		//print _
		for(b=1;b<=a;b++)
		printf("_");
		//print *
		for(b=1;b<=7-a;b++)
		printf("*");
		printf("\n");
	}
	return 0;
}
