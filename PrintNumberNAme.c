/*DRAW A FLOW CHART THAT WILL ACCEPT ON DIGIT NUMBER AND PRINT NUMBER NAME*/
#include<stdio.h>
int main()
{
	int N;
	printf("Enter any number(0-ZERO,1-ONE,2-TWO,3-THREE,4-FOUR,5-FIVE,6-SIX,7-SEVEN,8-EIGHT,9-NINE):");
	scanf("%d",&N);
	if(N==0)
	{
		printf("\n ZERO.");
	}
	else if(N==1)
		{
			printf("\n ONE.");
		}
		else if(N==2)
			{
				printf("\n TWO.");
			}
			else if(N==3)
				{
					printf("\n THREE.");
				}
				else if(N==4)
					{
						printf("\n FOUR.");
					}
					else if(N==5)
						{
							printf("\n FIVE.");
						}
						else if(N==6)
							{
								printf("\n SIX.");
							}
							else if(N==7)
								{
									printf("\n SEVEN.");
								}
								else if(N==8)
									{
										printf("\n EIGHT.");
									}
									else if(N==9)
										{
											printf("\n NINE.");
										}
													else
						printf("\nSorry! you have entered invalid number.");
									printf("\n THANK YOU");
												return 0;
											
	
}