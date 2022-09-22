#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	char msg[50];
	int i;
	printf("enter any string:");
	gets(msg);
	system("cls");
	strupr(msg)	;
	printf("\n\n\n\n");
	system("Color 03");
	for(i=0;msg[i]!='\0';i++)
	{
		printf("%c",msg[i]);
		//sleep(1);
	}
	printf("\n");
	system("pause");
	return 0;}