/*
1
12
123
1234
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		printf("%d",b);
		printf("\n");
	}
	for(a=4;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		printf("%d",b);
		printf("\n");
	}
	return 0;
}