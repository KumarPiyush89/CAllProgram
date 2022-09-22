/*C program to check a number is armstrong or not*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,totalDigit,sumOfDigitPower,unitDigit,i;
	printf("All armstrong number between 1 and 9999999:");
	for(i=1;i<=9999999;i++)
	{
		n=i;
	
		n=abs(n);
	/* Find total number of digit in entered number*/
	totalDigit=0;
	x=n;
	while(x!=0)
	{
		x/=10;
		totalDigit++;
	}
	
	//find sum of each digit power of totalDigit
	sumOfDigitPower=0;
	x=n;
	while(x!=0)
	{
		//extract unit place digit of x
		unitDigit=x%10;
		//find the power totalNumber of unitdigit and add in sum variable
		sumOfDigitPower+=pow(unitDigit,totalDigit);
		//remove unit place  digit  from x
		x/=10;
	}
	
	if(n==sumOfDigitPower)
	{
		printf("%d, ",n);
	}
}
	
	return 0;
	
}