/* Write a C program that will read name and contact number of a person and write in file.  */
#include<stdio.h>
#include<process.h>
int main()
{
    char name[100];
    char contact[12];
    FILE *file;
    int i;
    printf("Enter name:");
    gets(name);
    printf("Enter Contact:");
    gets(contact);
    file=fopen("information.txt","a");
    if(file==NULL)
    {
        printf("File Not Found \n");
        system("pause");
        return 0;
    }
    for(i=0;name[i]!='\0';i++)
    fputc(name[i],file);
    fputc('~',file);
    for(i=0;contact[i]!='\0'; i++)
    fputc(contact[i],file);
    fputc('\n',file);
    fclose(file);
    printf("Name and contact are written in file succrssfully\n");
    system("pause");
    return 0;
}