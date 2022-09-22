/* WRITE A C PROGRAM THAT WILL ACCEPT ANY SYMBOL AND 
PRINT THE ENTERED SYMBOL IS ALPHABET ,DIGIT OR SPECIAL SYMBOL
*/
#include<stdio.h>
int main()
{
	char x;
	printf("Enter any character:");
	scanf("%c",&x);
	if(x>=65&&x<=90||x>=97&&x<=122)
		printf("\nYou have entered %c and it is Alphabet",x);
	else if(x>48&&x<=57)
		printf("\nYou have entered %c and it is Digit",x);
	else
		printf("\nYou have entered %c and it is Special symbol",x);
	return 0;
}
