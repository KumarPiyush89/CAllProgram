/*
Structure member can be of any valid C type.
Structure member can be of another structure type
*/
/* Write a c program that will accept name,dob and doa of 5 students and print all accepted record*/
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[30];
    struct Date dob;
    struct Date doa;
};

int main()
{
    struct Student s[1];
    int i;
    //code for input data
    for(i=0;i<1;i++)
    {
        printf("\nEnter Record of student %d:",i+1);
        printf("\nName:");
        fflush(stdin);
        gets(s[i].name);
        printf("DOB(dd/mm/yyyy):");
        scanf("%2d%*c%2d%*c%4d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("DOA(dd/mm/yyyy):");
        scanf("%2d%*c%2d%*c%4d",&s[i].doa.day,&s[i].doa.month,&s[i].doa.year);
    }

    printf("\n All entered Values are:\n%6s %30s %12s %12s","Sr. No","Name","DOB","DOA");
    for(i=0;i<1;i+=1)
    {
        printf("\n%4d.  %30s  %2d/%2d/%4d   %2d/%2d/%4d ",i+1,s[i].name,s[i].dob.day,s[i].dob.month,s[i].dob.year,s[i].doa.day,s[i].doa.month,s[i].doa.year);
    }
    printf("\n------------X----------");
    return 0;
}
