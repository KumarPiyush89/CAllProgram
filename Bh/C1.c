#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)  
    {
        if(i%3==0)
        break;
        printf("%d ", i);
    }
    printf("\n Hello world!\n");
}