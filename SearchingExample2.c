/* c program to demonstrate the search operaton in Array using Linear Search*/
#include<stdio.h>
#include<process.h>
int main()
{
    int rolls[31]={1,4,7,9,18,23,45,67,22,456,18,17,44,92,66,88,37,34,57,77,4,7,1,4,4,4,18,23,4,7,18};
    int found=0,i,roll/*search Element*/;
    printf("Enter roll Number:");
    scanf("%d",&roll);
    //start search
    for(i=0;i<31;i++)
    if(roll==rolls[i])
    {
        found++;
    }


    if(found!=0)
    printf("%d is available in list, %d time(s)",roll,found);
    else
    printf("%d is not available in list",roll);
    printf("\n");
    system("pause");
    return 0;
}
/*
Write a C program in which accept any 20 numbers from user in an array. Again accept another number from user.
And find the frequency of last entered number in list.
*/
