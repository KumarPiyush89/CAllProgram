// SUM OF DIGITS OF ANY INTEGER NUMBER
#include<stdio.h>
int main()
{
	int n,ud,x,sum;
	printf("ENter any integer nuber in n:");
	scanf("%d",&n);
	x=n;
	sum=0;
	while 
	(x>0)
	{
		ud=x%10;
		sum=sum+ud;
		x=x/10;	
	}
	printf("%d has sum of %d",n,sum);
	return 0;
}