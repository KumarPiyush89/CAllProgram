/*WACP IN WHICH ACCEPT MAX SIX DIGIT NUMBER AND PRINT TOTAL NUMBER OF DIGIT ENTERED NUMBERS HAVE.*/
#include<stdio.h>
int main()
{
	int N;
	printf("Enter any number");
	scanf("%d",&N);
	
	if(N<=9)
	printf("YOU HAVE ENTERED ONE DIGITS NUMBER.");
	else if(N<=99)
	printf("YOU HAVE ENTERED TWO DIGITS NUMBER.");
	else if(N<=999)
	printf("YOU HAVE ENTERED THREE DIGITS NUMBER.");
	else if(N<=9999)
	printf("YOU HAVE ENTERE FOUR DIGITS NUMBER.");
	else if(N<=99999)
	printf("YOU HAVE ENTERED FIVE DIGITS NUMBER.");
	else if(N<=999999)
	printf("YOU HAVE ENTRED SIX DIGITS NUMBER.");
	else
	printf("YOU HAVE ENTERED INVALID NUMBER.");
	return 0;
}