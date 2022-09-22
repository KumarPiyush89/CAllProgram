/* C program to check a person is eligible to marry or not*/
#include<stdio.h>
int main()
{
	int age,gender,d1,m1,y1,rd,rm,ry,valid;
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
	//return 0;
	/*1. accept 1st date*/
	printf("Enter  Date(dd/mm/yyyy):");
	scanf("%d%*c%d%*c%d",&d1,&m1,&y1);
	/*Check date is valid or not*/
	if(d1>0&&d1<=31&&m1>0&&m1<=12&&y1>0)
	{
		if(m1==2)
		{
			if(y1%4==0&&y1%100!=0||y1%400==0)
			{
				if(d1<=29)
				valid=1;
				else
				valid=0;
			}
			else
			{
				if(d1<=28)
				valid=1;
				else
				valid=0;
			}
		}
		else if(m1==4||m1==6||m1==9||m1==11)
		{
			if(d1<=30)
			valid=1;
			else
			valid=0;
		}
		else
		valid=1;
	}
	else
	valid=0;
	
	if(valid==0)
{
		printf("\nOops! You have entered an invalid date. Please try again and enter a valid date.\n");
		system("pause");
		return 0;
	}
	}