/*
C program that will accept any character from user and print the ASCII of that character
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	printf("\nYou have entered %c and its ASCII is %d",ch,ch);
}