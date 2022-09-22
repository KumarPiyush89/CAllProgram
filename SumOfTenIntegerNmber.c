/* WRITE A C PROGRAM IN WHICH ACCEPT ANY TEN INTEGER NUMBER FROM USER AND PRINT THE SUM OF ALL INTERED N0UMBER  */
#include<stdio.h>
int main()
 {
 	int a,b,c,d,e,f,g,h,i,j,sum;
 	printf("ENter any ten integer number");
 	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
 	sum=a+b+c+d+e+f+g+h+i+j;
 	printf("\n ten number is %d",sum);
 	printf("%d%d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i,j);
 	return 0;
 }
