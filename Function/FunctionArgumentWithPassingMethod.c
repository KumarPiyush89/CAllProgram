/*
 Function argument passing method
------------------------------------------------------
In C in function calling arguments are passed is two ways:
1. By Value
2. By Address

1.  In Passing argument by value, the value of actual argument is copied to formal argument.
in this case actual argument and formal argument are different variables. If calling function make changes in 
formal argument then there is no effect on actual argument.

2. In paassing argument by address, the calling  function sends its variable's address to called dunction as argument.
So, the formal argument will be pointer that will stores the address. And by using that address  called function can make changes in calling function variable.

*/

#include<stdio.h>
void swapByNeha(int a,int b)
{
    int z;
    printf("\nNeha: You have called me for swapping the value of two variables. Before swap your first variable value is %d and second variable value is %d",a,b);

    z=a;
    a=b;
    b=z;

    printf("\nNeha:I have swapped the value. Now value in 1st variable =%d and second variable=%d",a,b);
    return;
}

void swapByKundan(int *a,int *b)
{
    int z;
    printf("\nKundan:You have called me for swapping the value of two variable. Before swap value of 1st variable is %d and seconf variable is %d",*a,*b);
    z=*a;
    *a=*b;
    *b=z;
    printf("\nKundan:After swap value in 1st variable=%d and second variable=%d",*a,*b);
    return;
}
int main()
{
    int x=20,y=40;
    printf("\nmain: My x=%d and y=%d",x,y);
    printf("\nmain:I want to swap the value of x and y so, i am calling the swapByNeaha");
    swapByNeha(x,y);//passing argument by value
    printf("\nmain: Now my x=%d and y=%d",x,y);

    printf("\n\nmain:now I am calling swapByKundan");
    swapByKundan(&x,&y);
    printf("\nmain:Now x=%d,y=%d",x,y);
    
    return 0;
}