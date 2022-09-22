/* WRITE A C PROGRAM THAT WILL ACCEPT DOB AND GENDER OF A PERSON AND PRINT THE PERSON IS ELIGIBLE TO MARREGE OR NOT
ON 01/03/2022
1. Accept gender
2.accept DOB
3.check DOB is valid or not
4.Initialize 2nd Date
5.Subtract DOB from 2nd date
6.CHeack according to year
*/


#include<stdio.h>
#include<process.h>
int main()
{
	int d1,m1,y1,dobd,dobm,doby,rd,rm,ry,valid,gender;
	//accept gender from user
	printf("Enter gender of a person(1-male,2-female):");
	scanf("%d",&gender);
	
	if(gender<1||gender>2)
	{
		printf("\nOOPs! you have entered invalid gender value");
		system("pause");
		return 0;
	}
	
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
		//Set 2nd date
		d1=1;
		m1=3;
		y1=2022;
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
		//subtract date
		ry=y1-doby;
		
		
	if(gender==1)
	{
		if(ry>=21)
		printf("\n congrats!!!! mr.,You are eligible to marriage.");
		else
		printf("\n SOrry!!! mr.,You are not eligible to marriage bcz you are only %d",ry);
		
	}
	else 
	{
	
		if(ry>=18)
		printf("\n congrats!!!! miss.,You are eligible to marriage.");
		else
		printf("\n SOrry!!! miss.,You are not eligible to marriage bcz you are only %d",ry);
		
    }
    
	printf("\n THANK YOU.");
	return 0;
}