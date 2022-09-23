/*
C program to accept 10 numbers from user and print the smallest and largest number
*/
#include<stdio.h>
#include<process.h>
int main()
{
    int numbers[10],i;
	int largestNumber,smallestNumber;
	char s1[50]="kumarpiyush",s2[50];
	printf("WELCOME:");
	printf("\n");
	printf("Enter Pass Key:");
	gets(s2);
	if(strcmp(s1,s2)!=0)
	{
		printf("\nSorry ! You are not authorized to use this application.\nif you are authorized person and fogot password then contact your developer:");
		printf("\n");
		system("pause");
		return 0;
	}
	
		

		{ system("cls");
		printf("WELCOME:");
		printf("\n");
		  system("color 3");
		    //accept 10 numbers from user
		    for(i=0;i<10;i+=1)
		    
			
		    {
		        printf("Enter number %d/10:",i+1);
		        scanf("%d",&numbers[i]);
		    }
		
		    //find largest number in list
		    //let the first number of list is largest number
		    largestNumber=0;
		    //now traverse the list from 1 to end and compare largestNumber element from each element
		    for(i=1;i<10;i++)
		    {
		        if(numbers[i]>numbers[largestNumber])
		        {
		            //make  i largest
		            largestNumber=i;
		        }
		    }
		
			//find the smallest number
			//let the first number is smallest
			smallestNumber=0;
			//now traverse the list from 1 to end and compare smallestNumber from each element of list
			for(i=1;i<10;i++)
			{
			    if(numbers[i]<numbers[smallestNumber])
			    {
			        smallestNumber=i;
			    }
			}
			
			
			//print all eneterd data
			printf("\nAll Entered numbers are:");
			for(i=0;i<10;i++)
			printf("%d, ",numbers[i]);
			printf("\n");
			for(i=1;i<=80;i++)
			printf("%c",205);
			printf("\nThe smallest number is %d at index %d",numbers[smallestNumber],smallestNumber);
			printf("\n");
			printf("\nThe largest number is %d at index %d",numbers[largestNumber],largestNumber);
			printf("\n");
			system("pause");
		}
	
    return 0;
}