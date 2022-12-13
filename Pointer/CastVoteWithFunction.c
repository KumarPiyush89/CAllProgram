/* Write a C program  that will read a valid DOB of a person and check the person is eligible to caste vote or not*/
#include<stdio.h>
#include<time.h>
#include<process.h>
/* 
1. Accept DOB
2. Check DOB is valid or not
3. Initialize 2nd date
5. Check According toyear
*/
int main()
{
    int dobd;
    int dobm;
    int doby;
    int valid;
    printf("Enter Dob Of Person(DD/MM/MMMM):");
    scanf("%d%*c%d%*c%d%*c",&dobd,&dobm,&doby);
    // Check entered dob is valid or not
    if(dobd>0&&dobd<32&&dobm>0&&dobm<13&&doby>0)
    {
        if(dobm==2)
        {
            if(doby%4==0&&doby%100!=0||doby%400==0)
            {
                if(dobd<=29)
                valid=1;
                else
                valid=0;
            }
            else
            {
                if(dobd<=28)
                valid=1;
                else
                valid=0;
            }
        }
        else if(dobm==4||dobm==6||dobm==9||dobm==11)
        {
            if(dobd<=30)
            valid=1;
            else
            valid=0;
        }
        else
        valid=1;
    }
    else 
    valid=0;

    if (valid==0)
    {
        printf("Sorry!! You have enter any valid dob");
        printf("\n");
        system("pause");
    }

    time_t t=time(NULL);
    struct tm *today;
    today=localtime(&t);
    printf("\nDay=%d",today->tm_mday);
    printf("\nMonth=%d",today->tm_mon+1);
    printf("\nYear=%d",today->tm_year+1900);


    if(today->tm_mday)
    {
        if(today->tm_mon+1-1==2)
        {
            if(today->tm_year+1900%4==0&&today->tm_year+1900%100!=0||today->tm_year+1900%400==0)
            today->tm_mday=today->tm_mday+29;
            else
            today->tm_mday=today->tm_mday+28;
        }
        else if (today->tm_mon+1-1==4||today->tm_mon+1-1==6||today->tm_mon+1-1==9||today->tm_mon+1-1==11)
            today->tm_mday=today->tm_mday+30;
        else
            today->tm_mday=today->tm_mday+31;
        today->tm_mon+1=today->tm_mon+1-1;
              
    }
    
}
