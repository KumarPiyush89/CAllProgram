/* Example NESTED IF */
/* Write a C Program to check an year is leap or not
*/
#include<stdio.h>
int main()
	{
	int year,rem;
	printf("Enter any number:");
	scanf("%d",&year);
	rem=year%4;
	if(rem==0)
	{
	rem=year%100;
	if(rem!=0)
	{
	
	printf("\n%dis leap year",year);	
	}
	else
	{
	rem=year%400;
	if(rem==0)
	printf("\%d is leap year",year);
	
	else
	printf("\n %d is not leap year",year);
		
}
	
}
	
	else
	printf("\n %d is not leap year",year);
	return 0;
	}