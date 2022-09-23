/* C program that will read a string from user in any case and print taht string in upper case*/
#include<stdio.h>
int main()
{
	char name[50];
	int i;
	printf("Enter any string:");
	gets(name);
	/* code for conversion in upper case*/
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=97&&name[i]<=122)
		{
			//name[i]=name[i]-32;
			name[i]-=32;
		}
	}
	printf("\nYou have Entered %s",name);
	printf("\n");
	system("pause");
	return 0;
	
}