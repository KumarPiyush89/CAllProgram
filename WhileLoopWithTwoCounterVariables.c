/* Write a C program that accepts a number and print the following pattern:
if entered number is 10, 
1  10
2   9
3   8
4   7
5   6
6   5
7   4
8   3
9   2
10  1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter any number:");
	scanf("%d",&n);
	/*i=1;
	j=n;
	while(i<=n)
	{
		printf("\n%d\t%d",i,j);
		i++;
		j--;
	}*/
	for(i=1,j=n;i<=n;i++,j--)
	printf("\n%d\t%d",i,j);
	return 0;
}
