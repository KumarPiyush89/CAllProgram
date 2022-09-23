#include<stdio.h>
#include<math.h>
#include<process.h>
int main()
{
	int a,b,c,d,s,l,sr,sq;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	printf("Enter 4th number:");
	scanf("%d",&d);
	/*FIND THE LARGEST NUMBER*/
	
	if(a>b)
	{
		 if(a>c) 
		{
			if(a>d)
			s=a;
			else
			s=d;
		}
		else
		{
			if(c>d)
			s=c;
			else
			s=d;
		}
		if(b>c)
		{
			if(b>d)
			s=b;
			else
			s=d;
		}
		else
		{
			if(c>d)
			s=c;
			else
			s=d;
		}
	
		
		}
		
		/*FIND THE SMALLEST NUMBER*/
		
			if(a<b)
	{
		 if(a<c) 
		{
			if(a<d)
			l=a;
			else
			l=d;
		}
		else
		{
			if(c<d)
			l=c;
			else
			l=d;
		}
		if(b<c)
		{
			if(b<d)
			l=b;
			else
			l=d;
		}
		else
		{
			if(c<d)
			l=c;
			else
			l=d;
		}
	
		
		}
		/*FIND THE SQUAREROOT OF LARGEST*/
		sq=sqrt(l);
		
		/*FIND THE SQUARE OF SMALLEST*/
		sr=s*s;
		/* DISPLAY DATA */
		printf("\n you have entered %d,%d,%d and %d.The smallest number is %d and The largest number is %d.squareroot of %d is %d and square of %d is %d.",a,b,c,d,s,l,l,sq,s,sr);
		system("pause");
		return 0;
		
		
	}
	







