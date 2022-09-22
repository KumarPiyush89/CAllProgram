/* Write a c program that will read 10 numbers from user in an array.
print the entered array
reverse the array
print the array
*/
#define S 10
#include<stdio.h>
int main()
{
	int arr[S],i,temp,j;
	for(i=0;i<S;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	//print the content of array
	printf("entered array is:");
	for(i=0;i<S;i++)
	printf("%d, ",arr[i]);
	
	//reverse the array
	for(i=0;i<S/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[S-1-i];
		arr[S-1-i]=temp;
	}
	//print the array
	printf("\n");
	for(j=1;j<80;j++)
	printf("%c",205);
	printf("\nArray after reverse:");
	for(i=0;i<S;i++)
	printf("%d, ",arr[i]);
	printf("\n");
	for(j=1;j<80;j++)
	printf("%c",205);
	printf("\n");
	system("pause");
	return 0;
	
}