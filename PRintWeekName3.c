/*WRITE A CPROGRAM THAT WILL ACCEPT ANY NUMBER AND PRINT MONTH NUMBER */
#include<stdio.h>
int main()
{
	int M;
	printf("ENter any month number");
	scanf("%d",&M);
	if (M==1);
	printf("you have entered month 31.");

	if(M==2)
	printf("have entered month 28 or 29.");
	else
	if(M==3)
	printf("you have entered month 31.");
	else
	if(M==4)
	printf("You have entered month 30.");
	else
	if(M==5)
	printf("you have entered month 31.");
	else
	if(M==6)
	printf("you have entered month 30.");
	else
	if(M==7)
	printf("you have entered month 31.");
	else
	if (M==8)
	printf("you have entered month 31.");
	else
	if(M==9)
	printf("you have entered month 30.");
	else
	if(M==10)
	printf("you have entered month 31.");
	else
	if(M==11)
	printf("you have entered month 30.");
	else
	if(M==12)
	printf("you have entered month 31.");
	else
	printf("You have invalid month number.");
	printf("THANK YOU.");
	return 0;
}