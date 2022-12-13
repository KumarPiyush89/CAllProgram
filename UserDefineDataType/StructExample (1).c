/* write a C program in which accept name,class,roll,dob,doa,marks of five papers of 10 atudents and 
print all entered record with total marks and division*/
#include<stdio.h>
#include<string.h>
struct Date
{
	int date;
	int month;
	int year;
};
struct  Date inputDate()
{
	struct Date date;
	int valid;
	do
	{
		
		printf("Enter Date (dd/mm/yyyy):");
		scanf("%2d%*c%2d%*c%4d",&date.day,&date.month,&date.year);
		
		//CHECK DATE VALID
		valid=1;
		if(date.day>0&&date.day<=31&&date.month>0&&date.month<=12&&date.year>0)
		{
			if(date.month==2)
			{
				if(date.year%4==0&&date.year%100!=0||date.year%400==0)
				{
					if(date.day<=29)
					valid=1;
					else
					valid=0
				}
				else
				{
					if(date.day<=28)
					valid=1;
					else
					valid=0
				}
			}
			else if(date.month==4||date.month==6||date.month==9||date.month==11)
			{
				if(date.day<=30)
				{
					valid=1;
				}
				else
				{
					valid=0;
				}
			}
			else
			valid=1;
	}
	else
	{
		valid=0;
	}
	if(valid==1)
	{
		return date;
	}
	else
	{
		printf("Oops! You have entered an invalid date, Plese entered a valid date");
	}
}
	while(1);
}
void printDate(struct Date date)
{
	printf("%2d/%2d/%4d",date.day,date.month,date.year);
}
struct student
{
	char name[30];
	int clas;
	int roll;
	struct Date dob;
	struct Date doa;
	int marks[5];
};
struct student inputstudent()
{
	int i;
	struct student student;
	printf("Enter Name");
	fflush(stdin);
	gets(student.name:);
	printf("Enter class");
	scanf("%d",&student.clas);
	printf("Enter Roll:");
	scanf("%d",&student.roll);
	printf("Enter DOB:");
	student.dob=inputDate();
	printf("Enter DOA:");
	student.doa=inputDate();
	
	for(i=0;i<5;i++)
	{
		printf("Paper %d:",i+1);
		scanf("%d",&student.marks[i]);
	}
	return student;
}

void printStudent(struct Student student)
{
	int total;
	float percentage;
	char division;
	int i;
	int passInAll;
	
	//Find Total	
}