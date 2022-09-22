/*Erite a c program that will accept smallest and largest of 3 numbers*/
#include<stdio.h>
#include<process.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number");
	scanf("%d",&a);
	printf("Enter 2nd number");
	scanf("%d",&b);
	printf("Enter 3rd number");
	scanf("%d",&c);
	if(a<b)
	
	{
		if(b<c)
		printf("%d is smallest",c);
		else
		printf("%d is largest",b);
	}
	else
	{
		if(a<c)
		printf("%d is smallest",c);
		else
		printf("%d is largest",a);
	}
	printf("\n Thank You");
	printf("\n");
	system("pause");
	return 0;
}