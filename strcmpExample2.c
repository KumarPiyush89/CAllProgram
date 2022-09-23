/* write a c program in which accept any two string and print both string in dictionary order*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("enter 1st string:");
	gets(s1);
	printf("enter 2nd string:");
	gets(s2);
	printf("Entered strings are:");
	if(strcmp(s1,s2)>0)
	printf("\n%s,%s",s2,s1);
	else
	printf("\n%s,%s",s1,s2);
	return 0;
}