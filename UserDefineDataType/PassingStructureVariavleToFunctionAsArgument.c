/*
Whenever  a function is called, the calling function sends some values to called function known as argument.

When a function is called, the actual argument is copied to formal argument. Structure variable can be copied 
using = operator so, we can also pass structure variable as argument to function.
*/
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
    int roll;
    int mrkas[5];
};

void printStudent(struct Student s)
{
    int i;
    printf("\nName:%s",s.name);
    printf("\nDOB:%d-%d-%d",s.dob.day,s.dob.month,s.dob.year);
    printf("\nRoll:%d",s.roll);
    for(i=0;i<5;i+=1)
    printf("\nPaper %d:%d",i+1,s.mrkas[i]);
    return;
}

int main()
{
    struct Student s1={"Neha Kumari",{12,8,2003},45,{45,86,63,96,52}};

    struct Student s2;
   
    //print the value of variable s1 and s2 on screen
    //s1 is initialized but s2 is not initialized so it will contain garbage value

    printf("Value of variable s1:");
    printStudent(s1);
    
    printf("\n\nValue of variable s2:");
    printStudent(s2);
    
    //copy the value of s1 in s2
    s2=s1;

    printf("\n\nValue of variable s2(after Copy):");
    printStudent(s2);

    return 0;
    
}