/*write a c program that accepts 5 integer number and print the sum and average of all number.
*/
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int sum;
	float average;
	printf("Eter 1st Number:");
	scanf("%d",&a);
	printf("Eter 2nd Number:");
	scanf("%d",&b);
	printf("Eter 3rd Number:");
	scanf("%d",&c);
	printf("Eter 4th Number:");
	scanf("%d",&d);
	printf("Eter sth Number:");
	scanf("%d",&e);
	sum = (a+b+c+d+e);

	printf ("sum/5.0");
    // average=(sum)/5;
	//printf("\nsum of all number=%d and avg num%f",sum,average);
	return 0;

}