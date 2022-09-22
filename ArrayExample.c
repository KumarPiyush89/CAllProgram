/*WRITE A CPROGRAM IN WHICH ACCEPT ANY TEN INTEGER NUMBERAND PRINT THE SUM OF ALL INTERED NUMBER
*/
#include<stdio.h>
int main()
{
	int n[10];
	int sum;
	printf("Enter 1st number:");
	scanf("%d",&n[0]);
	printf("Enter 2nd number:");
	scanf("%d",&n[1]);
	printf("Enter 3rdnumber:");
	scanf("%d",&n[2]);
	printf("Enter 4th number:");
	scanf("%d",&n[3]);
	printf("Enter 5th number:");
	scanf("%d",&n[4]);
	printf("Enter 6th number:");
	scanf("%d",&n[5]);
	printf("Enter 7th number:");
	scanf("%d",&n[6]);
	printf("Enter 8th number:");
	scanf("%d",&n[7]);
	printf("Enter 9th number:");
	scanf("%d",&n[8]);
	printf("Enter 10th number:");
	scanf("%d",&n[9]);
	sum=n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9];
	printf("\n sum of all  integer number is %d",sum);
	return 0;
	
	
}