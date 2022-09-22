/* write a c program which accept the marks of 5 subject of any student and print all entered marks,total marks,obtained percentge marks 
and result.result will be pass or fail,if student obtain>=50% and >=30 any subject number then he/she is pass otherwisw fail*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*variable declaration*/
	int eng,math,Name,comp,hindi,science,sum,passInAll,i;
	float per;
	char fathername;
	/*Input*/	
	printf("Enter marks of English:");
	scanf("%d",&eng);
	printf("Enter marks of Math:");
	scanf("%d",&math);
	printf("Enter marks of Computer:");
	scanf("%d",&comp);
	printf("Enter marks of Hindi:");
	scanf("%d",&hindi);
	printf("Enter marks of Science:");
	scanf("%d",&science);
	
	/*Processing*/
	sum=eng+math+comp+hindi+science;
	per=sum/5.0;
	/*check student is pass in all subject or not*/
	passInAll=1;
	if(eng<30)
	passInAll=0;
	
	if(math<30)
	passInAll=0;
	
	if(comp<30)
	passInAll=0;
	
	if(hindi<30)
	passInAll=0;
	
	if(science<30)
	passInAll=0;
	
	printf("Name:");
	scanf("%d",&Name);
	printf("fathername:");
	scanf("%s",&fathername);
	
	/* output*/
	system("cls");
	printf("\t\tBihar School Examination Board,Patna");
	printf("\n\t\t\tSecondary Exam 2022");
	printf("\n\t\t\t\tMark Sheet");
	printf("\n");
	for(i=0;i<80;i++)
	printf("%c",205);
	printf("\n");
	printf("Name:");
	printf("Father:");
	printf("\tResult\n===================\nSubject\t\tFullMarks\t\tPassMarks\t\tObtained Marks");
	printf("\nEnglish\t\t100\t\t\t30\t\t\t%d",eng);
	printf("\nMath\t\t100\t\t\t30\t\t\t%d",math);
	printf("\nComputer\t100\t\t\t30\t\t\t%d",comp);
	printf("\nHindi\t\t100\t\t\t30\t\t\t%d",hindi);
	printf("\nScience\t\t100\t\t\t30\t\t\t%d",science);
	//printf("\n_____________________________");
	printf("\n");
	for(i=0;i<80;i++)
	printf("%c",205);
	
	printf("\n\t\t\t\t\t\t\tTotal\t%d",sum);
	printf("\n\t\t\t\t\t\tPercentage\t%.2f",per);
	printf("\n\t\t\t\t\t\t\tDivision\t");
	if(passInAll==1)
	{
		if(per>=60)
			printf("FIRST");
			{
				if(per>=50)
				printf("SECOND");
				{
					if(per>=30)
					printf("THIRD");
				}
			}
		}
	else
	 printf("FAIL");
	
	return 0;
}