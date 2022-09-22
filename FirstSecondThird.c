/* c program to print the result of student. That will accept the marks of 5 subject
 and print result with division. Student will get division if he/she secure more than 30% marks in
 all subjects and overall percentage as:
 %>=60 FIRST
 %>=45 SECOND
 %>=30 Third
 otherwise FAIL
 */
 #include<stdio.h>
 #include<process.h>
 int main()
 {
	/*variable declaration*/
	int  hin,eng,math,sc,ssc,total,passInAll;
	float per;
	/*Input marks*/
	printf("Enter marks of Hindi:");
	scanf("%d",&hin);
	printf("Enter marks of English:");
	scanf("%d",&eng);
	printf("Enter marks of Math:");
	scanf("%d",&math);
	printf("Enter marks of Science:");
	scanf("%d",&sc);
	printf("Enter marks of Social Science:");
	scanf("%d",&ssc);
	/*Find total and percentage marks*/
	total=hin+eng+math+sc+ssc;
	per=total/5.0;
	/*check student is pass in all subjects or not*/
	passInAll=1;
	if(hin<30)
	passInAll=0;
	
	if(eng<30)
	passInAll=0;
	
	if(math<30)
	passInAll=0;
	
	if(sc<30)
	passInAll=0;
	
	if(ssc<30)
	passInAll=0;
	
	/*print result*/
	system("cls");
	printf("\t\tResult");
	printf("\n==============================");
	printf("\nSubject\t\tObtained Marks");
	printf("\n------------------------------");
	printf("\nHindi\t\t%d",hin);
	printf("\nEnglish\t\t%d",eng);
	printf("\nMath\t\t%d",math);
	printf("\nScience\t\t%d",sc);
	printf("\nSocial Science\t%d",ssc);
	printf("\n******************************");
	printf("\nTotal\t\t%d",total);
	printf("\nPercentage\t%.2f",per);
	printf("\nDivision\t");
	if(passInAll==1)
	{
		if(per>=60)
		printf("FIRST");
		else
		{
			if(per>=45)
			printf("SECOND");
			else
			printf("THIRD");
		}
	}
	else
	printf("FAIL");
	printf("\n==============================");
	printf("\nThank You");
	printf("\n");
	return 0;
} 