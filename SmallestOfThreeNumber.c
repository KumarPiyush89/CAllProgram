/* C program to find the smallest of three numbers*/
#include<stdio.h>
#include<process.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
			printf("%d is smallest",a);
		else
			printf("%d is smallest",c);
	}
	else
	{
		if(b<c)
			printf("%d is smallest",b);
		else
			printf("%d is smallest",c);
	}
	printf("\nThank You");
	printf("\n");
	//system("pause");
	return 0;
}