#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    switch(n)
    {
        
       
       
        case 1:
        printf("\Sunday");
        
        case 2:
        printf("\nMonday");
       
        case 3:
        printf("\nTuesday");
       
        case 4:
        printf("\nWednesday");
       
        case 5:
        printf("\nThuresday");
       
        case 6:
        printf("\nFriday");
       
        case 7:
        printf("\nSaturday");
        break;
        default:
        printf("\nSorry!");
    }
    printf("\n\nOK");
    return 0;
}