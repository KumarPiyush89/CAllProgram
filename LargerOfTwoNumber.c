
/*
C program that will accept two number and print the numberis larer
*/
 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	a>b;
	b>a;
	if(a>b)
	printf("\n %d is larger",a);
	else
	printf("\n %d is larger",b);
	return 0;
	

}