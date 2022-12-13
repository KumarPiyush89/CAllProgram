/* WRITE A C PROGRAM THAT WILL ACCEPT NAME, CLASS, ROLL, DOB, AND MARKS OF 
5 SUBJECT OF 5 STUDENT AND PRINT ALL ENTERED RECORD IN FOLLOWING FORMATE
  SR.NO 	 NAME     	  CLASS    ROLL        DOB         		DOA         P1  P2  P3  P4  P5   TOTAL-MARKS  DIVISION
	1	KUMAR PIYUSH		10		13		03/01/2003		23/06/2021      25  67  75  45  20      XXXX       FAIL
	2
	3
	4
	5
	*/
	
#include<stdio.h>
struct Date
{
	int day;
	int month;
	int year;	
};	

struct Student
{
	char name[30];
	struct Date dob;
	struct Date doa;
	int clas;
	int roll;
	int p1,p2,p3,p4,p5;
	
};
int main()
{
//int total_marks;
	//CREATE VARIABLE TO STORING 5 STUDENT RECORDS
	struct Student S[3];
	int i;
	int total_marks;
	int passInAll;
	int division;
	// CODE FOR INPUTE DATA
	
	for(i=0;i<3;i++)
	{
		system("cls");
		printf("Enter record of Student %d:",i+1);
		printf("\nName:");
		fflush(stdin);
		gets(S[i].name);
		printf("clas:");
		scanf("%d",&S[i].clas);
		printf("roll:");
		scanf("%d",&S[i].roll);
		printf("DOB(dd/mm/yyyy):");
		scanf("%2d%*c%2d%*c%4d",&S[i].dob.day,&S[i].dob.month,&S[i].dob.year);
		printf("DOA(dd/mm/yyyy):");
		scanf("%2d%*c%2d%*c%4d",&S[i].doa.day,&S[i].doa.month,&S[i].doa.year);
		printf("P1:");
		scanf("%d",&S[i].p1);
		printf("P2:");
		scanf("%d",&S[i].p2);
		printf("P3:");
		scanf("%d",&S[i].p3);
		printf("P4:");
		scanf("%d",&S[i].p4);
		printf("P5:");
		scanf("%d",&S[i].p5);
		/*Processing*/
		
		
		
		
	}
		system("cls"); 
		printf("All Entered Value are");
		printf("\n%6s %15s %13s %7s %12s %12s %6s %4s %4s %4s %4s %14s %12s","Sr.No","Name","Class","Roll","DOB","DOA","P1","P2","P3","P4","P5","TOTAL_MARKS","DIVISION");
		printf("\n");
		for(i=0;i<140;i++)
		printf("%c",205);
		printf("\n");
		
		for(i=0;i<3;i+=1)
		{
			// Find Total
		total_marks=S[i].p1+S[i].p2+S[i].p3+S[i].p4+S[i].p5;
		printf("\n%4d. %20s %8d %8d       %2d/%2d/%4d  %2d/%2d/%4d %3d  %3d  %3d  %3d  %3d %6d ",i+1, S[i].name,S[i].clas,S[i].roll,
		S[i].dob.day,S[i].dob.month,S[i].dob.year,S[i].doa.day,S[i].doa.month,S[i].doa.year,
		S[i].p1,S[i].p2,S[i].p3,S[i].p4,S[i].p5,total_marks);
		if(S[i].p1>=30&&S[i].p2>=30&&S[i].p3>=30&&S[i].p4>=30&&S[i].p5>=30)
		{
			if(total_marks>=300)
			printf("%12s","FIRST");
			else if(total_marks>=225)
			printf("%12s","SECOND");
			else 
			printf("%12s","THIRD");
		}
		else
		{
			printf("%12s","FAIL");
		}
		
		}
		
		
		
		
		
	return 0;
}