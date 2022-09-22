/*#include<stdio.h>
int main()
{
	int c,r,b,p;
	printf("Enter any number of base:");
	scanf("%d",&b);
	printf("Enter any number of power:");
	scanf("%d",&p);
	c=1;
	r=1;
	while(c<=p);
	{
	r=r*b;
	c=c+1;
	printf("\n%d%d%d%d",p,b,r,c);
    }
	return 0;
	
}
*/


#include<stdio.h>
int main()
{
	int b,p,product,multiplier,multiplicand,counter,counter2;
	printf("Enter any number of base and power both value must be positive");
	scanf("%d%d",&b,&p);
	product=0;
	multiplier=b;
	multiplicand=b;
	counter=1;
	do
	{
		while(counter<p);
		{
			counter2=1;
			product=0;
		}
		product=product+multiplier;
		counter2=counter2+1;
		while(counter2<=multiplicand)
		{
			multiplier=product;
			counter=counter+1;
		}
		printf("%d",&product);
	}

}