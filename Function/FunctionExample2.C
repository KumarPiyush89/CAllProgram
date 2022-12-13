#include<stdio.h>

//function declaration
int main();
unsigned long factorial(int);

//function defination
int main()
{
    int a,b,c,d;
    unsigned long fa,fb,fc,fd;
    
    //Input for numbers from keyboard
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("Enter 3rd number:");
    scanf("%d", &c);
    printf("Enter 4th number:");
    scanf("%d", &d);

    //find factorial of all numbers
    fa=factorial(a);
    fb=factorial(b);
    fc=factorial(c);
    fd=factorial(d);

    //Display all results

    printf("\nNumber\tFactorial\n%d\t%lu\n%d\t%lu\n%d\t%lu\n%d\t%lu\n",a,fa,b,fb,c,fc,d,fd);
    return 0;

}

unsigned long factorial(int n)
{
    int i;
    unsigned long f=1;
    for(i=1;i<=n;i+=1)
    f*=i;
    return f;
}