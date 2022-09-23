/*
32754=Three Two seven Five Four

3 Three
7 Seven
6 Six

32754
Extraxt Left most digit of number
32754/10000=3
32754%10000=2754
2754/1000=2
2754%1000=754
754/100=7
754%100=54
54/10=5
54%10=4
4/1=4

pow(10,n-1)
*/
//c progra to print the enterd numbers in word digit by digit
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,totalDigit,lastDigit,remainingDigits;
	printf("enter any number:");
	scanf("%d",&n);
	//count total number of digit in entede number
	x=n;
	totalDigit=0;
	do
	{
		totalDigit+=1;
		x/=10;
	}while(x!=0);
	
	remainingDigits=n;
	x=totalDigit;
	while(x>=1)
	{
		//extract left most digit from remainingDigits
		lastDigit=remainingDigits/pow(10,x-1);
		if(lastDigit==0)
		printf(" Zero ");
		else if(lastDigit==1)
		printf(" One ");
		else if(lastDigit==2)
		printf(" Two ");
		else if(lastDigit==3)
		printf(" Three ");
		else if(lastDigit==4)
		printf(" Four ");
		else if(lastDigit==5)
		printf(" Five ");
		else if(lastDigit==6)
		printf(" Six ");
		else if(lastDigit==7)
		printf(" Seven ");
		else if(lastDigit==8)
		printf(" Eight ");
		else if(lastDigit==9)
		printf(" Nine ");
		
		//remove last digit from remainingDigits
		remainingDigits=remainingDigits%(int)pow(10,x-1);
		//decrease total digit by 1
		x-=1;
	}
	return 0;
}