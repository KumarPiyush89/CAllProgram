#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<conio.h>
int main()
{
	char msg[50];
	int i,j;
	printf("enter any string:");
	gets(msg);
	system("cls");
	strupr(msg)	;
	printf("\n\n\n\n");
	for(i=0;i<80;i++)
	{
		printf("\r");
		for(j=0;j<i;j++)printf(" \n");
		printf("%s",msg);
		
	}
	printf("\n");
	system("pause");
	return 0;}