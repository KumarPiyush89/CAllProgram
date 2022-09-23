/* write a c program in which accept a string from user and pr string in reverse order*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("ente any string:");
    gets(s);
    //reverse the string
    strrev(s);
    printf("\nYou have entered %s",s);
    return 0;
}