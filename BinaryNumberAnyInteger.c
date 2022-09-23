/*WRITE A C PROGRAM THAT WILL ACCEP ANY  INTEGER NUMBER
TO FIND THE BINARY NUMBER*/
/*#include<stdio.h>
#include<process.h>
#include<math.h>
int main()
{
    int rem[32],x,n,i,counter;
    printf("Enter any integer number:");
    scanf("%d",&n);
    counter=0;
    x=n;
    while (x!=0)
   {
    rem[counter++]=x%2;
   // counter+=1;
    x=x/2;
   }
        i=counter-1;
        while(i>=0)
        printf("%d",rem[i--]);
      //  printf("PIYUSH");
        printf("\n");
    system("pause");
return 0;
}*/
/* Write a c program to find the binary of any integer number*/
//if we find octal then only do x%8 then you have octal value
#include<stdio.h>
#include<math.h>
#include<process.h>
int main()
{
	int rem[32],counter,x,n,r,i;
	printf("Enter any integer number:");
	scanf("%d",&n);
	// use the count total number of division
	counter=0;
	x=n;
	while(x!=0)
	{
		//divide x by 2 and find the remainder
		//put the remainder in array at counter element
		rem[counter++]=x%2;
		//increse counter by 1
		//now divide x by 2 find quotent and store in x
		x=x/2;
	}
	//display the all value stored in reverse order
	i=counter-1;
	while(i>=0)
		printf("%d",rem[i--]);
	printf("\n");
	system("pause");
    return 0;
}