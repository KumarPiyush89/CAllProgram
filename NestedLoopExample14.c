/*
1
21
321
4321
54321
654321
*/
#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=6;a++)
	{
		for(b=a;b>=1;b--)
		printf("%d",b);
		printf("\n");
	}
	return 0;
}