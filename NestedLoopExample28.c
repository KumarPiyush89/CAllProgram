/*
____1
___121
__12321
_1234321
123454321
_1234321
__12321
___121
____1

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
			for(b=1;b<=a;b++)
			printf("%d",b);
			for(b=a-1;b>=1;b--)
			printf("%d",b);
		}
		printf("\n");
	}
	for(a=4;a>=1;a--)
	{
		//print _
		for(b=4;b>=a;b--)
		printf("_");
		{
			for(b=1;b<=a;b++)
			printf("%d",b);
			for(b=a-1;b>=1;b--)
			printf("%d",b);
		}
		printf("\n");
	}
	return 0;
}