/*
Write a C program that will accept caste category and print entered caste category on screen*/
#include<stdio.h>
int main()
{
	int cat;
	printf("Enter caste category(1-General,2-EWS,3-OBC,4-EBC,5-SC,6-ST):");
	scanf("%d",&cat);
	if(cat==1)
	{
		printf("\n You have selected general.");
	}
	else
	{
		if(cat==2)
		{
			printf("\nYou have selected EWS.");
		}
		else
		{
			if(cat==3)
			{
				printf("\nYou have selected OBC.");
			}
			else
			{
				if(cat==4)
				{
					printf("\nYou have selected EBC.");
					
				}
				else
				{
					if(cat==5)
					{
						printf("\nYou have selected SC.");
					}
					else
					{
						if(cat==6)
						{
							printf("\nYou have selected ST.");
						}
						else
						{
							printf("\nYou have entered Invalid Number.");
						}
					}
				}
			}
		}
	}
	printf("\nThank you");
	return 0;
}