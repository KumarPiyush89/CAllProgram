/* Copy file using binary mode*/
#include<stdio.h>
int main()
{
    char sourceFile[100],targetFile[100];
    char ch;
    FILE *source,*target;

    //accept the name of source file
    printf("enter source file name:");
    gets(sourceFile);
    //open this file in read binary mode
    source=fopen(sourceFile,"rb");
    if(!source)
    {
        printf("source file not found.");
        return 0;
    }

    //accept the name of target file
    printf("Enter target file name:");
    gets(targetFile);
    //open target file
    target=fopen(targetFile,"wb");
    if(!target)
    {
        fclose(source);
        printf("\nUnable to create target file.");
        return 0;
    }

    //write file
    while(!feof(source))
    {
        //read a byte from source file
        fread(&ch,sizeof(char),1,source);
        //write byte to file
        if(!feof(source))
        fwrite(&ch,sizeof(char),1,target);
    }

    //close both file
    fclose(source);
    fclose(target);
    printf("\n file copied successfully");
    return 0;


}