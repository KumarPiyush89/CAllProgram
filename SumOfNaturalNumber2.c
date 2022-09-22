/*write a c program to find the sum of Nnatural number*/
#include<stdio.h>
int main()
{
	int n,sum,i;
	printf("Enter any positive number N:");
	scanf("%d",&n);
	if(n<0)
	{
        n=n*-1;
	}
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+1;
		i=i+1;
	}	
	     printf("sum=%d",sum);
	
	return 0;
}