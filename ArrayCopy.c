/*
Array Copy Example
=====================
Write a C program in which create two array of capacity 10. initialize both with 0.
print both array.
accpe values from user in 1st array. 
Copy the first array in 2nd array and print both array.
*/
#include<stdio.h>
#include<process.h>
int main()
{
	int a[10]={0},b[10]={0},i;
	printf("Contents of 1st array is:");
	for(i=0;i<10;i++)printf("%d,",a[i]);
	printf("\ncontents of 2nd array is:");
	for(i=0;i<10;i++)printf("%d,",b[i]);
	//accept value from user in 1st string
	for(i=0;i<10;i++)
	{
		printf("Enter Number %d/10:",i+1);
		scanf("%d",&a[i]);
	}
	
	//copy 1st array  in 2nd array
	for(i=0;i<10;i++)b[i]=a[i];
	
	//print both array
	printf("\n content of 1st array:");
	for(i=0;i<10;i++)printf("%d,",a[i]);
	printf("\n content of 2nd array:");
	for(i=0;i<10;i++)printf("%d,",b[i]);
	printf("\n");
    system("pause");
	return 0;
	
}