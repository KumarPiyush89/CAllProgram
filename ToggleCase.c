/* C program that will read a string from user in any case and print that string in toggle case*/
#include<stdio.h>
int main()
{
	char name[50];
	int i;
	printf("Enter any string:");
	gets(name);
	/* code for conversion in toggle case*/
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
		
			name[i]+=32;
		}
		else if(name[i]>=97&&name[i]<=122)
		{
			name[i]-=32;
		}
	}
	printf("\nYou have Entered %s",name);
	printf("\n");
	system("pause");
	return 0;
	
}