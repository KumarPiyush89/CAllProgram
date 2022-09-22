/*Add input from keyboard */
#include<stdio.h>
 int main()
 {
 	printf("Enter 1st Number:");
 	scanf("%d", &a);
 	printf("Enter 2nd Number:");
 	scanf("%d", &b);
 	c = a+b;
 	printf("%d+%d=%d",a,b,c);
 	return 0;
 }