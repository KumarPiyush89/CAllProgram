/*C program to find the quotent using addition methos*/
#include<stdio.h>
int main()
{
	int dd,dr,x,q;
	printf("\nEnter the value of dividend and divisor(dividend/divisor):");
	scanf("%d%*c%d",&dd,&dr);
	//find the quotent
	x=0;
	q=0;
	while(x+dr<=dd)
	{
		x=x+dr;
		q=q+1;
	}
	
	printf("\n%d/%d=%d\n",dd,dr,q);
	return 0;
}