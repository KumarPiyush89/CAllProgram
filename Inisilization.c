#include<stdio.h>
int main()
{
	int x,y,z=20;
	int arr[10]; /* just like another variable array also containg garbage value if not initialized*/ 
	int arr1[10]={10,9,8,7,6,5,4,3,2,1};
	int arr2[10]={5,4,3,2,1};
	int arr3[10]={5};
	int arr4[10]={0};
	int arr5[5]={1,2,3,4,5,6};//number of initoalizer is more than size of array Error
	printf("\n value of x=%d, y=%d and z=%d",x,y,z);
	printf("\nContent of arr=");
	for(x=0;x<10;x++)
	printf("\nIndex %d:%d",x,arr[x]);
	
		printf("\nContent of arr1=");
	for(x=0;x<10;x++)
	printf("\nIndex %d:%d",x,arr1[x]);
	
		printf("\nContent of arr2=");
	for(x=0;x<10;x++)
	printf("\nIndex %d:%d",x,arr2[x]);
	
		printf("\nContent of arr3=");
	for(x=0;x<10;x++)
	printf("\nIndex %d:%d",x,arr3[x]);
	
		printf("\nContent of arr4=");
	for(x=0;x<10;x++)
	printf("\nIndex %d:%d",x,arr4[x]);
	return 0;
	
}