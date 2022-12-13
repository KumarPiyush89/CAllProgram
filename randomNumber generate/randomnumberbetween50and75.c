/* Random number between 50 and 75*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int r,i;
    //seed random number generator
    srand(time(NULL));
    
    for(i=0;i<20;i++)
    {
        r=rand()%25+50;
        printf("\n %d",r);
    }
    
    return 0;
}