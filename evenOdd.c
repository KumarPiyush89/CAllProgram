 /* C program to check a number is even or odd without using division operation
 using bitwise and operator
 */
#include<stdio.h>
int main()
{
    int i;
    printf("Enter any integer number:");
    scanf("%d",&i);
    if(i&1==0)
    printf("%d is even number.",i);
    else
    printf("%d is odd number",i);
    return 0;

}