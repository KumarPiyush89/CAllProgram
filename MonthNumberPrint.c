/* WRITE A C PROGRAM THAT WILL ACCEPT MONTH  NUMBER AND PRINT THE MONTH NAME*/
#include<stdio.h>
int main()
{
	int N;
	printf("Enter any number(1-JANUARY,2-FEBRUARY,3-MARCH,4-APRIL,5-MAY,6-JUNE,7-JULY,8-AUGUST,9-SEPTEMBER,10-OCTOBER,11-NOVEMBER,12-DECEMBER):");
	scanf("%d",&N);
	if(N==1)
	{
		printf("\n JANUARY:");
	}
	else
		if(N==2)
		{
			printf("\n FEBRUARY:");
		}
		else
			if(N==3)
			{
				printf("\n MARCH:");
			}
			else
				if(N==4)
				{
					printf("\n APRIL:");
				}
				else
					if(N==5)
					{
						printf("\n MAY:");
					}
					else 
						if(N==6)
						{
							printf("\n JUNE:");
						}
						else
							if(N==7)
							{
								printf("\n JULY:");
							}
							else
								if(N==8)
								{
									printf("\n AUGUST:");
								}
								else
									if(N==9)
									{
										printf("\n SEPTEMBER:");
									}
									else
										if(N==10)
										{
											printf("\n OCTOBER:");
										}
										else
											if(N==11)
											{
												printf("\n NOVEMBER:");
											}
											else
												if(N==12)
												{
													printf("\n DECEMBER:");
												}
													else
	    				printf("\n SORRY! YOU HAVE ENTERED INVALID NUMBER:");
	    							printf("\n THANK YOU:");
	    									return 0;
}
