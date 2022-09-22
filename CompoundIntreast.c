#include<stdio.h>
int main()
{
	int pa;
	float rate;
	int time;
	float ci;
	printf("Enter principal amount:");
	scanf("%d",&pa);
	printf("Enter rate of intreast:");
	scanf("%f",&rate);
	printf("Enter time:");
	scanf("%d",time);
	ci = pa(1+rate/100)time-pa;
	printf("\n compound intreaste=%f",ci);
	return 0;
}