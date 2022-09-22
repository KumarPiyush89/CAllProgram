/* We can accept more than one value from a single scanf()*/
/*
write a C program that will accept 3 numbers from user and print all numbers in screen*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers seperate by any white space(Enter, Tab or Space) character:");
	scanf("%d,%d%d",&a,&b,&c);/*Values will be seperated by white space character*/
	printf("\na=%d, b=%d and c=%d",a,b,c);
	return 0;
}