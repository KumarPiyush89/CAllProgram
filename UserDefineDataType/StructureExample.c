
/* write a C program in which accept name,class,roll,dob,doa,marks of five papers of 10 atudents and 
print all entered record with total marks and division*/
#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct Date inputDate()
{
    struct Date date;
    int valid;
    do
    {

    printf("enter date(dd/mm/yyyy):");
    scanf("%2d%*c%2d%*c%4d",&date.day,&date.month,&date.year);
    //check date validity
    valid=1;
    if(date.day>0&&date.day<=31&&date.month>0&&date.month<=12&&date.year>0)
    {
        if(date.month==2)
        {
            if(date.year%4==0&&date.year%100!=0||date.year%400==0)
            {
                if(date.day<=29)
                    valid=1;
                else
                    valid=0;
            }
            else
            {
                if(date.day<=28)
                    valid=1;
                else
                    valid=0;
            }
        }
        else if(date.month==4||date.month==6||date.month==9||date.month==11)
        {
            if(date.day<=30)
            valid=1;
            else
            valid=0;
        }
        else
            valid=1;

    }
    else
    {
        valid=0;
    }

    if(valid==1)
    {
        return date;
    }
    else{
        printf("\nOOPs! You have entered an invalid date, Please enter a valid date");
    }

    }while(1);


}

void printDate(struct Date date)
{
    printf("%2d-%2d-%4d",date.day,date.month,date.year);
}

struct Student
{
    char name[30];
    int clas;
    int roll;
    struct Date dob;
    struct Date doa;
    int marks[5];
};

struct Student inputStudent()
{
    int i;
    struct Student student;
    printf("enter name:");
    fflush(stdin);
    gets(student.name);
    printf("enter class:");
    scanf("%d",&student.clas);
    printf("Enter roll:");
    scanf("%d",&student.roll);
    printf("enter DOB:");
    student.dob=inputDate();
    printf("Enter DOA:");
    student.doa=inputDate();
    for(i=0;i<5;i+=1)
    {
        printf("Paper %d:",i+1);
        scanf("%d",&student.marks[i]);
    }
    return student;

}

void printStudent(struct Student student)
{
    int total;
    float percentage;
    char division[20];
    int i;
    int passInAll;

    //find total
    total=0;
    for(i=0;i<5;i+=1)total+=student.marks[i];

    //find percentage
    percentage=total/5.0;

    //find division
    //check student is pass in all paper or not
    passInAll=0;
    for(i=0;i<5;i+=1)
    {
        if(student.marks[i]>=30)
        passInAll+=1;
    }

    if(passInAll==5)
    {
        if(percentage>=60)
        strcpy(division,"First");
        else if(percentage>=45)
        strcpy(division,"Second");
        else
        strcpy(division,"Third");
    }
    else
        strcpy(division,"Fail");

      //print data
      printf("\n%30s %5d %5d",student.name,student.clas,student.roll)  ;
      printDate(student.dob);
      printf(" ");
      printDate(student.doa);
      for(i=0;i<5;i+=1)
      printf("%4d",student.marks[i]);
      printf("%6d %6.2f%%  %s",total,percentage,division);
}

#define TOTAL_STUDENT 3
int main()
{
    int i;
    struct Student students[TOTAL_STUDENT];
    //code for input
    for(i=0;i<TOTAL_STUDENT;i+=1)
    {
        printf("\nEnter Record Of student %d:\n\n",i+1);
        students[i]=inputStudent();
    }

    //print all entered record
    printf("\nAll entered records are:");
    for(i=0;i<TOTAL_STUDENT;i+=1)
    printStudent(students[i]);

    return 0;

}