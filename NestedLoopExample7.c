/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
#include<stdio.h>
int main()
{
	int i,j;
	/*for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	*/
		for(i=1;i<=5;i++)
	{
		for(j=65;j<=65+5;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}