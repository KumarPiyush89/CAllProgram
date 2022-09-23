/*
write a c program that will accept ny 10 integer numbers in an array.
print the content of array. Swap the smallest and largest number in array and again print the content of array
*/
#include<stdio.h>
int main()
{
    int numbers[10],i,smallestNumberPosition,largestNumberPosition,x;
    //CODE FOR INPUT DATA
    for(i=0;i<10;i++)
    {
       printf("Enter Number %d/10:",i+1);
       scanf("%d",&numbers[i]);
    }
    //FIND THE POSITION OF SMALLEST AND LARGEST NUMBER
    smallestNumberPosition=0;
    largestNumberPosition=0;
    for(i=1;i<10;i++)
    {
        if (numbers[i]<numbers[smallestNumberPosition])
        smallestNumberPosition=i;
        else if(numbers[i]>numbers[largestNumberPosition])
        largestNumberPosition=i;
    }
    //PRINT THE CONTENT OF ARRAY
    printf("contents of array is as(before swap):");
    for(i=0;i<10;i++)
    printf("%d, ", numbers[i]);
    // SWAP THE SMALLEST AND LARGEST NUMBER
    x=numbers[smallestNumberPosition];
    numbers[smallestNumberPosition]=numbers[largestNumberPosition];
    numbers[largestNumberPosition]=x;
    //PRINT THE SWAPED ARRAY
     printf("\ncontents of array is as(after swap):");
    for(i=0;i<10;i++)
    printf("%d, ", numbers[i]);
    system("pause");
    return 0;
}