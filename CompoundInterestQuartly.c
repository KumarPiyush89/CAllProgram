/* C Program Calculate Compound Interest quatarly*/
#include<stdio.h>
#include<math.h>
int main()
{
	float pa;
	float r;
	float t;
	float x;
	float y;
	float z;
	float ci;
	
	/*code of input*/
	printf("Enter principal amount:");
	scanf("%f",&pa);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	x = (1+r/400);
	y = pow (x,4*t);
	z = pa*y;
	ci = z-pa;
	printf("\nCompound Interest=%f",ci);
	return 0;
}