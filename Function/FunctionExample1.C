/* C program to add two numbers using user defined function*/
#include<stdio.h>
//create function to add two integer number
//1. function declaration
int sum(int,int);

//defination of sum function
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int a,b,c;
	printf("enter 1st number:");//function call
	scanf("%d",&a);//function call
	printf("Enter 2nd number");
	scanf("%d",&b);
	c=sum(a,b);//function call
	printf("\n Sum=%d",c);
	return 0;
	
}