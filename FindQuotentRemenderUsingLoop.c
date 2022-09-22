/*C program to find the quotent using addition methos*/
#include<stdio.h>
int main()
{
	int dd,dr,x,q,r;
	printf("\nEnter the value of dividend and divisor(dividend/divisor):");
	scanf("%d%*c%d",&dd,&dr);
	//find the quotent
	x=0;
	q=0;
	r=0;
	
	 while(x<dd)
	{
		x=x+dr;
		q=q+1;
	}
		if(x!=dd);	
	{
		q=q-1;
		r=dd-(x-dr);
	}
	printf("Divedend=%d,Divisor=%d,quotent=%d,remender=%d",dd,dr,q,r);
	return 0;
}