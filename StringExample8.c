/* write a C program that reads an string from user and copy last 5 characters in another string
and print both string*/
/*
input string	Copied string
empty string	enpty string
a				a
ab				ab
abc				abc	
abcd			abcd
abcde			abcde	
abcdef			bcdef
abcdefg			cdefg
abcdefgh		defgh

1-1
2-2
3-3
4-4
5-5= 5-5=0
6-5-> 6-5=1
7-5-> 7-5=2
8-5
9-5
10-5
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],len,startingPosition;
	printf("Enter any string:");
	gets(s1);
	//find the length of entered string
	len=strlen(s1);
	//find the starting position to copy ,so that lats 5 characters can be copied
	if(len<=5)
	startingPosition=0;
	else
	startingPosition=len-5;
	
	//copy s1 in s2
	strcpy(s2,s1+startingPosition);
	
	printf("\n You have entered %s, and its copy is %s",s1,s2);
	return 0;


}

/*
"Rahul kumar from Gaya"-> copy from 7th character and total 8 character
"Kumar fr"*/