//Cpp program that will validate the date and show the given date is present, past or future.
#include<iostream>
#include<ctime>
using namespace std;
bool checkDate(int,int,int);
class Date
{
    private:
        int d;
        int m;
        int y;
    public:
        Date()
        {
            this->setCurrentDate();
        }
        void setCurrentDate()
        {
            time_t currentTime;
        	struct tm t;
	        currentTime=time(NULL);
	        t=*localtime(&currentTime);
            this->d=t.tm_mday;
            this->m=t.tm_mon+1;
            this->y=t.tm_year+1900;

        }
        Date(int d,int m,int y)
        {
            if(checkDate(d,m,y))
            {
                this->d=d;
                this->m=m;
                this->y=y;
            }
            else 
            this->setCurrentDate();
        }
        void setDate(int d,int m,int y)
        {
            if(checkDate(d,m,y))
            {
                this->d=d;
                this->m=m;
                this->y=y;
            }
            else 
            this->setCurrentDate();
  
        }
        bool operator ==(Date t)const
        {
            if(this->d==t.d&&this->m==t.m&&this->y==t.y)
            return true;
            else
            return false;
        }
        bool operator >(Date t)const
        {
            if((this->y)>t.y)
            return true;
            else if((this->y)==t.y&&(this->m)>t.m)
            return true;
            else if((this->y)==t.y&&(this->m)==t.m&&(this->d)>t.d)
            return true;
            else
            return false;
        }
        void show()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};

bool checkDate( int d,int m,int y)
{    
    if(d>0&&d<=31&&m>0&&m<=12&&y>0)
    {
        if(m==2)
        {
            if(y%4==0&y%100!=0||y%400==0)
            {
                if(d<=29)
                return true;
                else
                return false;
            }
            else if(d<=28)
            return true;
            else
            return false;
        }
        if(m==4||m==6||m==9||m==11)
        {
            if(d<=30)
            return true;
            else
            return false;
        }
        else if(d<=31)
            return 1;
            else 
            return false;
        
    }
    else
    return false;
}
int main()
{
    Date currentDate,newDate;
    int d,m,y;
    //inputing date.
    cout<<"Enter Date:-";
    cout<<" Day  : ";
    cin>>d;
    cout<<" Month: ";
    cin>>m;
    cout<<" Year : ";
    cin>>y;
    //validating date
    if(!checkDate(d,m,y))
    {
        cout<<"\nInvalid date";
        return 0;
    }
    //seting entered date in new date.
    newDate.setDate(d,m,y);
    cout<<endl;
    if(newDate==currentDate)
    cout<<"Present Date";
    else if(newDate>currentDate)
    cout<<"Future Date";
    else
    cout<<"Past Date";
    return 0;
} 



