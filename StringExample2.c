/* Write a c program that will read 2 string from user and create a new string that will content the
5 character of 1st string at 1st and 5 characters of 2nd string at last
for example: if user enter's Sobha kumari and Raj kumar then 3rd string's value will be SobhaRaj k
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50],str3[50];
	printf("Enter 1st string value : ");
	gets(str1);
	printf("\n Enter 2nd string value : ");
	gets(str2);
	strncpy(str3,str1,5);
	str3[5]='\0';
	strcat(str3,"-");
	strncat(str3,str2,5);
	printf("\n RESULT is : %s",str3);
	return 0;
}