// SUM OF DIGITS OF ANY float NUMBER
#include<stdio.h>
int main()
{
	float n,x,sum;
	int ud;
	printf("ENter any integer nuber in n:");
	scanf("%f",&n);
	x=n;
	sum=0;
	while 
	(x>0)
	{
		ud=x%10;
		sum=sum+ud;
		x=x/10;	
	}
	printf("%f has sum of %f",n,sum);
	return 0;
}