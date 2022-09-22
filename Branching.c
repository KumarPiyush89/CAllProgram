#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    switch(n)
    {
         default:
        printf("\nSorry!");
        break;
        case 0:
        printf("\nZero");
        break;
        case 1:
        printf("\nOne");
        break;
        case 2:
        printf("\nTwo");
        break;
        case 3:
        printf("\nThree");
        break;
        case 4:
        printf("\nFour");
        break;
        case 5:
        printf("\nFive");
        break;
        case 6:
        printf("\nSix");
        break;
        case 7:
        printf("\nSeven");
        break;
        case 8:
        printf("\nEight");
        break;
        case 9:
        printf("\nNine");
        break;
        
       
    }
    printf("\n\nOK");
    return 0;
}
//Write a C program that will accept week day number and print the name of that day using:
/* 1. If Else
 2. Switch case
 Ex: Enter week day number:4
    Output: Wednesday

 Write a C program that will accept week day number and print the name of all days from given week day number using:
 1.If Else
 2.Switch case 
 Ex: Enter week day number:5
    Output: 
    Thursday
    Friday
    Saturday

    Writea C PRogram that will accept week day number and print name of all days before enterd day number(Including week day number)
    1.If Else
    2.Switch case
    Ex: Enter week ay number:4
        output:Wednesday
        Tuesday
        Monday
        Sunday
*/