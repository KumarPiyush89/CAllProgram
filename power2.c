/*
C program to find the value of x^y 
without using multiplication operation
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int base,power,product,multiplier,multiplicand,counter1,counter2;
	printf("Enter the value of base and power(base,power):");
	scanf("%d%*c%d",&base,&power);
	product=1;
	
	multiplier=multiplicand=abs(base);
	if(power==1)
	product=base;
	
	for(counter1=1;counter1<power;counter1++)
	{
		product=0;
		for(counter2=1;counter2<=multiplicand;counter2++)
		{
			product+=multiplier;
		}
		multiplier=product;
	}
	if(base<0&&(power%2==1))
	{
		product=0-product;
	}
	printf("%d^%d=%d",base,power,product);
	printf("\nThank You\n");
	return 0;
	
}
