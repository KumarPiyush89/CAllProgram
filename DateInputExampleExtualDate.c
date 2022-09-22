/*Write a C program that accepts a date and print the entered date is valid or not*/
#include<stdio.h>
int main()
{
	int d,m,y;
	/* Accept a date from user*/
	printf("Enter a date(dd/mm/yy):");
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	
	if(d>0)
	{
		if(d<32)
		{
			if(m>0)
			{
				if(m<13)
				{
					if(y>0)
					{
						if(m==2)
						{
						  if(y%4==0)
						  printf("date is valid");
						  else
						  printf("date is invalid");
						}
						else
						{
							if(m==4||m==6||m==9||m==11)
							{
								if(d<=30)
								printf("date is valid");
								else
								printf("date is invalid");
							
							}
							else
							{
								if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
								{
									if(d<=31)
									printf("date is valid");
									else
									printf("date is invalid");
								}
							
							}
						}
					}
					else
					printf("date is invalid");
				}
				else
				printf("date is invalid");
			}
			else
			printf("date is invalid");
		}
		else
		printf("date is invalid");
	}
	else
	printf("date is invalid");
	
	return 0;
}