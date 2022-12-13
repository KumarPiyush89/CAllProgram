#include<stdio.h>
#include<string.h>
int menu();
void decimaltoBinary();
void decimalToOctal();
void decimalToHexa();
void line(int s,int l);
int main();

void line(int s,int l)
{
    int i;
    printf("\n");
    for(i=1;i<=l;i+=1)printf("%c",s);
    return;
}

int menu()
{

    char m[][30]={"Decimal To Binary","Decimal To Octal","Decimal To Hexa","Exit"};
    char heading[]="               Menu";
    int choice,i;
    system("cls");
    printf("\n%s",heading);
    line('-',strlen(heading)*2);
    for(i=0;i<4;i++)
    printf("\n %2d. %s",i+1,m[i]);
    line('-',strlen(heading)*2);
    do
    {
    printf("\nEnter valid Choice:");
    scanf("%d",&choice);
    if(choice>0&&choice<=4)
    return choice;
    } while (1); 
 
}

void decimalToBinary()
{
    int n,bin[32]={0},i,x;
    printf("Enter any +ve number:");
    scanf("%d",&n);
    n=abs(n);
    x=n;
    i=0;
    while(x)
    {
        bin[i]=x%2;
        i+=1;
        x/=2;
    }
    printf("\nBinary of %d is:",n);
    for(i=31;i>=0;i-=1)printf("%d",bin[i]);

    return ;

}

void decimalToOctal()
{
     int n,oct[32]={0},i,x;
    printf("Enter any +ve number:");
    scanf("%d",&n);
    n=abs(n);
    x=n;
    i=0;
    while(x)
    {
        oct[i]=x%8;
        i+=1;
        x/=8;
    }
    printf("\nOctal of %d is:",n);
    for(i=31;i>=0;i-=1)printf("%d",oct[i]);

    return ;
}

void decimaltoHexa()
{
     int n,hex[32]={0},i,x;
    printf("Enter any +ve number:");
    scanf("%d",&n);
    n=abs(n);
    x=n;
    i=0;
    while(x)
    {
        hex[i]=x%16;
        i+=1;
        x/=16;
    }
    printf("\nHexa of %d is:",n);
    for(i=31;i>=0;i-=1)printf("%d",hex[i]);

    return ;
}

int main()
{
    do
    {
        switch(menu())
        {
            case 1:
            decimalToBinary();
            break;
            case 2:
            decimalToOctal();
            break;
            case 3:
            decimaltoHexa();
            break;
            case 4:
            return 0;
        }
        printf("\n");
        system("pause");
    } while (1);
    
}