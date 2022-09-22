//C program to count the total number of digit in any entered number
#include<stdio.h>
int main()
{
	int n,x,td;
	printf("Enter any number:");
	scanf("%d",&n);
	x=n;
	td=0;
	do
	{
		td+=1;
		x/=10;
	}while(x!=0);
	
	printf("\n%d has %d digit",n,td);
	if(td>1)printf("s");
	return 0;
}