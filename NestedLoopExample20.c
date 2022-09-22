/*
____*
___***
__*****
_*******
.....................
*/
/*
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
	return 0;
}
*/
/*
____*
___***
__*****
_*******
*********
Row No		_		*
1			4		1
2			3		3
3			2		5
4			1		7
5			0		9
x			(5-x)	(x*2-1)
*/
#include<stdio.h>
int main()
{
	int x,y;
	/*
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=5-x;y++)printf("_");
		for(y=1;y<=x*2-1;y++)printf("*");
		printf("\n");
	}
	*/
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=5-x;y++)printf("_");
		for(y=1;y<=x;y++)printf("*");
		for(y=1;y<x;y++)printf("*");
		printf("\n");
	}
}