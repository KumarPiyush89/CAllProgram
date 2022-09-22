/* Menu Driven Program*/
/* All Arithmetic Operation*/
#include<stdio.h>
#include<process.h>
#include<math.h>
int main()
{
	
	int a,b,r,c;
	int choice;
	int b1;
	int p1;
	int r1;
	int s,l;
	int sr,sq;
	char s1[50]="kumarpiyush",s2[50];
	printf("welcome:");
	printf("\n");
/*	printf("आपकासवागत");
	printf("\n↖↗↙↘↶");
	printf("\n");*/
	printf("Enter pass key:");
	gets(s2);
	if(strcmp(s1,s2)!=0)
	{
		printf("\nSorry ! You are not authorized to use this application.\nif you are authorized person and fogot password then contact your developer:");
		printf("\n");
		system("pause");
		return 0;
		
	}
	
	while(2>1)
	{
	
		//system("cls");
		printf("\n\t Menu");
		printf("\n====================");
		system("color 2");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Divison");
		printf("\n5. power");
		printf("\n6. accept three number square of smallest and squarerootof largest:");
		printf("\n7. exit");
		printf("\n====================");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{system("color 4");
			// code for addition
			printf("Enter any two number seperated by any symbol:");
			scanf("%d%*c%d",&a,&b);
			r=a+b;
			printf("\n%d+%d=%d",a,b,r);
		}
		else if(choice==2)
		{system("color 5");
				//code for subtraction
					printf("\t\t\tYour choise is subtraction \n");
			
				printf("\t\t\tEnter any two numbers seperated by any symbol:");
				scanf("%d%*c%d",&a,&b);
				r=a-b;
				printf("\n\t\t\t%d-%d=%d",a,b,r);
			}
				else if(choice==3)
				{
					system("color 6");
					//code for multiplication
					printf("\t\t\tYour choise is multiplication \n");
					printf("\t\t\tEnter any two numbers seperated by any symbol:");
					scanf("%d%*c%d",&a,&b);
					r=a*b;
					printf("\n\t\t\t%d*%d=%d",a,b,r);
				}
					else if(choice==4)
					{
						system("color 3");
						//code for Division	
						printf("\t\t\tYour choise is Division \n");
						printf("\t\t\tEnter any two numbers seperated by any symbol:");
						scanf("%d%*c%d",&a,&b);
						if(b==0)
						{
							printf("\nUndefined");
						}
						else
						{
							printf("\n\t\t\t%d/%d=(Quotent=%d & Remainder=%d)",a,b,a/b,a%b);
						}
					
					}
						else if(choice==5)
					{
						system("color 4");
						printf("\t\t\tYour choise is power \n");
						printf("Enter base value:");
						scanf("%d",&b1);
						printf("Enter power value:");
						scanf("%d",&p1);
						r1=pow(b1,p1);
						printf("%d^%d=%d",b1,p1,r1);
					}
					else if(choice==6)
					{
						system("color 9");
						printf("Enter any three number with any seperation:");
						scanf("%d%*c%d%*c%d",&a,&b,&c);
						//FIND THE SMALLET NUMBER
						if(a<b)
						{
							if(a<c)
							s=a;
							else
							s=c;
						}
						else
						{
							if(b<c)
							s=b;
							else 
							s=c;
						}
						//FIND THE LARGEST NUMBER
						if(a>b)
						{
							if(a>c)
							l=a;
							else
							l=c;
						}
						else
						{
							if(b>c)
							l=b;
							else
							l=c;
						}
						//FIND THE SQUAREROOT OF LARGEST NUMBER
						sq=sqrt(l);
						//FIND THE SQUARE OF SMALLEST NUMBER
						sr=s*s;
						//DATA DISPLAY
						printf("you have entered %d,%dand%d.",a,b,c);
						printf("\n");
						printf("The Smallest number is %d and The Largest Number Is %d.",s,l);
						printf("\n");
						printf("Squareroot of %d is %d and Square of %d is %d.",l,sq,s,sr);
						printf("\n");
					}
					else if(choice==7)
						{
							system("color 3");
								
							//exit from infinite loop
							break;
						}
							else
								{
									//display invalid choice
									printf("\nSorry! You have selected invalid option.");
									
								}
								
							printf("\n");
							system("pause");
							fflush(stdin);
	}
		printf("\nThank You");
		return 0;
	
}