/*
C program that will accept any integer number and print Binary,octaland hexa*/
#include<stdio.h>
#include<process.h>
int main()
{
    int bin[32],j,i,n,x,tbr,oct[32],tor,hex[32],thr;
    printf("Enter any number:");
    scanf("%d",&n);

    //find binary
    tbr=0;
    x=n;
    while(x!=0)
    {
        bin[tbr++]=x%2;
        x=x/2;
    }

    //find octal
    tor=0;
    x=n;
    while(x!=0)
    {
        oct[tor++]=x%8;
        x=x/8;
    }

    //find hexa
    thr=0;
    x=n;
    while(x!=0)
    {
        hex[thr++]=x%16;
        x=x/16;
    }
    // print Binary
    printf("\nBinary:");
    for(i=tbr-1;i>=0;i--)
    printf("%d",bin[i]);
    printf("\n");
    //print Octal
    printf("\noctal:");
    for(i=tor-1;i>=0;i--)
    printf("%d",oct[i]);
    printf("\n");

    //print HexaDecimal
    printf("\nHexaDecimal:");
    for(i=thr-1;i>=0;i--)
    {
        if(hex[i]<=9)
        printf("%d",hex[i]);
        else
        printf("%c",hex[i]+55);
        //for(j=1;j<=16;j++)
        //printf("%c215");
    }
    printf("\n Thank you");
    system("pause");
return 0;
}