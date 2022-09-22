/*WACP  that will accept of any integer number and print the factorial of that number*/
#include<stdio.h>
int main(){
		int n,c;
		unsigned long f;
	printf("Enter any integer number in n=");
	scanf("%d",&n);
	if(n<0)
	{
		n=n*-1;
	}
	f=1;
	c=n;
	//factorial
	while 
	(c>0)
	{
	f=f*c;
	c=c-1;
	}
	printf("\n %lu is the factorial of %d",f,n);
	return 0;
}