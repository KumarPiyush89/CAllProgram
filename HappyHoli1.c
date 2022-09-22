#include<stdio.h>
#include<unistd.h>
int main()
{
	system("color 07");
	printf("H");
	system("color 06");
	sleep(2);
	printf("A");
	sleep(2);
	system("color 05");
	printf("P");
	sleep(2);
	system("color 04");
	printf("P");
	sleep(2);
	system("color 03");
	printf("Y");
	sleep(2);
    system("color 02");
    printf(" ");
	sleep(2);
	system("color 01");
	printf("H");
	sleep(2);
	system("color 05");
	printf("O");
	sleep(2);
	system("color 09");
	printf("L");
	sleep(2);
	system("color 03");
	printf("I");
	sleep(2);
	printf("\n");
	system("pause");
	return 0;}