/*
____*
___***
__*****
_*******
*********
_*******
__*****
___***
____*
*/

#include<stdio.h>
int main()
{
	int a ,b;
	for(a=1;a<=13;a++)
	{
		//print _
		for(b=1;b<=13-a;b++)
		printf("_");
		//print*
		for(b=1;b<=2*a-1;b++)
		printf("*");
		printf("\n");
	}
		for(a=13;a>=1;a--)
	{
		//print _
		for(b=12;b>=a;b--)
		printf("_");
		{ //print *
			for(b=1;b<=2*a-1;b++)
			printf("*");
			printf("\n");
		}
		
	}
	return 0;
}