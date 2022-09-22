/*
WRITE A C PROGRAM TO PRINT FIBONACCI SERIES OF n TERMS WHERE n IS INPUT BY USER::0,1,1,2,3,5,8,13,24.....
*/
#include<stdio.h>
int main()
{
	int c,n,prelast,last,newnumber;
	printf("Enter number of terms in n:");
	scanf("%d",&n);
	prelast=0;
	last=1;
	printf("%d is the value of %d and %d",prelast,last);
	c=1;
	{
	do
	{
		newnumber=prelast-last;
		printf("%d",newnumber);
		prelast=last;
		last=newnumber;
		c+=1;
	}
	while(c<=n);
		}
return 0;
}