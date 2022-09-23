/* Write a C program that will accept any 10 numbers from user in an array and print all entered number in ascending order*/
#include<stdio.h>
#include<process.h>
#define S 20
int main()
{
int data[S],i,j,temp;
for(i=0;i<S;i++)
{
    printf("enter number %d/%d:",i+1,S);
    scanf("%d",&data[i]);
}
/* code for sort(Linear Sort)*/
for(i=0;i<S-1;i++)
{
    for(j=i+1;j<S;j++)
    {
        if(data[i]>data[j])
        {
            //swap data[i] with data[j]
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
}

printf("\nData entered by you are:");
for(i=0;i<S;i++)
{
    printf("%d",data[i]);
    if(i<S-2)
    printf(", ");
    else if(i==S-2)
    printf(" and ");
    else
    printf(" |");
    
}
printf("\nThe smallest Number is %d and The largest Number is %d",data[0],data[S-1]);
printf("\nThank you\n");
system("pause");
return 0;
}