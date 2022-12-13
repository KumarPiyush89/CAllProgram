/* C program that will write the content of a text file on screen*/
#include<stdio.h>
int main()
{
    FILE *file;
    char fn[100];
    int ch;
    int totalcharacter=0;


//read file name from user
printf("Enter file name(with valid path):");
gets(fn);
    //open the file in read mode
    file=fopen(fn,"r");
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
        totalcharacter++;
        //print character on screen
        printf("%c",ch);
    }
    //close the file
    fclose(file);
    printf("\n Total Character=%d",totalcharacter);
    return 0;

}

/* Write a C program that will read name and contact number of a person and write in file*/
/* write A C program that will print the content of previous program outfile on screen*/
