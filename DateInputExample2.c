/*
Write a c program that will accept a date and print the accepted date
Date format:
dd/mm/yyyy- 21/10/2021 British format
mm/dd/yyyy - 10/21/2021 US format
yyyy/mm/dd

21-October-2021
21-Oct-2021

*/
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter a Date(dd/mm/yyyy):");
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	printf("\nYou have entered : %d/%d/%d",d,m,y);
	return 0;
}