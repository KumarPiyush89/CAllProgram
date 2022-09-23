/* c program to demonstrate the search operaton in Array using Linear Search*/
#include<stdio.h>
#include<process.h>
int main()
{
    int rolls[20]={1,4,7,9,18,23,45,67,22,456,18,17,44,92,66,88,37,34,57,77};
    int found=0,i,roll/*search Element*/;
    printf("Enter roll Number:");
    scanf("%d",&roll);
    //start search
    for(i=0;i<20;i++)
    if(roll==rolls[i])
    {
        found=1;
        break;
    }


    if(found==1)
    printf("Congrats! Roll %d, You are Pass",roll);
    else
    printf("Sorry! roll %d, You are not pass. Please try again.");
    printf("\n");
    system("pause");
    return 0;
}