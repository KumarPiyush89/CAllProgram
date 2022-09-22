/*DRAW A FLOW CHART THAT WILL ACCEPT WEEK DAY NUMBER AND PRINT THE DAY NAME*/
#include<stdio.h>
int main()
{
	//VARIABLE DECLARATION
	int N;
	printf("Enter any number(1-MONDAY,2-TUESDAY,3-WEDNESDAY,4-THURSDAY,5-FRIDAY,6-SATURDAY,7-SUNDAY):");
	scanf("%d",&N);
	
	//PROCESSING
	if(N==1)
	{
		pintf("\n MONDAY:");
	}	
	else
	
			if(N==2)
		{
			printf("\n TUESDAY:");
		}
		else
			if(N==3)
			{
				printf("\n WEDNASDAY:");
			}
			else
				if(N==4)
				{
					printf("\n THRUSDAY:");
				}
				else
					if(N==5)
					{
						printf("\n FRIDAY:");
					}
					else 
						if(N==6)
						{
							printf("\n SATURDAY:");
						}
						else
							if(N==7)
							{
								printf("\n SUNDAY:");
							}
						else
							printf("\n SORRY! YOU HAVE ENTERED INVALID NUMBER:");
				
							printf("\n THANK YOU:");
	return 0;
}