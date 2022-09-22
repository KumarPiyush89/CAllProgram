/* write a c program that accepts a fraction number and prints its reciprocal*/
#include<stdio.h>
int main()
{
	int n1,d1,rn,rd;
	printf("Enter a fraction number(p/q)");
	scanf("%d%*c%d",&n1,&d1);
	
	if(d1==0)
	{
	
	printf("\nNot a valid number!");
	return 0;
    }
    
    if(d1<0)
    {
    	n1=n1*-1;
    	d1=d1*-1;
	}
	
	rn=d1;
	rd=n1;
	
	//is denominator of reciprocal is negative, if yes make it positive
	
	if(rd<0)
	{
     rn=rn*-1;
     rd=rd*-1;
	}
	printf("\nYou have enterd %d/%d and its reciprocal is %d/%d",n1,d1,rn,rd);
	return 0;
}