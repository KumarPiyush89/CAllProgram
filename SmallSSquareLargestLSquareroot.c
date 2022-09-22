/* write a c program that will accept four number and print the square of smallest number and square root of largest number*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,l,s,sr;
	float sq;
	printf("Enter 1st number");
	scanf("%d",&a);
	printf("Enter 2nd number");
	scanf("%d",&b);
	printf("Enter 3rd number");
	scanf("%d",&c);
	printf("Enter 4th number");
	scanf("%d",&d);
	
	//largest  number
	
	if(a>b)
	{
		if(a>c)
		{
		  if(a>d)
		     l=a;
		  else
		     l=d;	
		}
		
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			   l=b;
			else
			    l=d;
							
					
		}
		else
		{
			if(c>d)
			  l=c;
			else
			   l=d;
		}
			
	}
	//smallest number
	
	
		if(a<b)
	{
		if(a<c)
		{
		  if(a<d)
		     s=a;
		  else
		     s=d;	
		}
		
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			   s=b;
			else
			    s=d;
							
					
		}
		else
		{
			if(c<d)
			  s=c;
			else
			   s=d;
		}
			
	}
	// square of smallest number
	sr=s*s;
	//square root of largest number
	sq=sqrt(l);
	// display data
	printf("smallest number is : %d. square of smallest number is : %d \n largest number is : %d .square root of largest number: %f \n",s,sr,l,sq);
	
	
	return 0;
}