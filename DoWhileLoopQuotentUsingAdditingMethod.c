//WACP TO FIND THE QUOTENT USING ADDITING METHODS.
#include<stdio.h>
int main()
{
	int dd,dr,x,q;
	printf("\nEnter the value of dividend and divisor(dividend/divisor):");
	scanf("%d%*c%d",&dd,&dr);
	//FIND THE QUOTENT
	x=0;
	q=0;
	do
	{
	x=x+dr;
	q=q+1;
	}
	while(x+dr<=dd);
	printf("\n%d/%d=%d\n",dd,dr,q);
	return 0;
}