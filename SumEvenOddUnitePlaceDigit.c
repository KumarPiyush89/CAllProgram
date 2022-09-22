// WACP SUM OF UNITE PLACE DIGIT EVEN AND UNITE PLACE DEGIT ODD
#include<stdio.h>
int main()
{
	int n,DigitPosition,OddPositionSum,EvenPositionSum,UnitPlaceDigit,x;
	printf("Enter any number in n.");
	scanf("%d",&n);
	x=n;
	DigitPosition=0;
	EvenPositionSum=0;
	OddPositionSum=0;
	while
	(x!=0)
		{
			UnitPlaceDigit=x%10;
			DigitPosition=DigitPosition+1;
			if(DigitPosition%2==0)
				EvenPositionSum=EvenPositionSum+UnitPlaceDigit;
				else
				OddPositionSum=OddPositionSum+UnitPlaceDigit;
				x=x/10;
		}
		printf("You Have Entered %d,It Has Total %d Digits. The Sum of OddPlaceDigit is %d and EvenPlaceDigit is %d",n,DigitPosition,OddPositionSum,EvenPositionSum);
	return 0;
}