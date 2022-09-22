/* c program that will accept ascii value from user and print the Character of that ASCII code*/
#include<stdio.h>
int main()
{
	int ch;
	printf("\nEnter Any ASCII code(0-255):");
	scanf("%d",&ch);
	if(ch<0||ch>255)
	{
		printf("\nSorry You have entered invalid ASCII CODE. It ranges between 0 to 255");
		return 0;
	}
	
	printf("\nASCII Code:%d  %c",ch,ch);
	return 0;
}