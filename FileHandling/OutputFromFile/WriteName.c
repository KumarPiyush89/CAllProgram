/* C program that will read a name from user and write that name in file*/
#include<stdio.h>
#include<process.h>
int main()
{
    char name[100];
    FILE *file;
    int i;

    printf("Enter name:");
    gets(name);

    //open file to write nmame
    file=fopen("name.txt","a");
    if(file==NULL)
    {

        printf("File creation/opening error!\n");
        system("pause");
        return 0;
    }
    //write data to file
    for(i=0;name[i]!='\0';i+=1)
    fputc(name[i],file);
    //write new line to file
    fputc('\n',file);

    fclose(file);
    printf("Name written to file successfully\n");
    system("pause");
    return 0;

}