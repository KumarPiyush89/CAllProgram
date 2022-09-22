/*
C program to accept a character and print it on screen
*/
#include<stdio.h>
int main()
{
	//Create a variable to store a single character
	char ch;/* ch is a character type variable. it can store any single character.
	 In memory characters are stored in ASCII code form
	  For example if we store symbol a in variable ch, the ch will contain the ASCII of symbol a i.e. 97
	*/
	printf("Enter any character:");
	scanf("%c",&ch);
	printf("You have entered %c",ch);
	return 0;
}