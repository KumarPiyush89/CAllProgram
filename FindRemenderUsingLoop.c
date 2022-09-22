/*C program to find the remender using addition methos*/
#include<stdio.h>
int main()
{
	int dd,dr,x,q,r;
	printf("\nEnter the value of dividend and divisor(dividend/divisor):");
	scanf("%d%*c%d",&dd,&dr);
	//find the quotent
	x=0;
	q=0;
	while(x+dr<=dd)
	{
		x=x+dr;
		r=dd-x;
	}
	printf("\n%d/%d=%d\n",dd,dr,r);
	return 0;
}