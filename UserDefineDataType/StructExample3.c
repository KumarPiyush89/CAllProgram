/* write a C program in which accept name,class,roll,dob,doa,marks of five papers of 10 atudents and 
print all entered record with total marks and division*/
#include<stdio.h>
#include<string.h>
#include<process.h>
struct Date
{
	int day;
	int month;
	int year;
};
struct  Date inputDate()
{
	struct Date date;
	int valid;
	do
	{
		
		printf("Enter Date (dd/mm/yyyy):");
		scanf("%2d%*c%2d%*c%4d",&date.day,&date.month,&date.year);
		
		//CHECK DATE VALID
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
				{
					valid=1;
				}
				else
				{
					valid=0;
				}
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
	else
	{
		printf("Oops! You have entered an invalid date, Plese entered a valid date");
	}
}
	while(1);
}
void printDate(struct Date date)
{
	printf("%2d/%2d/%4d",date.day,date.month,date.year);
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
    /*//dddd-mmmmmmm-yyyy
    char dateName[32][31]={"","1st","2nd","3rd","4th","5th","6th","7th","8th","9th","10th"
	,"11th","12th","13th","14th","15th","16th","17th","18th","19th","20th"
	,"21st","22nd","23rd","24th","25th","26th","27th","28th","29th","30th","31th"};
    char monthName[13][12]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s/%s/%4d",dateName[date.day],monthName[date.month],date.year);*/
    char monthName[13][10]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("%d",date.day);
	if(date.day==11||date.day==12||date.day==13)
	{
    	printf("th ");
	}	
	else
	{
	    if(date.day%10==1)
	    printf("st");
	    else if(date.day%10==2)
	    printf("nd ");
	    else if(date.day%10==3)
	    printf("rd ");
	    else
	    printf("th ");
	    /*
	    upd=date.day%10;
	    if(upd==1)
	    printf("st ");
	    else if(upd==2)
	    printf("nd ");
	    else if(upd==3)
	    printf("rd ");
	    else
	    printf("th ");
	    */
	   /*
	   switch(date.day%10)
	   {
	        case 1:printf("st ");break;
	        case 2:printf("nd ");break;
	        case 3:printf("rd ");break;
	        default:printf("th ");
	   }*/
	}
	printf(" %s %4d",monthName[date.month],date.year);

}
void printDate3(struct Date date)
{
    // Wednesday, 3rd August 2022
    char weekName[8][12]={"","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    if(date.month<3)
    {
    	date.day+=date.year;
    	date.year-=1;
	}
	else
	{
		date.day+=date.year-2;
	}
	weekName=(23*date.month/9+date.day+4+date.year/100+date.year/400)%7;
	printf("%s",weekName);
    
    /*char dateName[32][31]={"","1st","2nd","3rd","4th","5th","6th","7th","8th","9th","10th"
	,"11th","12th","13th","14th","15th","16th","17th","18th","19th","20th"
	,"21st","22nd","23rd","24th","25th","26th","27th","28th","29th","30th","31th"};
	
    char monthName[13][12]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s,%s/%s/%4d",weekName,dateName[date.day],monthName[date.month],date.year);*/
   char monthName[13][10]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("%d",date.day);
	if(date.day==11||date.day==12||date.day==13)
	{
   	 printf("th ");
	}
		else
	{
    if(date.day%10==1)
    printf("st");
    else if(date.day%10==2)
    printf("nd ");
    else if(date.day%10==3)
    printf("rd ");
    else
    printf("th ");
    /*
    upd=date.day%10;
    if(upd==1)
    printf("st ");
    else if(upd==2)
    printf("nd ");
    else if(upd==3)
    printf("rd ");
    else
    printf("th ");
    */
   /*
   switch(date.day%10)
   {
        case 1:printf("st ");break;
        case 2:printf("nd ");break;
        case 3:printf("rd ");break;
        default:printf("th ");
   }*/
	}
	printf(" %s %4d",monthName[date.month],date.year);
}


#define TOTAL_SUBJECT 5
struct Student
{
	char name[30];
	int clas;
	int roll;
	struct Date dob;
	struct Date doa;
	int marks[TOTAL_SUBJECT];
};

char subjects[TOTAL_SUBJECT][11]={"Math","English","Science","S. Science","Hindi",};

struct Student inputStudent()
{
	int i;
	struct Student student;
	printf("Enter Name:");
	fflush(stdin);
	gets(student.name);
	printf("Enter class:");
	scanf("%d",&student.clas);
	printf("Enter Roll:");
	scanf("%d",&student.roll);
	printf("Enter DOB:");
	student.dob=inputDate();
	printf("Enter DOA:");
	student.doa=inputDate();
	printf("Enter Marks of:\n");
	for(i=0;i<TOTAL_SUBJECT;i++)
	{
		printf("%s:",subjects[i]);
		scanf("%d",&student.marks[i]);
	}
	return student;
	
}

void printStudent(struct Student student,int srno)
{	int i;
    int total;
    float percentage;
    char division[10];
    int passInAll;
	

    //find total
    total=0;
    for(i=0;i<TOTAL_SUBJECT;i+=1)total+=student.marks[i];

    //find percentage
    percentage=total/(float)TOTAL_SUBJECT;

    //find division
    //check student is pass in all paper or not
    passInAll=0;
    for(i=0;i<TOTAL_SUBJECT;i+=1)
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
    		
      printf("\n%5d  %20s %5d %9d",srno,student.name,student.clas,student.roll);
	  printf("       ");
      printDate3(student.dob);
      printf("   ");
      printDate2(student.doa);
      for(i=0;i<TOTAL_SUBJECT;i+=1)
      printf("\t    %4d",student.marks[i]);
      printf("%10d %10.2f%%  %14s",total,percentage,division);
}

	#define TOTAL_STUDENT 1
	int main()
	{
		int i;
		struct Student students[TOTAL_STUDENT];
		
		//Code for Input
		for(i=0;i<TOTAL_STUDENT;i++)
		{
			printf("\n Enter Record Of Student %d:\n\n",i+1);
			students[i]=inputStudent();
		}
		
		//Print All Entered Record
		
		system("cls");
		system("color 1f");
		printf("\n All Entered Records are:");
		printf("\n%6s %15s %13s %7s %12s %12s ","Sr.No","Name","Class","Roll","DOB","DOA");
		for(i=0;i<TOTAL_SUBJECT;i++)
		printf("%15s",subjects[i]);
		printf("%10s %10s %13s","TOTAL","PERCENTAGE","DIVISION");
		printf("\n");
		for(i=0;i<180;i++)
		printf("%c",205); 
		printf("\n");
		
		for(i=0;i<TOTAL_STUDENT;i++)
		printStudent(students[i],i+1);
		printf("\n");
			for(i=0;i<180;i++)
			printf("%c",205); 
			printf("\n");
			printf("\t\t\tTHANK YOU");
			//printf("DOB:");
			//scanf("%d",&printDate1);
			//printf("\n¯\_(ツ)_/¯");
		return 0;
	}

