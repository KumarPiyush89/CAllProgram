/*write a C program that accept any number and print the table of that number*/
#include <stdio.h>
int main()
{
   int j,n;
   printf("Input the number: ");
   scanf("%d",&n);
   printf("\n");
   for(j=1;j<=10;j++)
   {
     printf("%d X %d = %d \n",n,j,n*j);
   }
} 