/* C program to find the length of string*/
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("enter any string:");
	gets(str);
	
	//find the length of string
	//to find length of string find the first occurance of null is array
	for(i=0;str[i]!='\0';i++);
	
	printf("\nYou have entered %s and it has %d characters.",str,i);
	printf("\n");
	system("pause");
	return 0;
}