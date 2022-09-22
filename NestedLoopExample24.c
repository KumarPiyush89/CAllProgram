/*
0
12
345
6789*/
#include<stdio.h>
int main()
{
	int i,j,k;
	k=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}