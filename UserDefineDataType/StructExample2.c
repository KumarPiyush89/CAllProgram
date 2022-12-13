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
    int valid=1;
    do
    {
        printf("Enter date(dd/mm/yyyy): ");
        scanf("%2d%*c%2d%*c%4d",&date.day,&date.month,&date.year);

//check the validity of date
        valid=1;
        if (date.day>=1 && date.day<=31 && date.month>=1 && date.month<=12 && date.year>0)
        {
            if (date.month==2)
            {
                if (date.year%4==0 && date.year%100!=0 && date.year%400==0)
                {
                    if (date.day<=29)
                        valid=1;
                    else
                        valid=0;  
                }
                else
                {
                    if (date.day<=28)
                        valid=1;
                    else
                        valid=0;
                }
            }
            else if (date.month==4 || date.month==6 || date.month==9 || date.month==11)
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
    if (valid==1)
    {
        return date;
    }
    else
    {
        printf("\nOOPs! You have entered an invalid date, please enter a valid date");
    }   
                
    } while (1);
    
}

void printDate (struct Date date)
{
    //dd-mm-yyyy
    printf("%2d-%2d-%4d",date.day,date.month,date.year);
}
void printDate1(struct Date date)
{
    //dd-MMM-yyyy  03-AUG-2022
    char monthName[13][4]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%2d-%s-%4d",date.day,monthName[date.month],date.year);

}
void printDate2(struct Date date)
{
    //3rd August 2022

}
void printDate3(struct Date date)
{
    // Wednesday, 3rd August 2022
    
}

#define TOTAL_SUBJECT 6
struct Student
{
    char Name[40];
    int clas;
    int roll_no;
    struct Date dob;
    struct Date doa;//doa = Date Of Addmission
    int Marks[TOTAL_SUBJECT];
};

char subjects[TOTAL_SUBJECT][11]={"Math","English","Science","S. Science","Hindi","Comp."};

struct Student inputStudent()
{
    int i;
    struct Student student;

    printf("Enter Student\n");
    printf("Name:");
    fflush(stdin);
    gets(student.Name);
    printf("class:");
    scanf("%d",&student.clas);
    printf("roll_no:");
    scanf("%d",&student.roll_no);
    printf("DOB:");
    student.dob=inputDate();
    printf("DOA:");
    student.doa=inputDate();
    printf("Enter Marks of:\n");

    for ( i = 0; i <TOTAL_SUBJECT; i++)
    {
        printf("%s: ",subjects[i]);
        scanf("%d",&student.Marks[i]);
    }
    return student;
};

void printStudent (struct Student student,int srno)
{
    int total;
    float percentage;
    char grade[5];
    int i;
    int PassInAll;

//Find total Marks
    total=0;
    for(i=0;i<TOTAL_SUBJECT;i+=1)total+=student.Marks[i];

//find percentage
    percentage=total/(float)TOTAL_SUBJECT;

//find division
//check student is pass in all paper or not
    PassInAll=0;
    for(i=0;i<TOTAL_SUBJECT;i+=1)
    {
        if(student.Marks[i]>=30)
        PassInAll+=1;
    }

    if(PassInAll==TOTAL_SUBJECT)
    {
        if(percentage>=90 )
        strcpy(grade,"A+");
        else if(percentage>=80)
        strcpy(grade,"A");
        else if(percentage>=60 )
        strcpy(grade,"B");
        else if(percentage>=35 )
        strcpy(grade,"C");
    }
    else
        strcpy(grade,"Fail");

//print record of student
      printf("\n%6d %30s %7d %7d ",srno,student.Name,student.clas,student.roll_no);
      printDate1(student.dob);
      printf(" ");
      printDate(student.doa);
      printf(" ");
      for(i=0;i<TOTAL_SUBJECT;i+=1)
      printf("%10d ",student.Marks[i]);
      printf("%10d %10.2f%%  %s",total,percentage,grade);    
}

#define total_STUDENT 1
int main()
{
    int i;
    struct Student students[total_STUDENT];
    //code for input
    for(i=0;i<total_STUDENT;i+=1)
    {
        printf("\nEnter Record Of student %d:\n\n",i+1);
        students[i]=inputStudent();
    }

    //print all entered record
    printf("\n-------------------------------------------------------------------------------------------------------------------");
    printf("\n                                             All entered records of students are:-");
    printf("\n-------------------------------------------------------------------------------------------------------------------");
    printf("\n%6s %30s %6s %7s %10s %10s ","Sr.No.","Name","Class","Roll_no","DOB","DOA");
    for(i=0;i<TOTAL_SUBJECT;i++)
    printf("%10s ",subjects[i]);
    printf("%10s %10s %10s","Total","Percent","Grade");

    for(i=0;i<total_STUDENT;i+=1)
    printStudent(students[i],i+1);


    return 0;

}