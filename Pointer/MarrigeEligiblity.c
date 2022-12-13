#include<stdio.h>
#include<time.h>
#include<process.h>

struct Date
{
   int day;
   int month;
   int year;
};
int isvalid(struct Date date)
{
   if(date.day>0 && date.day<=31 && date.month>0 && date.month<=12 && date.year>0)
   {
       if(date.month==2)
       {
          if(date.year%4==0 && date.year%100==0 || date.year%400==0)
          {
             if(date.day<=29)
                return 1;
             else
                return 0;
          }
        else
        {
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
   struct Date DOB,today,dob;
   int day,month,year,day1,month1,year1;
   time_t tseconds;
   struct tm*ts;
   //1. Accept DOB from user.
   printf("Enter valid Girl's DOB(dd/mm/yyyy) :  ");
   scanf("%2d%*c%2d%*c%4d",&dob.day,&dob.month,&dob.year);
   printf("\n Enter valid Boy's DOB(dd/mm/yyyy) :  ");
   scanf("%2d%*c%2d%*c%4d",&DOB.day,&DOB.month,&DOB.year);
   //validity entered date
   //CHECK girl dob is valid or not
    if(isvalid(dob)==0)
    {
        system("color 4f");
        printf("\n Sorry! You have entered an invalid date. \n ");
        return 0;
    }
    //check boy dob is valid or not
    if(isvalid(DOB)==0)
    {
        system("color 4f");
        printf("\n Sorry! You have entered an invalid date. \n ");
        return 0;
    }
    
    //2. Access System Date
     
    time(&tseconds);
    ts=localtime(&tseconds);

    today.day=ts->tm_mday;
    today.month=ts->tm_mon+1;
    today.year=ts->tm_year+1900;
    
    //3. Substruct Date
       //check Girls's Dob
       if(today.day<dob.day)
       {
           if(today.month-1==2)
           {
               if(today.year%4==0 && today.year%100==0 || today.year%400==0)
               {
                   today.day+=29;
               }
               else
                  today.day+=28;
           }
           else if(today.month-1==4 || today.month-1==6 || today.month-1==9 || today.month-1==11)
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
     
      printf("\n\n Girl is %d years, %d months and %d days old today.",year,month,day);
    
       //check Boys DOB
          if(today.day<DOB.day)
         {
           if(today.month-1==2)
           {
               if(today.year%4==0 && today.year%100==0 || today.year%400==0)
               {
                   today.day+=29;
               }
               else
                  today.day+=28;
           }
           else if(today.month-1==4 || today.month-1==6 || today.month-1==9 || today.month-1==11)
                today.day+=30;
           else
             today.day+=31;
           
          today.month-=1;
       }
       if(today.month<DOB.month)
       {
           today.month+=12;
           today.year-=1;
       }
       year1=today.year-DOB.year;
       month1=today.month-DOB.month;
       day1=today.day-DOB.day;
      
       printf("\n\n Boy is %d years, %d months and %d days old today.",year1,month1,day1);
    
    
      printf("\n\n");
    //4. Check Eligibility 
     //for Boys and Girls
     if(year1>=21 && year>=18) 
        {
            system("color 1f");     
            printf("\n You both are eligible for marriage. \n");
        }
     else
    {
       if(year1>=21 && year<18)
       {
          system("color 1f");
          printf("\n Boy are eligible for marriage but girl is not eligible for marriage.\n");
       }  
       else
       {
          if(year1<21 && year>=18)
          {
            system("color 1f");
            printf("\n Girl is eligible for marriage but boy are not eligible for marriage. ");
          }
          else
          {
            system("color 1f");
            printf("\n You both are not eligible for marriage. ");
          }
       }
     }
    return 0;
}