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
int main()
{
    struct Student s1={"Neha Kumari",{12,8,2003},45,{45,86,63,96,52}};

    struct Student s2;

    int i;
    //print the value of variable s1 and s2 on screen
    //s1 is initialized but s2 is not initialized so it will contain garbage value

    printf("Value of variable s1:");
    printf("\nName:%s",s1.name);
    printf("\nDOB:%d-%d-%d",s1.dob.day,s1.dob.month,s1.dob.year);
    printf("\nRoll:%d",s1.roll);
    for(i=0;i<5;i+=1)
    printf("\nPaper %d:%d",i+1,s1.mrkas[i]);

    printf("\n\nValue of variable s2:");
    printf("\nName:%s",s2.name);
    printf("\nDOB:%d-%d-%d",s2.dob.day,s2.dob.month,s2.dob.year);
    printf("\nRoll:%d",s2.roll);
    for(i=0;i<5;i+=1)
    printf("\nPaper %d:%d",i+1,s2.mrkas[i]);

    //copy the value of s1 in s2
    s2=s1;

    printf("\n\nValue of variable s2(after Copy):");
    printf("\nName:%s",s2.name);
    printf("\nDOB:%d-%d-%d",s2.dob.day,s2.dob.month,s2.dob.year);
    printf("\nRoll:%d",s2.roll);
    for(i=0;i<5;i+=1)
    printf("\nPaper %d:%d",i+1,s2.mrkas[i]);


    return 0;
    
}