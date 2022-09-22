/* write a c program that will accept total marks of a bihar bord student and print the division*/
#include<stdio.h>
int main()
{
	int tm,p;
	printf("enter total marks:");
	scanf("%d",&tm);
	p=tm/5;
	if(p>=60)
	printf("First division");
	else if(p>=45)
	printf("\nSecond division");
	else if(p>=30)
	printf("\nThird division");
	else
	printf("\nFail");
	printf("\nthank you");
	return 0;
}