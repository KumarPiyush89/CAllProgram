/* Write a c program in which accept 3 numbers 4 times and print the smallest and largest number in all time enterd values*/
#include<stdio.h>
int largestOfThree(int,int,int);
int smallestOfthree(int,int,int);
int main();

int main()
{
int a,b,c,l,s;
printf("enter any three number seperated by any symbol:");
scanf("%d%*c%d%*c%d",&a,&b,&c);
l=largestOfThree(a,b,c);
s=smallestOfthree(a,b,c);
printf("\nYou have entered %d, %d and %d. The largest number is %d and smallest number is %d",a,b,c,l,s);

printf("\nenter any three number seperated by any symbol:");
scanf("%d%*c%d%*c%d",&a,&b,&c);
l=largestOfThree(a,b,c);
s=smallestOfthree(a,b,c);
printf("\nYou have entered %d, %d and %d. The largest number is %d and smallest number is %d",a,b,c,l,s);
printf("enter any three number seperated by any symbol:");
scanf("%d%*c%d%*c%d",&a,&b,&c);
l=largestOfThree(a,b,c);
s=smallestOfthree(a,b,c);
printf("\nYou have entered %d, %d and %d. The largest number is %d and smallest number is %d",a,b,c,l,s);

printf("enter any three number seperated by any symbol:");
scanf("%d%*c%d%*c%d",&a,&b,&c);
l=largestOfThree(a,b,c);
s=smallestOfthree(a,b,c);
printf("\nYou have entered %d, %d and %d. The largest number is %d and smallest number is %d",a,b,c,l,s);
return 0;

}

int smallestOfthree(int a,int b,int c)
{
    int s;
    if(a<b&&a<c)
    s=a;
    else if(b<c)
    s=b;
    else
    s=c;

    return s;
}

int largestOfThree(int a,int b,int c)
{
    int l;
    if(a>b&&a>c)
    l=a;
    else if(b>c)
    l=b;
    else
    l=c;

    return l;
}