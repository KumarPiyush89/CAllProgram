/*WRITE A C PROGRAM THAT WILL ACCEPT ANY 10 INTEGER NUMBERS FROM USER AND PRINT THE ALL ENTERED NUMBER WITH ITS 
SQUARE, SQUAREROOT, CUBEROOT
*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int numbers[10],i,sr,cr,squrt;
    for(i=0;i<10;i++)
    {
    printf("Enter number%d/10:",i+1);
    scanf("%d",&numbers[i]);
    }
    // FIND SQUARE
    printf("Square of numbers is as:");
    for(i=0;i<10;i++)
    printf("%d, ",numbers[i]*numbers[i]);    
    // find cube
    printf("\nCube of numbers is as:");
    for(i=0;i<10;i++)
    printf("%d, ",numbers[i]*numbers[i]*numbers[i]);
    // FIND SQUAREROOT
    printf("\nSquareroot of numers is as:");
    for(i=0;i<10;i++)
    sr=sqrt(numbers[i]);
    printf("%d, ",sqrt(numbers[i])); 
    printf("\n");
   // system("pause");
    return 0;
    
}

*/


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
    r=x%2;
    rem[counter]=r;
    counter+=1;
    x=x/2;
   }
        i=counter-1;
        while(i>=0)
        {
        printf("%d",rem[i]);
        i-=1;
        }
        printf("\n");
    system("pause");
return 0;
}