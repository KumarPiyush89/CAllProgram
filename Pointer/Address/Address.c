/*C program to print the address of variable*/
#include<stdio.h>
struct Person
{
    char name[30];
    char gender;
};
int main()
{
    int a;
    float b;
    char c;
    double d;
    struct Person p;

    printf("\nAddress of a is:%p",&a);
    printf("\nAddress of b=%u",&b);
    printf("\nAddress of c=%u",&c);
    printf("\nAddress of d=%u",&d);
    printf("\nAddress of p=%u",&p);
    return 0;
}