/*
111111
22222
3333
444
55
6
*/
#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=7-a;b++)
		printf("%d",a);
		printf("\n");
	}
	return 0;
}