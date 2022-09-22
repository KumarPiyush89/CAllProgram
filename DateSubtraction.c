/*C program to subtract two date*/
/*
1.Accept 1st date
2. check 1st date is valid or not, if not then close the program
3. Accept 2nd date
4. Check 2nd date is valid or not, if not the close the program
5. subtract date
6. display result
*/
#include<stdio.h>
#include<process.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,rd,rm,ry,valid,nw,nd;
	
	/*1. accept 1st date*/
	printf("Enter 1st Date(dd/mm/yyyy):");
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
	
	/* Accept 2nd date*/
	printf("Enter 2nd Date(dd/mm/yyyy):");
	scanf("%d%*c%d%*c%d",&d2,&m2,&y2);
	/*check date is valid or not*/
	if(d2>0&&d2<=31&&m2>0&&m2<=12&&y2>0)
	{
		if(m2==2)
		{
			if(y2%4==0&&y2%100!=0||y2%400==0)
			{
				if(d2<=29)
				valid=1;
				else
				valid=0;
			}
			else
			{
				if(d2<=28)
				valid=1;
				else
				valid=0;
			}
		}
		else if(m2==4||m2==6||m2==9||m2==11)
		{
			if(d2<=30)
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
	
	/*Code for date subtraction*/
	/*check for day borrow*/
	if(d1<d2)
	{
		/*Take Borroe from month*/
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
		//decrease m1 by 1
		m1=m1-1;
	}
	
	/*check for month borrow*/
	if(m1<m2)
	{
		/*take borrow from year*/
		m1=m1+12;
		y1=y1-1;
	}
	
	/*subtract d2 from d1*/
	rd=d1-d2;
	rm=m1-m2;
	ry=y1-y2;
	
	nw=rd/7;
	nd=rd%7;
	/*Display result on screen*/
	printf("\n%d year(s), %d month(s), %d week(s) and %d day(s)",ry,rm,nw,nd);
	printf("\n");
	system("pause");
	return 0;
	
}