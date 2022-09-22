/* input from keyboard AddSubtMultiDivid*/
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int w;
	int x;
	int y;
	int z;
	
	
	
	printf("Enter 1st Number:");
	scanf("%d",&a);
	printf("Enter 2nd Number:");
	scanf("%d", &b);
	 w = a+b;
	printf("%d+%d=%d",a,b,w);
	
	printf("\nEnter 2nd Number:");
	scanf("%d", &c);
	x = w-c;
     printf("\n%d-%d=%d",w,c,x);
    
	printf("\nEnter 2nd Number:");
	scanf("%d", &d);
	y = x*d;
	 printf("\n%d*%d=%d",x,d,y);
	 
	 printf("\nEnter 2nd Number:");
	scanf("%d", &e);
	z = y/e;
     printf("\n%d/%d=%d",y,e,z);
     return 0;
}