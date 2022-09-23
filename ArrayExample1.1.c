/* WACP THAT WILL ACCEPT 10 INTEGER NUMBER AND PRINT OF SUM INTEGER NUMBER USING ARRAY*/
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10];
	int i;
	int sum;
	for(i=0;i<10;i++)
	{
		printf("Enter any integer number %d/10:",i+1);
		scanf("%d",&arr[i]);
	}
	//FIND SUM
	printf("\nSum of Number Is As:");
	for(i=0;i<10;i++);
	printf("%d, ",arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]+arr[i]);
	printf("\n");
	return 0;
}