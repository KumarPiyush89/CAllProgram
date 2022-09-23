/* Write a c program that will read a string from user and print the 5 characters of entered string
for example: if user enter's Sheetal Sinha output should be Sheet.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	/* step 1 user se ek string input le kar use string 1 variable mein store krenge
	 step 2 string 1 ke starting 5 character ko string 2 variable mein copy krenge
	 step 3 string 2 ke data ko screen per likh denge
	*/
	printf("Enter any string: ");
	gets(str1);
	strncpy(str2,str1,5);
	str2[5]='\0';
	printf("\nYou have entered : %s",str2);
	return 0;
}