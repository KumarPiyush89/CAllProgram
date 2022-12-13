#include<stdio.h>
int main()
{
    FILE *source,*target;
    char c;
    char sourceFileName[200],targetFileName[200];
    //sccept the source file name
    printf("Enter a valid source file name:");
    gets(sourceFileName);
    //open source file in read mode
    source = fopen(sourceFileName, "r");
    if(source == NULL)
    {
        printf("Error: Could not open source file");
        return 0;
    }

    //read the target file name 
    printf("Enter a valid target file name:");
    gets(targetFileName);
    target= fopen(targetFileName,"w");
    if(!target)
    {
        //close the source file
        fclose(source);
        printf("Error: Could not open target file");
        return 0;
    }

    //code for copy file
    while(!feof(source))
    {
        //read a character from sourcefile 
        c=fgetc(source);
        //write the character to target file 
        fputc(c, target);

    }
    //close both files
    fclose(source);
    fclose(target);
    printf("\n File copied successfully");
    return 0;
}