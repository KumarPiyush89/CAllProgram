//WACP FIND THE SUM OF N NATURAL NUMBER
#include<stdio.h>
int main()
{
	int n,sum,i;
	printf("Enter any positive number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Sorry! I can't find the sum  of negative number.");
		return 0;
	}
	sum=0;
	i=1;
	do
	{
		sum=sum+i;
		i=i+1;
	}
	while(i<=n);
	printf("Sum=%d",sum);
	return 0;
}