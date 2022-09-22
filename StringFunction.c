/*Writ a c program in which accept any string and print the length of that string using library function*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	int l;
	printf("enter any string:");
	gets(name);
	//find the length of string
	l=strlen(name);
	/*Convert name in upper case
	strupr()->This function accepts an string and convert that string in upper case*/
	// strlwr()-> lower case
	strupr(name);
	printf("\n You have entered %s , it has %d character(s)",name,l);
	return 0;
}