/* C program to print number of days in given month*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter month number:");
	scanf("%d",&m);
	if(m==2)
	printf("\nEntered month has 28 or 29 days.");
	else if(m==4 || m==6||m==9||m==11)
	printf("\nEntered month has 30 days");
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	printf("\nEntered month has 31 days");
	else
	printf("Sorry! Entered number is not a valid month number.");
	printf("\nthank you");
	return 0;
}