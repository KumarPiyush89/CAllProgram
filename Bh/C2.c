#include<stdio.h>
int main()
{
    int I=5,j;
    printf("%d\n",++I);
    printf("%d\n",++I);
    printf("%d\n",I++);
    j=I++- --I + I++;
    printf("%d",j);
}