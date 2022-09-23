/*
Write a C program in which accept any 20 numbers from user in an array. Again accept another number from user.
And find the frequency of last entered number in list.*/
#include<stdio.h>
#include<process.h>
#define SIZE 12
int main()
{
	int arr[SIZE],found=0,i,number;
    for(i=0;i<SIZE;i++)
	{
      printf("Enter array element %d/%d:",i+1,SIZE);
      scanf("%d",&arr[i]);
    }
    // LAST INDEX ELEMENT
    //number=arr[SIZE-1];
    // CENTER INDEX ELEMENT
    //number=arr[SIZE/2];
    // FIRST INDEX ELEMENT
      number=arr[0];
    //start search
    for(i=0;i<SIZE;i++)
    if(number==arr[i])
    {
        found++;
    }
    if(found!=0)
    printf("%d is available in list, %d time(s)",number,found);
    else
    printf("%d is not available in list",number);
    printf("\n");
    system("pause");
    return 0;
}
