//Write a C program that will accept any alphabet in any case and print it in reverse case.
#include<stdio.h>
int main()
{
    char alphabet;
    
    printf("Enter any alphabet:");
    scanf("%c",&alphabet);
    
    if(alphabet>='A'&& alphabet<='Z')
    {
       printf("Lower case of '%c' = '%c'",alphabet,alphabet+32);
    }
    else if(alphabet>='a'&& alphabet<='z')
    {
       printf("Upper case of '%c' = '%c'",alphabet,alphabet-32);
    }
    else
    {
        printf("Sorry !! you have Not Entered any alphabet");
    }
    return 0;
}