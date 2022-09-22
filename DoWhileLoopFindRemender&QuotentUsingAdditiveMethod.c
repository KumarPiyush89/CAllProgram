//WACP FIND THE REMENDERAND QUOTENT USING ADDITING METHOD
#include<stdio.h>
int main()
{
	int dd,dr,x,q,r;
	printf("Enter the value of dividend,divisor:");
	scanf("%d%d",&dd,&dr);
	x=0;
	q=0;
	r=0;
	do
	{
		//quotent
		{
			x=x+dr;
			q=q+1;
		}
		if(x!=dd);
		//remender
		{
			q=q-1;
			r=dd-(x-dr);
		}
	}
	while(x<dd);
	printf("Dividend=%d,Divisor=%d,then Quotent=%d and remender=%d",dd,dr,q,r);
	return 0;
}