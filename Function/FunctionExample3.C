#include<stdio.h>
int rahul(int,int);
int kundan(int,int);
int anshu(int);
int main();

int rahul(int a,int b)
{
    int c;
    printf("\nI am Rahul. I will add two numbers and return the sum");
    c=a+b;
    return c;
}

int kundan(int a,int b)
{
    int c;
    printf("\nI am Kundan. I will subtract second number from first number and return the difference.");
    c=a-b;
    return c;
}

int main()
{
    int r;
    printf("\n I am main");
    r=rahul(12,8);
    printf("\nResult=%d",r);
    r=rahul(10,20);
    printf("\nResult=%d",r);
    r=kundan(20,10);
    printf("\nResut=%d",r);
    r=rahul(-10,10);
    printf("\nResult=%d",r);
    r=kundan(10,40);
    printf("\nResult=%d",r);
    return 0;
}

int anshu(int x)
{
    printf("\n I an anshu. I will return the square of entered number");
    return x*x;
}