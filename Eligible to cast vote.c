/*
C Program that will accept person is eligible to cast vote or not
*/

#include<stdio.h>
int main()
{
	int age;
	printf("Enter of person in age:");
	scanf("%d",&age);
	age>=18;
	age<=18;
	if(age>=18)
	printf("Person is Eligible to Cast Vote");
	else
	printf("Person is NOt Eligible to cast Vote");
	return 0;
}