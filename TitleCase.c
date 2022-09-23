/* C program that will read a string from user in any case and print that string in title case*/
#include<stdio.h>
int main()
{
	char name[50];
	int i;
	printf("Enter any string:");
	gets(name);
	/* code for conversion in   Title Case case*/
	/* Make string lower*/
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
			name[i]+=32;
		}
	}
	
	//make 1st letter of string in upper case
	if(name[0]>=97&&name[0]<=122)
	{
		name[0]-=32;
	}
	
	//now check all element from index 1 to end of string and convert a symbol in upper case if its previous character if space
	for(i=1;name[i]!='\0';i++)
	{
		
		if(name[i-1]==32)
		{
			if(name[i]>=97&&name[i]<=122)
			{
					name[i]-=32;
			}
		}
	}
	printf("\nYou have Entered %s",name);
	printf("\n");
	system("pause");
	return 0;
	
}