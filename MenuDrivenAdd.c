/* Menu Driven Program*/
/* Addition subtraction multipliction division*/
#include<stdio.h>
#include<string.h>
/*int menu();
void addition();
void subtraction();
void multiplication();
void division();
int main();
*/

int menu()
{
	
    char m[][30]={"Addition","Subtraction","Multiplication","Division","Exit"};
    char heading[]="               Menu";
    int choice,i;
    system("cls");
    printf("\n%s",heading);
    line('=',strlen(heading)*2);
    for(i=0;i<5;i++)
    printf("\n %2d. %s",i+1,m[i]);
    line('=',strlen(heading)*2);
    do
    {
    printf("\nEnter valid Choice:");
    scanf("%d",&choice);
    if(choice>0&&choice<=5)
    return choice;
    } while (1); 
}
void line(int s,int l)
{
    int i;
    printf("\n");
    for(i=1;i<=l;i+=1)printf("%c",s);
    return;
}
void addition()
{
	int a,b,sum;
	printf("Enter any integer number:");
	scanf("%d%*c%d",&a,&b);
	sum=a+b;
	printf("\nAddition of %d and %d is as %d:",a,b,sum);
	return;
}
void subtraction()
{
	int a,b,sub;
	printf("Enter any integer number:");
	scanf("%d%*c%d",&a,&b);
	sub=a-b;
	printf("\nSubtraction of %d and %d is as %d:",a,b,sub);
	return;
}
void multiplication()
{
	int a,b,mul;
	printf("Enter any integer number:");
	scanf("%d%*c%d",&a,&b);
	mul=a*b;
	printf("\nmultiplication of %d and %d is as %d:",a,b,mul);
	return;
}
void division()
{
	int dd,dr,x,q,r;
	printf("Enter the value of devidend and divisor:");
	scanf("%d%*c%d",&dd,&dr);
	x=0;
	q=0;
	r=0;
	while(x<dd)
	{
		x=x+dr;
		q=q+1;
	}
	if (x!=dd)
	{
		q=q-1;
		r=dd-(x-dr);
	}
	printf("dividend=%d,divisor=%d, then quotent=%d and remender=%d",dd,dr,q,r);
	return;
}
int main()
	{
		do
		{
			switch(menu())
			{
				case 1:
				addition();
				break;
				case 2:
				subtraction();
				break;
				case 3:
				multiplication();
				break;
				case 4:
				division();
				break;
				case 5:
				return 0;
			}
			printf("\n");
			system("pause");
			
		}while (1);
}
