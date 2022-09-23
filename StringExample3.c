//str1 and str2 concat
//PIY-KUM
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50]="Piyush",str2[50]="Kumar",str3[50];
	strcpy(str3,str1);
	str3[3]='\0';
	strcat(str3,"-");
	strncat(str3,str2,3);
	printf("CONCAT STRING %s",str3);
	return 0;
}
