/*C program to  calculate compound Interest half yearly*/
#include<stdio.h>
#include<math.h>
int main()
{
	/*variable declaration*/
	float pa;
	float r;
	float t;
	float x;
	float y;
	float z;
	float ci;
	/*code of input*/
	printf("Enter Principal Amount:");
	scanf("%f",&pa);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	
	x=(1+r/100);
	y=pow(x,2*t);
	z=pa*y;
	ci=z-pa;
	
	/* display Result*/
	printf("\nCompound Interest=%f",ci);
	return 0;
	
}