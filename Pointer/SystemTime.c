/* C program to read system date and time*/
#include<stdio.h>
#include<time.h>
int main()
{
    time_t t=time(NULL);
    struct tm *today;
    printf("\nCurrent time is %u",t);
    //convert unix seconds in day,month,year,hour and seconds
    today=localtime(&t);
    printf("\nDay=%d",today->tm_mday);
    printf("\nMonth=%d",today->tm_mon+1);
    printf("\nYear=%d",today->tm_year+1900);
    printf("\n%d:%d.%d",today->tm_hour,today->tm_min,today->tm_sec);
    printf("\nWeek Day:%d",today->tm_wday);
    printf("\nDay of year:%dth",today->tm_yday);


    return 0;
}/* Write a C program that will read a valid DOB of a Person and check the person is eligibile to caste vote or not*/
