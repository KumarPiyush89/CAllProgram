/* WRITE A C PROGRAM THAT WILL ACCEPT ANY CHARECTER AND 
PRINT THE FOLLOWING PATTERN IF ENTERED CHARECTER IS
A	Z
B	Y
C	X
D	W
*/
/*
#include<stdio.h>
int main()
{
   char i,j,n;
   printf("Enter any charecter:");
   scanf("%c",&n);
   //if(i>=65&&i<=90||i>=97&&i<=122)
   //{
   for(i=1,j=n;i<n;i++,j--)
   printf("\n%c\t%c",i,j);
   //}
   //else
   //printf("Sorry! you haven't entered charecter");
   return 0;	
} 
*/

/*
#include<stdio.h>
int main()
{
   char i,j;
   printf("Enter any charecter:");
   scanf("%c",&i);
  // j=122;
   if(i>=65&&i<=91||i>=97&&i<=122)
   {
   for(i=65;i<91;i++,j--)
   printf("\n%c\t%c",i,j);
   }
   else
   printf("Sorry! you haven't entered charecter");
   return 0;	
} 
*/







#include<stdio.h>
int main()
{
   char i,j;
  // printf("Enter any charecter:");
   //scanf("%c",&i);
   j=122;
  // if(i>=65&&i<=91||i>=97&&i<=122)
   //{
   
   for(i=65;i<90;i++,j--)
   printf("\n%c\t%c",i,j);
   //}
   //else
   //printf("Sorry! you haven't entered charecter");
   return 0;	
} 




