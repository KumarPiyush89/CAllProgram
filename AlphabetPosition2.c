/*
Write a C program that will accept an english alphabet letter and print the position of that letter in english alphabet*/
/*
a=97 97-96=1
b=98 98-96=2
c=99 99-96=3
*/
#include<stdio.h>
int main()
{
	char ch;
	int pos;
	printf("\nEnter any English Alphabet Letter:");
	scanf("%c",&ch);
	//find the position of entered alphabet
	if(ch>=65&&ch<=90||ch>=97&&ch<=122)
	{	
		if(ch>=65&&ch<=90)
		pos=ch-64;
		else
		pos=ch-96;
		
		printf("\nYou have entered %c, Its position in english alphabet is %d",ch,pos);
	
	}
	else
	{
		printf("\n Sorry You haven't  entered an english alphabet");
	}
	
	return 0;
}