#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any number a:");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
	
	b=a%10;
	if(b!=0)
	{
		printf("\n%d is apiyush",a);
	}
	else
	{
	
	b=a%40;
	if(b==0)
	printf("\n%d is a",a);
	else
	printf("\n%d is not a",a);
	}
	}
    else 
    printf("\n%d is not a",a);
    return 0;
}