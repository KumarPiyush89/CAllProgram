#include<stdio.h>
#include<time.h>
#include<process.h>
struct Date
{
    int day;
    int month;
    int year;
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


int main()
{
    struct Date dob,today;
    int day,month,year;
    time_t tseconds;
    struct tm *td;

    //1. accept dob from user
    printf("Enter valid DOB(dd/mm/yyyy):");
    scanf("%2d%*c%2d%*c%4d",&dob.day,&dob.month,&dob.year);
    //validate entered date
    if(isValid(dob)==0)
    {
        printf("\nSorry! you have entered an invalid date.\n");
        system("pause");
        return 0;
    }

    //2. access system date

    time(&tseconds);
    td=localtime(&tseconds);

    today.day=td->tm_mday;
    today.month=td->tm_mon+1;
    today.year=td->tm_year+1900;

    //3. Subtract Date

    if(today.day<dob.day)
    {
        if(today.month-1==2)
        {
            if(today.year%4==0&&today.year%100!=0||today.year%400==0)
            {
                today.day+=29;
            }
            else
                today.day+=28;
        }
        else if(today.month-1==4||today.month-1==6||today.month-1==9||today.month-1==11)
            today.day+=30;
        else
            today.day+=31;

        today.month-=1;
    }

    if(today.month<dob.month)
    {
        today.month+=12;
        today.year-=1;
    }

    year=today.year-dob.year;
    month=today.month-dob.month;
    day=today.day-dob.day;

    printf("\n Person is %d year(s) %d month(s) and %d day(s) old today.",year,month,day);

    //4.check eligibility
    if(year>=18)
    printf("Hurrah! You can caste vote");
    else
    printf("\nSorry! currently you are not eligible to case vote.");

    return 0;


}