/* WACP to find the LCM of two positive integer number*/
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter any two positive integer number in x and y:");
	scanf("%d%d*c%d",&x,&y);
	a=x;
	b=y;
	while
	 	(a!=b)
	{
	  	if (a<b)
	  		a=a+x;
		else
			b=b+y;
	}
	printf("%d is the lcm of %d and %d",a,x,y );
	return 0;
    }
