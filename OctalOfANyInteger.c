/*WRITE A C PROGRAM THAT WILL ACCEPT ANY INTEGER NUMBER AND FIND THE OCTAL NUMBER*/

#include<stdio.h>
#include<process.h>
#include<math.h>
int main()
{
    int rem[32],x,n,r,i,counter;
    printf("Enter any integer number:");
    scanf("%d",&n);
    counter=0;
    x=n;
    while (x!=0)
   {
    
    rem[counter++]=x%8;
    x=x/8;
   }
        i=counter-1;
        while(i>=0)
        printf("%d",rem[i--]);
        printf("\n");
    system("pause");
return 0;
}