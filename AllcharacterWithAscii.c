/* 
C program to print all Character with its ASCII
*/
#include<stdio.h>
int main()
{
	int i;
	printf("\n All characters with its ASCII are as:");
	for(i=0;i<=255;i++)
	printf("\n%d %c",i,i);
	return 0;
}