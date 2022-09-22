/* C program to check a person is eligible to marry or not*/
#include<stdio.h>
int main()
{
	int age,gender;
	printf("Enter gender of Person(1-Male, 2-female):");
	scanf("%d",&gender);
	printf("Enter age of person:");
	scanf("%d",&age);
	if(gender==1)
	{
		/*male*/
		if(age>=21)
		printf("\nPerson is eligible for Marry!!!!");
		else
		printf("\nPerson in not eligible for marry.");
	}
	else
	{
		/*Female*/
		if(age>=18)
		printf("\nPerson is eligible for Marry!!!");
		else
		printf("\nPerson is not eligible for marry.");
	}
	printf("\nThank You \n");
	return 0;
}