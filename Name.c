#include<stdio.h>
void line();
void line1(char);
void line2(int symbolToPrint,int lengthOfLine);
void line()
{
    int i;
    printf("\n");
    for(i=1;i<=80;i+=1)
    printf("-");

    return;
}

void line1(char ch)
{
    int i;
    printf("\n");
    for(i=1;i<=80;i+=1)
    printf("%c",ch);
    return;
}

void line2(int s,int l )
{
    int i;
    if(l<0)l*=-1;
    printf("\n");
    for(i=1;i<=l;i+=1)
    printf("%c",s);
    return;

}

 int main()
 {
    int i;

    printf("neha");
    line();
    printf("\njyoti");
    line();
    printf("\npayal");
    line();
    printf("\nsapna");
    line();
    printf("\nanshu");
    line();
    printf("\nKumar Piyush");
    line1('.');
    printf("\nRahul Kumar");
    line1('\\');
    printf("\nRitik Kumar");
    line1('/');
    printf("\nSumit Kumar");
    line1('-');
    printf("\nRahul Raj");
    line2(205,40);
    printf("\nRakesh Raj");
    line2('*',10);
    printf("\nKush Pandey");
    line2(65,80);




    return 0;
 }