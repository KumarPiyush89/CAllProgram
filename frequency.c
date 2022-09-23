/* Write a c program that will accept 20 numbers from user and store in an array.
Again accept another number and find the frequency of another number in array.*/
#include<stdio.h>
#define S 20
int main()
{
    int list[S],i,frequency=0,se;

    //code for accept data from user
    for(i=0;i<S;i++)
    {
        printf("Enter number %d/%d:",i+1,S);
        scanf("%d",&list[i]);
    }
    //accept another number
    printf("Enter the number to find frequency:");
    scanf("%d",&se);

    //find the frequency of se
    frequency=0;
    for(i=0;i<S;i++)
    {
        if(list[i]==se)frequency++;
    }

    //print the frequency
    printf("\n Frequency of %d in list is %d",se,frequency);
   system("pause");
    return 0;

}