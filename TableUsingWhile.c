#include<stdio.h>
int main()
{
	int i,c;
	// c= counter
	printf("Enter the number which table you want to print:");
	scanf("%d",&c);
	i=1;
	while(i<=20)
	{
		printf("\n%d*%2d=%6d",c,i,c*i);
		
		i=i+1;
	}
	return 0;
}