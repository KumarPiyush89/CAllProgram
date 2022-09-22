/* 
C Program that will accept principal amount and time calculate the simple interest where rate will be 5%
if principal amount is less than 50000 , 8%
*/
#include<stdio.h>
int main()
{
	int pa,t,r,si;
	printf("Enter  principal amount:");
	scanf("%d",&pa);
	printf("Enter time:");
	scanf("%d",&t);
	
	pa<50000;

	r=5;
	r=8;
	si=(pa*r*t)/100;
	if(pa<50000)
	printf("\n %d si:");
	else
	printf("\n %d si:");
	return 0;
}