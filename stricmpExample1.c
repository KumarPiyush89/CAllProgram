//PALINDROME YES OR NOT
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	int i;
	printf("Enter any string:=");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	printf("\n");
	for(i=1;i<25;i++)
	printf("%c",205);
	if(stricmp(s1,s2)==0)
	{
	system("color 3");
	printf("\n String is Palindrome");
	}
	else
	{
	system("color 4");
	printf("\n String is not Palindrome");
	}
	printf("\n");
	printf("\n \t THANK YOU ");
	
	return 0;
	
}