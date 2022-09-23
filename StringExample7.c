/* C program to demonstrate string copy operation*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="PIYUSH KUMAR BILLA",s2[100];
	printf("\ns1=%s and s2=%s",s1,s2);
	//copy s1 in s2
	strcpy(s2,s1);
	printf("\ns1=%s and s2=%s",s1,s2);
	// copy  s1 value in s2 from 2nd character
	strcpy(s2,s1+1);
	printf("\ns1=%s and s2=%s",s1,s2);
	strcpy(s2,s1+6);
	printf("\ns1=%s and s2=%s",s1,s2);
	return 0;
}