#include<stdio.h>
#include<unistd.h>
int main()
{
	char msg[50]="HAPPY HOLI";
	int i;
	printf("\n\n\n\n");
	system("color 02");
	for(i=0;msg[i]!='\0';i++)
	{
		printf("%c",msg[i]);
	//	sleep(1);
	}
	printf("\n");
	system("pause");
	return 0;}