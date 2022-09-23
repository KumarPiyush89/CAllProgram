/*
"Kumar Piyush from Aurangabad"-> copy from 7th character and total 8 character
"Piyush f"*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="Kumar Piyush From Deo Aurangabad",str2[100],str3[100],len,stringPosition;
	
/*	strcpy(str2,str1+7);
	strcpy(len,str2);
	if(len<=8)
	stringPosition=0;
	else
	stringPosition=len-8;
	strcpy(str3,str2+stringPosition);
	printf("\n str1=%s and str3=%s ",str1,str3);
	return 0;
*/
	strcpy(str2,str1+7);
	strncpy(str3,str2,11);
	str2[11]='\0';
	len=strlen(str1);
	if(len<=7)
	stringPosition=len-7;
	strcpy(str2,str1+stringPosition);
	if(len<=7)
	printf("%s its copy is %s",str1,str2);
	else
	printf("\n%s its copy is %s",str1,str3);
	return 0;
}
