/* C PROGRAM TO FIND THE QUOTENT USING ADDITING MATHOD
*/
#include<stdio.h>
int main()
{
	int dd,dr,x,q;
	printf("\nEnter the value of dividend and divisor(dividend/divisor):");
	scanf("%d%d*c%d",&dd,&dr);
	for(x=0;x+dr<=dd;x+dr)
	q=q+1;
	printf("\n%d%d=%d\n",dd,dr,q);
	return 0;
}