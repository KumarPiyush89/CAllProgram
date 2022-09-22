/*
Write a c program in which create three string variable. accept one string from user in 1st string.
print all string.
copy 1st string in 2nd string using loop
copy 1st string in 3rd string using string library function
print all string
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50],str3[50];
	int i;
	printf("Enter any string:");
	gets(str1);
	printf("Str1=%s, str2=%s, str3=%s",str1,str2,str3);
	//copy str1 in str2
	for(i=0;str1[i]!='\0';i++)
	str2[i]=str1[i];
	str2[i]='\0';
	
	//copy str1 in str3
	strcpy(str3,str1);
	printf("\nStr1=%s, str2=%s, str3=%s\n",str1,str2,str3);
	return 0;
	
	
}