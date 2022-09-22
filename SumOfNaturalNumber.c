/*write a c program to find the sum of Nnatural number*/
#include<stdio.h>
int main()
{
	int N,sum,i;
	printf("Enter any positive number N:");
	scanf("%d",&N);
	if(N<0)
	{
	printf("SOrry! I can't find the sum of negative number:");
	return 0;
	}
	sum=0;
	i=1;
	while(i<=N)
	{
		sum=sum+1;
		i=i+1;
	}	
	     printf("sum=%d",sum);
	
	return 0;
}