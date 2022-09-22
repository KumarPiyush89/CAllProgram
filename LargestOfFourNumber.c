/*Wacp to find the lagest of  four number*/
#include<stdio.h>
#include<process.h>
int main()
{
	int a,b,c,d;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d,c");
	printf("Enter 4th number:");
	if(a>b)
	{
		if(b>c)
		{
		   if(c>d)
		   printf("%d is largest",d);
		   else
		   printf("%d is largest",c);
	}	}
		else
		{
			if(a>c)
			{
				if(c>d)
				printf("%d is largest",d);
				else
				printf("%d is largest",c);
			}
			else
			{
				if(a>d)
				printf("%d is largest",d);
				else
				printf("%d is largest",a);	
			}
		printf("\n Thank You");
		printf("\n");
		system("pause");
		return 0;
}
	}
	