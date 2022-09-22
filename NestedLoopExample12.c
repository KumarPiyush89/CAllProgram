/*
654321
54321
4321
321
21
1
*/

#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=6;a++)
	{
		for(b=7-a;b>=1;b--)
		printf("%d",b);
		printf("\n");
	}
	return 0;
}