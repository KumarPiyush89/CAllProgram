/*Write a C program in which accept any integer number and print the total number of even digit and odd digit in that number.
*/
#include<stdio.h>
int main()
{
	int n;
	int r;
	int even;
	int odd;
	printf("Enter any integer number:");
	scanf("%d",&n);
	even=0;
	odd=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		even=even+1;
		else
		odd=odd+1;
	}
	printf("Odd digit(s):%d",odd);
	printf("\n");
	printf("Even digit(s):%d",even);
	return 0;
}