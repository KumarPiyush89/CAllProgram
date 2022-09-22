/* WRITE A C PROGRAM THAT WILL ACCEPT ANY SYMBOL AND 
PRINT THE ENTERED SYMBOL IS ALPHABET ,DIGIT OR SPECIAL SYMBOL
*/
#include<stdio.h>
int main()
{
	char i;
	printf("Enter any charecter:");
	scanf("%c",&i);
	if(i>48&&i<=57)
	{
		printf("\nyou have enterd %c and it is a digit.",i );
	}
		else
	if(i>65&&i<=90)
	{
		printf("\nyou have enterd %c and it is a capital alphabet.",i );
	}
		else
	if(i>97&&i<=122)
	{
		printf("\nyou have enterd %c and it is a small alphabet.",i);
	}
	else
	{
		printf("\nyou have entered %c and it is a special charecter",i);
	}
	
	return 0;
}