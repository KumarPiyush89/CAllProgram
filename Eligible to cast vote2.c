/*Write a C program in which accept the DOB of a person and print the person is eligible to cast vote or
not on 1st deember 2021.*/
/*
1. accept DOB
2. Check DOB is valid or not
3. Initialize 2nd date
4. Subtract DOB from 2nd date
5. Check according to year
*/
#include<stdio.h>
#include<process.h>
int main()
{
	int d1,m1,y1,dobd,dobm,doby,rd,rm,ry,valid;
	/*Accept dob from user*/
	printf("Enter DOB of person(DD/MM/YYYY):");
	scanf("%d%*c%d%*c%d",&dobd,&dobm,&doby);
	/*check entered dob is valid or not*/
	if(dobd>0&&dobd<32&&dobm>0&&dobm<13&&doby>0)
	{
		if(dobm==2)
		{
			if(doby%4==0&&doby%100!=0||doby%400==0)
			{
				if(dobd<=29)
				valid=1;
				else
				valid=0;
			}
			else
			{
				if(dobd<=28)
				valid=1;
				else
				valid=0;
			}
		}
		else if(dobm==4||dobm==6||dobm==9||dobm==11)
		{
			if(dobd<=30)
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
		printf("\nSorry! you have enterd an invalid DOB. Please try again and enter a valid DOB.");
		printf("\n");
		system("pause");
		return 0;
	}
	
	//Set second Date in d1/m1/y1
	d1=1;
	m1=12;
	y1=2021;
	
	/*Subtract DOB from d1/m1/y1*/
	/*check for day borrow*/
	if(d1<dobd)
	{
		if(m1-1==2)
		{
			if(y1%4==0&&y1%100!=0||y1%400==0)
				d1=d1+29;
			else
				d1=d1+28;
		}	
		else if(m1-1==4||m1-1==6||m1-1==9||m1-1==11)
			d1=d1+30;
		else
			d1=d1+31;
		
		m1=m1-1;
	}
	
	/*check month for borrow*/
	if(m1<dobm)
	{
		m1=m1+12;
		y1=y1-1;
	}
	
	/*subtract date*/
	ry=y1-doby;
	if(ry>=18)
	printf("\nCongrats!!! Mr./Miss , you are eligible to caste vote.");
	else
	printf("\nSorry!!! Mr./Miss, currently you are not eligible to caste vote bcz you are only %d",ry);
	printf("\nThank you\n");
	system("pause");
	return 0;
}