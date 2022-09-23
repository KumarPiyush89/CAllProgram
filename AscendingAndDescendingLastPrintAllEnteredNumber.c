/*Write a C program in which accept any 25 numbers from user. print all entered number in ascending order. 
print all number in descending order and at last print all numbers as entered.*/
#include<stdio.h>
#define S 25
int main()
{
    int list[S],distinctList[S],totalDistinct=0,i,j,found,number;
    int temp;
    //accept number from user
    for(i=0;i<S;i++)
    {
        printf("Enter number %d/%d:",i+1;S);
        scanf("%d",&list[i]);
    }
    number=list[0];
    //find all distinct number
}
