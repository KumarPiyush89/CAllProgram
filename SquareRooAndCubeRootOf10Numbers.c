/*C program that will accept 10 integer numbers from user and print all numbers with 
its square ,square root,cube and cube root*/
#include<stdio.h>
#include<math.h>
#include<process.h>
#include<conio.h>
int main()
{ 
    double numbers[10],s,sq,c,cr;
    int i,j;
    //accept 10 numbers from user
    for(i=0;i<10;i++)
    {
        printf("Enter number %d/10:",i+1);
        scanf("%lf",&numbers[i]);
    }
    system("cls");

    //print all number
    printf("\n\tNumber\t\tSquare\t\tS.Root\t\tCube\t\tC.Root\n");
    for(i=1;i<=80;i++)
    printf("%c",205);
    for(i=0;i<10;i++)
    {
        s=pow(numbers[i],2);
        sq=pow(numbers[i],0.5);
        c=pow(numbers[i],3);
        cr=pow(numbers[i],1.0/3);
        printf("\n%15.5lf %15.5lf %15.5lf %15.5lf %15.5lf\n",numbers[i],s,sq,c,cr);
        for(j=1;j<=80;j++)
        printf("%c",205);
    }
    printf("\nThank You\n");
    system("pause");
    return 0;
}