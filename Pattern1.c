/*
************************************************************
*/
#include<stdio.h>
int main()
{
	int i;
	printf("************************************************************");
	printf("\n");
	for(i=1;i<=300;i++)
	printf("*");
	
	printf("\n\n\n\n");
	i=1;
	while(i<=300)
	{
		printf("*");
		i++;
	}
	
	return 0;
}