/* WRITE A C PROGRAM THAT WILL ACCEPT ANY INTEGER NUMBER AND FIND HEXA NUMBER
*/

#include<stdio.h>
#include<process.h>
#include<math.h>
int main()
{
    int rem[32],x,n,i,counter;
    char ch;
    printf("Enter any integer number:");
    scanf("%d",&n);
    counter=0;
    x=n;
    while (x!=0)
   {
    rem[counter]=x%16;
    counter+=1;
    x=x/16;
   }
        i=counter-1;
        while(i>=0)
        {ch=55+n;

        printf("%c,%d",n,rem[i--]);
        }//ch=55+n;
        //printf("\n%c",ch);
        printf("\n");
    system("pause");
return 0;
}