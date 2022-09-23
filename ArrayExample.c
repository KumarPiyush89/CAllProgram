/*
C program to accept 10 numbers from user and print the smallest and largest number
*/
#include<stdio.h>
#include<process.h>
int main()
{
    int numbers[10],i,largestNumber,smallestNumber;
    printf("Wel Come");
    //accept 10 numbers from user
    for(i=0;i<10;i++)
    {
        printf("Enter number %d/10:",i+1);
        scanf("%d",&numbers[i]);
    }

    //find largest number in list
    //let the first number of list is largest number
    largestNumber=numbers[0];
    //now traverse the list from 1 to end and compare largestNumber from each element
    for(i=1;i<10;i++)
    {
        if(numbers[i]>largestNumber)
        {
            //make  numbers[i] largest
            largestNumber=numbers[i];
        }
    }

//find the smallest number
//let the first number is smallest
smallestNumber=numbers[0];
//now traverse the list from 1 to end and compare smallestNumber from each element of list
for(i=1;i<10;i++)
{
    if(numbers[i]<smallestNumber)
    {
        smallestNumber=numbers[i];
    }
}


//print all eneterd data
printf("\nAll Entered numbers are:");
for(i=0;i<10;i++)
printf("%d, ",numbers[i]);

printf("\nThe smallest number is %d and largest number is %d",smallestNumber,largestNumber);
printf("\n");
system("pause");
    return 0;
}