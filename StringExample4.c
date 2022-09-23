//str3 concat
//PiyKumar
//Piyush-kumar
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50]="Piyush",str2[50]="Kumar",str3[50];
	strcpy(str3,str1);
	strcat(str3,"-");
	strncat(str3,str2,2);
	str3[2]='\0';
	strcat(str3,str2);
	printf("you have Entered %s",str3);
	return 0;
}