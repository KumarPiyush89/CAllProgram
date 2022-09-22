/*
A- 65	a= 97  97-65=32   65+32=97
B- 66	b=98   98-66=32   66+32=98
C- 67	c=99  99-67=32


Z- 90	z=122 122-90=32
*/	
/* C program that will accet any english alphabet in any case and print in reverse case*/
#include<stdio.h>
int main()
{
	char ch,rch;
	printf("Enter any english alphabet:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		//eneterd symbol is upper case alphabet
		//find reverse case letter
		rch=ch+32;
		printf("\n%c->%c",ch,rch);
		
	}
	else if(ch>=97&&ch<=122)
	{
		//enterd symbol is lower case alphabet
		//find reverse case letter
		rch=ch-32;
		printf("\n%c->%c",ch,rch);
	}
	else
	{
		//enterd symbol is not alphabet
		printf("OOPS! you have not entered an alphabet.");
	}
	return 0;
	
}