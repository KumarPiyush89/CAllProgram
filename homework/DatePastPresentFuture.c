/*Write a c  program that will read a date,
 validate the date and print the past present future*/
#include<stdio.h>
#include<process.h>
#include<time.h>
 struct Date
 {
    int day;
    int month;
    int year;    /* data */
 };
 
int isValid(struct Date date)
{
    if(date.day>0&&date.day<=31&&date.month>0&&date.month<=12&&date.year>0)
    {
        if(date.month==2)
        {
            if(date.year%4==0&&date.year%100!=0||date.year%400==0)
            {
                if(date.day<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(date.day<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(date.month==4||date.month==6||date.month==9||date.month==11)
        {
            if(date.day<=30)
            return 1;
            else
            return 0;
        }
        else
        return 1;

    }
    else
    return 0;

} 
  struct Date systemdate()
 {
     struct Date today;
    time_t tseconds;
    struct tm td;
    time(&tseconds);
    td=*localtime(&tseconds);
    today.day=td.tm_mday;
    today.month=td.tm_mon+1;
    today.year=td.tm_year+1900;
    return today;
 }
 int largerdate(struct Date date1,struct Date date2)
 {
    if(date1.year>=date2.year)
    {
        if(date1.month>=date2.month)
        {
            if(date1.day>=date2.day)
            {
                return 1;
            }
            else return 2;
        }
        else
        return 2;
    }
    else
    return 2;
    
 }
int main ()
{
    struct Date date,today;
    int day,month,year;
    time_t tseconds;
    struct tm *td;
    // accept date from user
    printf("Enter Day:");
    scanf("%2d",&date.day);
    printf("\nEnter Month:");
    scanf("%2d",&date.month);
    printf("\nEnter Year:");
    scanf("%4d",&date.year);
    // validate date format
    if(!isValid(date))
    {
        printf(" \n Sorry!! you have Entered Invalid Date");
        system("pause");
        return 0;
    }
    // access system date formate
    today=systemdate();
    if(date.day==today.day&&date.month==today.month&&date.year==today.year)
    printf("You have entered present date");
    else if (largerdate(today,date)==1)
    printf("You have entered past date");
    else 
    printf("You have entered future date");
    
    printf("\nThank You");
}