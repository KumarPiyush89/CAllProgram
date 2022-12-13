/* Reading a character from file*/
#include<stdio.h>
#include<process.h>
int main()
{
    FILE *file;
    char ch;

    //1. open file for reading
file=fopen("piyush.txt","r");
if(file==NULL)
{
    printf("\n File not found.\n");
    system("pause");
    return 0;
}

//reada character from file
ch=fgetc(file);
printf("\nFiles first character is : %c",ch);

//close file
fclose(file);
printf("\n");
system("pause");
return 0;
}