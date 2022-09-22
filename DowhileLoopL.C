/* Write a C program to find the lcm of two positive integer number using Do While loop*/
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter the value of any two positive integer number : ");
	scanf("%d%*c%d",&x,&y);
	a=x;
	b=y;
	if(a!=b)
	{
	
       do
	   {
		   if(a<b)
		   {
			  a=a+x;
		   }
		   else
		   {
			  b=b+y;
		   }
	   }while(a!=b);
	}
    printf("\n %d is the lcm of %d and %d ",a,x,y);
	
	return 0;
}