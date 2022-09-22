/*
C program to check a student is eligible for admission or not using specific condition*/
#include<stdio.h>
int main()
{
	int gen,age,ccat;
	float marks;
	printf("Enter gender of student(1:Male,2:Female):");
	scanf("%d",&gen);
	printf("Enter age of student:");
	scanf("%d",&age);
	printf("Enter caste category of student(1-General,2-EWS,3-OBC,4-EBC,5-SC,6-ST):");
	scanf("%d",&ccat);
	printf("Enter marks:");
	scanf("%f",&marks);
	
	if(gen==1)
	{
		//student is male
		if(ccat==1)
		{
			//general
			if(age>=18)
			{
				if(age<=28)
				{
					if(marks>=70)
					{
						printf("\nCongrats! Mr., you are eligible for Admission under general category.");
					}
					else
					{
						//less than min marks range
						printf("\nSorry! Mr., your total marks is less than minimum cutoff for general.");
					}
				}
				else
				{
					//above max age range
					printf("\nSorry! Mr., you have crossed the maximum age limit for general category");
				}
			}
			else
			{
				//below minimum age requirement
				printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
			}
		}
		else
		{
			if(ccat==2)
			{
				//ews
				if(age>=18)
				{
					if(age<=29)
					{
						if(marks>=66)
						{
							printf("Congrats! Mr., you are eligible for admission under general EWS category.");
						}
						else
						{
							//less than min marks range
							printf("Sorry! Mr., your marks is less than for EWS category");
						}
					}
					else
					{
						//above max age range
						printf("\nSorry! Mr., you have cross your maximum age limit under EWS category.");
					}
				}
				else
				{
					//below minimum age requirement
					printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
				}
			}
			else
			{
				if(ccat==3)
				{
					//obc
					if(age>=18)
					{
						if(age<=30)
						{
							if(marks>=68)
							{
								printf("\nCongrats! Mr., you are eligible for admission under OBC category");
							}
							else
							{
								//less than min marks range
								printf("\nSorry! Mr., your marks is less than for OBC category");
							}
						}
						else
						{
							//above max age range
							printf("\nSorry! Mr., your have crossd your maximum age limit under OBC category. ");
						}
					}
					else
					{
						//below minimum age requirement
						printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
					}
				}
				else
				{
					if(ccat==4)
					{
						//ebc
						if(age>=18)
						{
							if(age<=32)
							{
								if(marks>=62)
								{
									printf("Congrats! Mr., you are eligible for admission under EBC category");
								}
								else
								{
									//less than min marks range
									printf("Sorry! Mr. your marks is less than for EBC category.");
								}
							}
							else
							{
								//above max age range
								printf("\nSorry! Mr., you have crossed your maximum age limit for EBC category");
							}
						}
						else
						{
							//below minimum age requirement
							printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
						}
					}
					else
					{
						if(ccat==5)
						{
							//sc
							if(age>=18)
							{
								if(age<=35)
								{
									if(marks>=50)
									{
										printf("\nCongrats!Mr., you are eligibe for admission under SC category");
									}
									else
									{
										//less than min marks range
										printf("\nSorry!Mr., your marks is less than for SC category.");
									}
								}
								else
								{
									//above max age range
									printf("\nSorry! Mr., you have crossed your maximum age limit for SC category");
								}
							}
							else
							{
								//below minimum age requirement
								printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
							}
						}
						else
						{
							//st
							if(age>=18)
							{
								if(age<=35)
								{
									if(marks>=50)
									{
										printf("\nCongrats! Mr., you are eleigible for admission under ST category.");
									}
									else
									{
										//less than min marks range
										printf("\nSorry!Mr., you marks is less than for ST category.");
									}
								}
								else
								{
									//above max age range
									printf("\nSorry! Mr., you have crossed your maximum age limit for ST category");
								}
							}
							else
							{
								//below minimum age requirement
								printf("\nSorry! Mr, you age is less for taking admission in this college, Plese try after your 18th birth day.");
							}
						}
					}
				}
			}
		}
	}
	else
	{
		//student is female
		if(ccat==1)
		{
			//general
			if(age>=18)
			{
				if(age<=30)
				{
					if(marks>=60)
					{
						printf("\nCongrats! Miss , you are eligible for Admission under general category.");
					}
					else
					{
						//less than min marks range
						printf("\nSorry! Miss , your total marks is less than minimum cutoff for general.");
					}
				}
				else
				{
					//above max age range
					printf("\nSorry! Miss , you have crossed the maximum age limit for general category");
				}
			}
			else
			{
				//below minimum age requirement
				printf("\nSorry! Miss, you age is less for taking admission in this college, Plese try after your 18th birth day.");
			}
		}
		else
		{
			if(ccat==2)
			{
				//ews
				if(age>=18)
				{
					if(age<=29)
					{
						if(marks>=65)
						{
							printf("Congrats! Miss , you are eligible for admission under general EWS category.");
						}
						else
						{
							//less than min marks range
							printf("Sorry! Miss , your marks is less than for EWS category");
						}
					}
					else
					{
						//above max age range
						printf("\nSorry! Miss , you have cross your maximum age limit under EWS category.");
					}
				}
				else
				{
					//below minimum age requirement
					printf("\nSorry! Miss, you age is less for taking admission in this college, Plese try after your 18th birth day.");
				}
			}
			else
			{
				if(ccat==3)
				{
					//obc
					if(age>=18)
					{
						if(age<=32)
						{
							if(marks>=65)
							{
								printf("\nCongrats! Miss , you are eligible for admission under OBC category");
							}
							else
							{
								//less than min marks range
								printf("\nSorry! Miss , your marks is less than for OBC category");
							}
						}
						else
						{
							//above max age range
							printf("\nSorry! Miss , your have crossd your maximum age limit under OBC category. ");
						}
					}
					else
					{
						//below minimum age requirement
						printf("\nSorry! Miss, you age is less for taking admission in this college, Plese try after your 18th birth day.");
					}
				}
				else
				{
					if(ccat==4)
					{
						//ebc
						if(age>=18)
						{
							if(age<=35)
							{
								if(marks>=45)
								{
									printf("Congrats! Miss , you are eligible for admission under EBC category");
								}
								else
								{
									//less than min marks range
									printf("Sorry! Miss  your marks is less than for EBC category.");
								}
							}
							else
							{
								//above max age range
								printf("\nSorry! Miss , you have crossed your maximum age limit for EBC category");
							}
						}
						else
						{
							//below minimum age requirement
							printf("\nSorry! Miss, you age is less for taking admission in this college, Plese try after your 18th birth day.");
						}
					}
					else
					{
						if(ccat==5)
						{
							//sc
							if(age>=18)
							{
								if(age<=37)
								{
									if(marks>=33)
									{
										printf("\nCongrats!Miss , you are eligibe for admission under SC category");
									}
									else
									{
										//less than min marks range
										printf("\nSorry!Miss , your marks is less than for SC category.");
									}
								}
								else
								{
									//above max age range
									printf("\nSorry! Miss , you have crossed your maximum age limit for SC category");
								}
							}
							else
							{
								//below minimum age requirement
								printf("\nSorry! Miss, you age is less for taking admission in this college, Plese try after your 18th birth day.");
							}
						}
						else
						{
							//st
							if(age>=18)
							{
								if(age<=37)
								{
									if(marks>=33)
									{
										printf("\nCongrats! Miss , you are eleigible for admission under ST category.");
									}
									else
									{
										//less than min marks range
										printf("\nSorry!Miss , you marks is less than for ST category.");
									}
								}
								else
								{
									//above max age range
									printf("\nSorry! Miss , you have crossed your maximum age limit for ST category");
								}
							}
							else
							{
								//below minimum age requirement
								printf("\nSorry! Miss , you age is less for taking admission in this college, Plese try after your 18th birth day.");
							}
						}
					}
				}
			}
		}
	}
		printf("\nThank you");
		return 0;
}
