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
        
        case 1:
        printf("\Sunday");
        break;
        case 2:
        printf("\nMonday");
        break;
        case 3:
        printf("\nTuesday");
        break;
        case 4:
        printf("\nWednesday");
        break;
        case 5:
        printf("\nThuresday");
        break;
        case 6:
        printf("\nFriday");
        break;
        case 7:
        printf("\nSutarday");
        break;
    }
    printf("\n\nOK");
    return 0;
}