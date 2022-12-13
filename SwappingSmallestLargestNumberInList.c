/*
C program to swap smallest and largest number in a list*/
#include<stdio.h>
#define SZ 10
int main()
{
    int arr[SZ]={0};
    int i,largestNumberPosition,smallestNumberPosition;
    //accept numbers from user in list
    for(i=0;i<SZ;i+=1)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&arr[i]);
    }
    //find the position of smallest and largest number
    //let value at index 0 (first number) is the largest and smallest number
    smallestNumberPosition=0;
    largestNumberPosition=0;
    for(i=1;i<SZ;i+=1)
    {
        if(arr[i]>arr[largestNumberPosition])
        largestNumberPosition=i;
        else if(arr[i]<arr[smallestNumberPosition])
        smallestNumberPosition=i;
    }

    printf("\nContents array befor swap:");
    for(i=0;i<SZ;i+=1)
    printf("%d, ",arr[i]);

    printf("\n In List the largest number is %d at index %d and the smallest number is %d at index %d",arr[largestNumberPosition],largestNumberPosition,arr[smallestNumberPosition],smallestNumberPosition);

    //swap samllest and largest value
    i=arr[smallestNumberPosition];
    arr[smallestNumberPosition]=arr[largestNumberPosition];
    arr[largestNumberPosition]=i;


    printf("\nContents array after swap:");
    for(i=0;i<SZ;i+=1)
    printf("%d, ",arr[i]);

    return 0;
}