/* 
C program that will accept a symbol and print the entered symbol is alphabet or not
*/
#include<stdio.h>
int main()
{
	char x;
	printf("Enter any symbol:");
	scanf("%c",&x);
	if(x>=65&&x<=90||x>=97&&x<=122)
	{
		printf("\nYou have entered %c and it is alphabet",x);
	}
	else
	{
		printf("\n You have entered %c and it is not an alphabet",x);
	}
	return 0;
}
/*
Write a C prgram that will accept any symbol and print the entered symbol is alphabet, digit or special symbol.
*/
