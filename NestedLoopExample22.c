/*
0
01
010
0101
01010
010101
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d",j,i);
		printf("\n");
	}
	return 0;
}