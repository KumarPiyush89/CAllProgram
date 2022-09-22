/*Write a C program to find largest of five numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter any five nymber seperated by any non digit symbol:");
	scanf("%d%*c%d%*c%d%*c%d%*c%d",&a,&b,&c,&d,&e);
	
	if(a>b&&a>c&&a>d&&a>e)	  printf("\n%d is largest number",a);
	else if(b>c&&b>d&&b>e)	  printf("\n%d is largest number",b);
	else if(c>d&&c>e)		  printf("\n%d is largest number",c);
	else if(d>e)	 		 printf("\n%d is largest number",d);
	else	  			    printf("\n%d is largest number",e);
	printf("\nThank You");
	return 0;
}