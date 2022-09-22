/*
1
123
12345
1234567
123456789
................
*/


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=2*i-1;j++)
			printf("%d",j);
			printf("\n");
	}
	return 0;
}