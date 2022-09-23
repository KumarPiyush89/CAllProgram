/* Write a C program that will accept 2 string from user and print both strings are same of not*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("enter 1st string:");
	gets(s1);
	printf("enter 2nd string:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	printf("\n You have entered %s and %s, BOTH are SAME",s1,s2);
	else
	printf("\nYou have entered %s and %s, BOTH are DIFFERENT",s1,s2);
	return 0;
}