/* Write a C program that will read name, class, roll and marks of five subject of student
 and write in file.  */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
    char name[100],clas[5],rolls[5],sub1[4],sub2[4],sub3[4],sub4[4],sub5[4],totalMarks[4],str[200];
    int roll,marks1,marks2,marks3,marks4,marks5,total;
    FILE *file;
    int i;

        printf("Enter name: ");
        gets(name);
        printf("Enter Class: ");
        gets(clas);
        printf("Enter Roll: ");
        scanf("%d",&roll);
        printf("Enter marks of Paper1: ");
        scanf("%d",&marks1);
        printf("Enter marks of Paper2: ");
        scanf("%d",&marks2);
        printf("Enter marks of Paper3: ");
        scanf("%d",&marks3);
        printf("Enter marks of Paper4: ");
        scanf("%d",&marks4);
        printf("Enter makrs of Paper5: ");
        scanf("%d",&marks5);
        total=marks1+marks2+marks3+marks4+marks5;

        /*fputs() It writes string data to stream/file
        syntax:
            fputs(string,stream);
        Note: It autometicaly writes new line end of stream
        */
       
        //open file to write nmame
        file=fopen("marks.txt","a");
        if(file==NULL)
        {
            printf("File creation/opening error!\n");
            system("pause");
            return 0;
        }
        /*/ Convert all data into string */
        sprintf(str,"%s\t%s\t%d~%d\t%d\t%d\t%d\t%d~%d",name,clas,roll,marks1,marks2,marks3,marks4,marks5,total);
        fputs(str,file);

        fclose(file);
        
    printf("Data written to file successfully.\n");
    system("pause");
    return 0;
}
