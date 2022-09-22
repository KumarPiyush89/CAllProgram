/* C program to print month number*/
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
	else 
	printf("\nEntered month has 31 days");
    printf("\nthank you");
	return 0;
}