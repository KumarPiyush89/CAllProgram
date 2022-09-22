#include<stdio.h>

int main()
{
	int a,b,c,square;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	
	square=a*a;
	printf("square of a %d",square);
	square=b*b;
	printf("square of b %d",square);
	square=c*c;
	printf("square of c %d",square);
	
	if(a>b)
	{
		if(a>c)
			printf("%d is largest",a);
		else
			printf("%d is largest",c);
	}
	else
	{
		if(b>c)
			printf("%d is largest",b);
		else
			printf("%d is largest",c);
	}
	
	return 0;
}