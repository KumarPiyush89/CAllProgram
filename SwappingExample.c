/*
Write a C program that accept any two numbers from user in two different variable
print the value of both variable
swap both variable 
again print the value of both variable
*/
#include<stdio.h>
int main()
{
   short int x,y,z;
    printf("Enter value in x:");
    scanf("%hd",&x);
    printf("\nEnter value in y:");
    scanf("%hd",&y);
    printf("\n size of x=%hd and sizeof y=%hd",sizeof(x),sizeof(y));

    printf("\nEntered value x=%d And y=%d\nSwapping....\n",x,y);
 
 
 
 printf("\nPIYUSH");
 
 
 
 
 
    /*swap using third variabl*/
    z=x;
    x=y;
    y=z;
    printf("\nAfter swap x=%d and y=%d\n",x,y);

    /* swapping without third variable*/
    printf("\nSwapping without third variable....");
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAgain after swap (without using third variable) x=%d and y=%d",x,y);
    return 0;
}