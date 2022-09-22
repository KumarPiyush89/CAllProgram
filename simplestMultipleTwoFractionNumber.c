/* C program of multiplication of two fraction number in simplest form*/
#include<stdio.h>
 int main()
 {
 	int n1,d1,n2,d2,n3,d3,x,y,sn,sd;
 	printf("\nEnter 1st fraction numebr(p/q):");
 	scanf("%d%*c%d",&n1,&d1);
 	//validate entered number
 	if(d1==0)
 	{
 		printf("\nNot a valid number!")	;
 		return 0;
	}
	//if demominator is -ve
	if(d1<0)
	{
		n1=n1*-1;
		d1=d1*-1;
	}
	
	printf("Enter 2nd fraction number(p/q):");
	scanf("%d%*c%d",&n2,&d2);
	//validate entered number
	if(d2==0)
	{
		printf("\nNot a valid number!")	;
 		return 0;
	}
	//if denominator is -ve
	if(d2<0)
	{
		n2=n2*-1;
		d2=d2*-1;
	}   
	
	
	//calculate result numerator
	n3=(n1*n2);
	d3=(d1*d2);
	//find simplified form of result number
	//find the HCF of result's numerator and denominator
	x=n3;
	y=d3;
	//x may be -ve
	if(x<0)
	{
		x=x*-1;
	}
	while(x!=y)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	//now x or y is the HCF of n3 and d3
	sn=n3/x;
	sd=d3/x;
	
	
	//print result
	printf("\n%d/%d*%d/%d=%d/%d=%d/%d",n1,d1,n2,d2,n3,d3,sn,sd);
	return 0;
 	
 }