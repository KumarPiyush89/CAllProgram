/* Write  a c program that will read a number from user and print the tanle of that number*/
#include<stdio.h>
#include<unistd.h>
int main()
{
	int n,i;
	char s1[50]="PiyushJi",s2[50];
	
	printf("\nWelcome:)");
	printf("\nEnter pass key:");
	gets(s2);
	if(strcmp(s1,s2)!=0)
	{
		system("color 4");
		printf("\nSorry! you are not authorized to use this application.\n If you are authorized person and forgot password then contact your developer.");
		printf("\n");
		system("pause");
		return 0;
	}
	
	system("cls");
	printf("Please enter any number:");
	scanf("%d",&n);
	system("cls");
	printf("Table of %4d:",n);
	printf("\n==============");
	i=1;
	while(i<=10)
	{
	
		
		printf("\n%4d * %2d = %5d",n,i,n*i);
	
		system("color 03");
		sleep(1);
		i=i+1;
	//	system("colour 03");
	}
	
system("color 06");

	printf("\n==============");
	printf("\nThank you :)");
	printf("\nDesigned and developed by KUMAR PIYUSH");
	printf("\nFor any development releted query call on: 09852016445");
	printf("\n");
	system("pause");
	return 0;

}
