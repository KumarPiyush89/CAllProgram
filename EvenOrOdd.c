/* C Program that will accept a number and print the number is even or odd*/
#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter any number:");
	scanf("%d",&n);
	r=n%2;
	if(r==0)
	printf("\n %d is Even",n);
	else
	printf("\n%d is Odd",n);
	return 0;
}