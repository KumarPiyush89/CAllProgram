/* write a c program which accept the marks of 5 subject of any student and print all entered marks,total marks,obtained percentge marks 
and result.result will be pass or fail,if student obtain>=50% marks then he/she is pass otherwisw fail*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*variable declaration*/
	int eng,math,comp,hindi,science,sum;
	float per;
	
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
	
	/* output*/
	system("cls");
	printf("\tResult\n===================\nSubject\t\tObtained Marks");
	printf("\nEnglish\t\t%d",eng);
	printf("\nMath\t\t%d",math);
	printf("\nComputer\t%d",comp);
	printf("\nHindi\t\t%d",hindi);
	printf("\nScience\t\t%d",science);
	printf("\n_____________________");
	printf("\nTotal\t\t%d",sum);
	printf("\nPercentage\t%.2f",per);
	printf("\nResult\t\t");
	if(per>=50)
	printf("PASS");
	else
	printf("FAIL");
}