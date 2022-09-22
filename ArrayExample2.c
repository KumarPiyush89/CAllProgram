/*WRITE A C PROGRAM THAT WILL ACCEPT TEN INTEGER NUMBER AND PRINT THE SUM OF ALL INTERED NUMBER
*/
#include<stdio.h>
int main()
{
	int n[25],i,sum;
	for(i=0;i<25;i++)
	{
	printf("Enter number %d/25:",i+1);
	scanf("%d",&n[i]);
    }
	
	sum=0;
	for(i=0;i<25;i++)
	sum+=n[i];
	printf("\n sum of all integer numbers is %d",sum);
	return 0;
}