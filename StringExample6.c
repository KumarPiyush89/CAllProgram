//first string concat
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50]="Piyush",str2[50]="Kumar",str3[50],str4[50],str5[50];
	//strcpy(str4,str1);
	//strcpy(str5,str2);
	strncat(str1,str3,4);
	str1[4]='\0';
	strcpy(str3,str1);
	strcat(str3,"-");
	strcat(str3,str2);
	printf("\n You have entered %s and %s",str1,str2);
	printf("\n");
	printf("\n \t\t\t\t\t   Then Concat string %s",str3);
	printf("\n");
	system("pause");
	return 0;
}