/* Random number between 1 and 6*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int r;
    //seed random number generator
    srand(time(NULL));
    r=rand()%6+1;
    printf("\n %d",r);
    return 0;
}