//WACP DIVISION USING DO WHILE LOOP
#include<stdio.h>
int main()
{
	int dd,dr,pdd,pdr,x,q,r;
	printf("ENter the value of dividend and divisor (dd/dr):");
	scanf("%d%*c%d",&dd,&dr);
	if(dd<0)
	pdd=dd*-1;
	else
	pdd =dd;
	if(dr<0)
	pdr=dr*-1;
	else 
	pdr=dr;
	x=0;
	q=0;
	do
	{
		{
			x=x+pdr;
			q=q+1;
		}
		if(x>pdd)
		{
			q=q-1;
			r=pdd-(x-pdr);
		}
		else
		r=0;
		if(dr<0&&dd<0);
		else
		{
			if(dd<0)
			{
				q=q*-1;
				r=r*-1;
			}
			else if(dr<0)
			{
				q=q*-1;
			}
		}
	}
	while(x<pdr);
	printf("\nwhen dividend =%d and divisor=%d then quotent=%d and remender=%d",dd,dr,q,r);
	return 0;
}