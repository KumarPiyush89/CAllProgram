/* C program that will write the content of a text file on screen*/
#include<stdio.h>
int main()
{
    FILE *file;
    int ch;

    //open the file in read mode
    file=fopen("piyush.txt","r");
    if(file==NULL)
    {
        printf("File not found");
        return 0;
    }
    printf("File content:");
    while(!feof(file))
    {
        //read a character from file
        ch=fgetc(file);
        //print character on screen
        printf("%c",ch);
    }
    //close the file
    fclose(file);
    return 0;

}