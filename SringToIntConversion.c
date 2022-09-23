/*Write a C program in which accept a number in string form and print the square of enterd number*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char n[50];
	int n1;
	float f;
	printf("enter any number:");
	gets(n);
	//convert entered string in integer
	n1=atoi(n);
	//convert the string in float
	f=atof(n);
	printf("\n You have entered %s",n);
	printf("\n You have entered %d and its square is %d",n1,n1*n1);
	
	printf("\n You have entered %f",f);
	return 0;
	
}