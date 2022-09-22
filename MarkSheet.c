/*
Write a C program in which Accept name,father's name, mother's name,dob, gender,rollcode,roll number and marks of 5 matric subject
and print the result in Following Format:

Bihar School Examination Board, Patha
      Secondary Exam -2022
============================================
Name: Mr/Miss XXXXXXXXXXXXX
Mother's Name: Mrs XXXXXXXXXXXXXX
Father's Name: Mr. XXXXXXXXXXXXXX
Roll Code:23010
Roll No:22001001
================================================
		Marks Details
===============================================
Sub Name	Full Marks	Pass Marks	Obtained Marks
Hindi		100			30			88 D - Eight Eight
Math		100			30			27 F - Two Seven
Sciecne		100			30			35   - Three Five



==================================================
					Total		xxxx - Digit digit Digit
					percentage  XX.XX%
					Division	1st/2nd/3rd/FAIL
*/					


#include<stdio.h>
#include<process.h>
#include<math.h>
#include<string.h>
int main()
{
	/*variable declaration*/
	int RollCode,RollNo,d,m,y,English,Math,Physics,Hindi,Chemistry,Sanskrit,sum,i,passInAll,Gender;
	float per;
	char Name[20],FathersName[20],MothersName[20],Division[10],Faculity[20],CollageName[100];
	int x,totalDigit,lastDigit,remainingDigits;
	int Compulsory,Optional,Additional;
	/*Input*/
	printf("Enter Name:");
	gets(Name);
	printf("Enter FathersName:");
	gets(FathersName);
	printf("Enter MothersName:");
	gets(MothersName);
	printf("Enter CollageName:");
	gets(CollageName);
	printf("Enter Faculity");
	gets(Faculity);
	printf("Enter ROllCOde:");
	scanf("%d",&RollCode);
	printf("Enter RollNO:");
	scanf("%d",&RollNo);
	printf("Enter Gender(1-Male, 2-Female):");
	scanf("%d",&Gender);
	printf("Enter Dob:");
	scanf("%d/%d/%d",&d,&m,&y);	
	printf("Enter marks of English:");
	scanf("%d",&English);
	printf("Enter marks of Math:");
	scanf("%d",&Math);
	printf("Enter marks of Physics:");
	scanf("%d",&Physics);
	printf("Enter marks of Hindi:");
	scanf("%d",&Hindi);
	printf("Enter marks of Chemistry:");
	scanf("%d",&Chemistry);
	printf("Enter marks of Sanskrit:");
	scanf("%d",&Sanskrit);
	/*Processing*/
	sum=Physics+Math+Chemistry+Hindi+Sanskrit;
	per=sum/5.0;
	/*check student is pass in all subject or not*/
	passInAll=1;
	if(Physics<30)
	passInAll=0;
	
	if(Math<30)
	passInAll=0;
	
	if(Chemistry<30)
	passInAll=0;
	
	if(Hindi<30)
	passInAll=0;
	
	if(Sanskrit<30)
	passInAll=0;
	
	system("cls");
	printf("\t\tBihar School Examination Board,Patna");
	printf("\n\t\t\tSecondary Exam 2022");
	printf("\n\t\t\t\tMark Sheet");
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",205);
	printf("\n");
	strupr(Name);
	printf("\nName\t\t: %s",Name);
	strupr(MothersName);
	printf("\nMothersName\t: Mrs.%s",MothersName);
	strupr(FathersName);
	printf("\nFathersName\t: Mr.%s",FathersName);
	strupr(CollageName);
	printf("\nCollageName\t: %s",CollageName);
	strupr(Faculity);
	printf("\nFaculity\t: %s",Faculity);
	printf("\nRollCode\t: %d",RollCode);
	printf("\nROllNo\t\t: %d",RollNo);
	printf("\nDob\t\t: %d/%d/%d",d,m,y);
	printf("\nGender\t\t: ",Gender);
	if(Gender==1)
	printf("Male");
	else printf("Female");
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",205);
	printf("\n");
	printf("\t\t\tMarks Details\n");
	for(i=0;i<95;i++)
	printf("%c",205);
	printf("\nSubject\t\t  |  FullMarks\t\t  |  PassMarks\t\t  |  Obtained Marks  ");
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",196);
	printf("\nPhysics\t\t  |    100\t\t  |    30\t\t  |    %d",Physics  );
	if(Physics>=75)
	printf(" D ");
	else if(Physics<30)
	printf(" F ");
	else printf("   ");
	
	//count total number of digit in entede number
	x=Physics;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=Physics;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
		printf("\n");
	for(i=0;i<95;i++)
	printf("%c",196);
	
	printf("\nMath\t\t  |    100\t\t  |    30\t\t  |    %d",Math);
	if(Math>=75)
	printf(" D ");
	else if(Math<30)
	printf(" F ");
	else printf("   ");
		x=Math;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=Math;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",196);
	
	
	printf("\nChemistry\t  |    100\t\t  |    30\t\t  |    %d",Chemistry);
	if(Chemistry>=75)
	printf(" D ");
	else if(Chemistry<30)
	printf(" F ");
	else printf("   ");
		
	x=Chemistry;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=Chemistry;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",196);
	
	
	printf("\nHindi\t\t  |    100\t\t  |    30\t\t  |    %d",Hindi);
	if(Hindi>=75)
	printf(" D ");
	else if(Hindi<30)
	printf(" F ");
	else printf("   ");
	
	x=Hindi;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=Hindi;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",196);
	
	
	printf("\nSanskrit\t  |    100\t\t  |    30\t\t  |    %d",Sanskrit);
	if(Sanskrit>=75)
	printf(" D ");
	else if(Sanskrit<30)
	printf(" F ");
	else printf("   ");
	
	x=Sanskrit;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=Sanskrit;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}

	
	printf("\n");
	for(i=0;i<95;i++)
	printf("%c",205);
	
	printf("\nEnglish\t\t  |    100\t\t  |    30\t\t  |    %d",English);
	if(English>=75)
	printf(" D ");
	else if(English<30)
	printf(" F ");
	else printf("   ");
	
	x=English;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=English;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
	printf("\n");
	printf("\n\t\t\t\t\t\t\tTotal\t\t%d",sum);
	x=sum;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=sum;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}

	printf("\n\t\t\t\t\t\t\tPercentage\t%.2f%",per);
	printf("\n\t\t\t\t\t\t\tDivision\t");
	if(passInAll==1)
	{
		if(per>=60)
			printf("FIRST");
			else
			{
				if(per>=45)
				printf("SECOND");
				else
				{
					if(per>=30)
					printf("THIRD");
				}
			}
	}
	else
	 printf("FAIL");
	
	return 0;
}