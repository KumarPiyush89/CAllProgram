/*Write a C program in which accept any two string and print the entered  string in  ascending order according to there length.
*/
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i,str1len,str2len;
	printf("Enter 1st string:");
	gets(str1);
	printf("Enter 2nd string:");
	gets(str2);
	printf("\n%s\n%s:",str1,str2);
	printf("\n");
	for(i=0;i<80;i++)
	printf("%c",205);
	printf("\n");
	printf("\nAfter ascending order according to there length");
	//FIND THE LENTH OF 1ST STRING
	for(str1len=0;str1[str1len]!='\0';str1len++);
	//FIND THE LENTH OF 2ND STRING
	for(str2len=0;str2[str2len]!='\0';str2len++);
	if(str1len<str2len)
	printf("%s\n%s",str1,str2);
	else
	printf("\n %s\n%s",str2,str1);
	printf("\n");
	return 0;

}