/* C Program that will accept month and year and print the calendar of that month*/
#include<stdio.h>
int main()
{
    int d,m,y,d1,m1,y1;
    int weekDayNumber;
    int calendar[42]={0};
    int i,j;
    int totalDayInMonth;

    printf("Enter month and year:");
    scanf("%d%*c%d",&m,&y);
    if(m<=0||m>12||y<=0)
    {
        printf("\n Sorry invalid month or year entered.\n");
        system("pause");
    }

    //find the week day of 1st day of given month and year
    d=1;

    d1=d;
    m1=m;
    y1=y;

    if(m1<3)
    {
        d1+=y1;
        y1-=1;
    }
    else
    {
        d1+=y1-2;
    }
    weekDayNumber=(23*m1/9+d1+4+y1/4-y1/100+y1/400)%7;

    //find total day in given month
    if(m==2)
    {
        if(y%4==0&&y%100!=0||y%400==0)
        totalDayInMonth=29;
        else
        totalDayInMonth=28;
    }
    else if(m==4||m==6||m==9||m==11)
    totalDayInMonth=30;
    else
    totalDayInMonth=31;

    //now fill array from 1 to totalDaysInMonth
    //find the starting element
    for(i=weekDayNumber,j=1;j<=totalDayInMonth;i+=1,j+=1)calendar[i]=j;

    //print Calendar
    printf("\n\t\t %2d, %4d",m,y);
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    
    
    printf("\n%4s %4s %4s %4s %4s %4s %4s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    printf("\n");
    for(i=0;i<42;i++)
    {
        if(calendar[i]==0)
        printf("    ");
        else
        printf("%4d ",calendar[i]);
        if((i+1)%7==0)
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;



}