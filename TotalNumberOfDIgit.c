//C PROGRAM TO FIND THE TOTAL NUMBER OF DIGIT IN AN INTEGER NUMBER
#include<stdio.h>
int main()
{
	//unsigned long x,n;
	int x,n;
	int c;
	printf("Enter any number in n.");
	scanf("%d",&n);
	//scanf("%lu",&n);
	x=n;
	c=0;
	while
	(x!=0)
	{
	//	x=x/10;
		c=c+1;
		x=x/10;
	}
	//printf("\n%lu has %d digit(s).",n,c);
	
	printf("\n%d has %d digit(s).",n,c);
	return 0;
}