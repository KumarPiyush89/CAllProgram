/*Write a C program in which accept name,class and roll of 10 students and print all accepted data on screen*/
#include<stdio.h>
//create data type for student
struct Student
{
    char name[30];
    int class;
    int roll;
};
int main()
{
    //create variable to store 10 student records
    struct Student s[10];
    int i;

    //code for input 
    for(i=0;i<10;i+=1)
    {
        printf("Enter record of student %d:",i+1);
        fflush(stdin);
        printf("Name:");
        gets(s[i].name);
        printf("Class:");
        scanf("%d",&s[i].class);
        printf("Roll:");
         scanf("%d",&s[i].roll);
    }
    printf("\n all entered data are:\n%6s %30s %6s %6s","Sr.No.","Name","Class","Roll");
    for(i=0;i<10;i++)
    {
        printf("\n%5d. %30s %5d  %5d",i+1,s[i].name,s[i].class,s[i].roll);
    }
    
    printf("\n--------X-----------");
    printf("\n");
    for(i=0;i<80;i++)
    printf("%c",205);
    return 0;
}