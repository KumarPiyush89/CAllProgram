/*Random number generation*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int rn,i;
    //seed random number generator
    srand(time(NULL));
    rn=rand();
    printf("\n rand() gives random number between 0 and %d",RAND_MAX);
    printf("rn=%d",rn);
    printf("\n 10 random numbers:");
    for(i=0;i<10;i++)
    {
        printf("\n%d",rand());

    }
    return 0;
}