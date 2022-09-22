/*
+++++
++++*
+++**
++***
+****
*****
+****
++***
+++**
++++*
+++++............................
*/

#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=12;a++)
	{
		//print +
		for(b=1;b<=12-a;b++)
		printf("+");
		//print *
		for(b=1;b<=a;b++)
		printf("*");
		printf("\n");
	}
	for(a=1;a<=11;a++)
	{
		//print +
		for(b=1;b<=a;b++)
		printf("+");
		//print *
		for(b=1;b<=12-a;b++)
		printf("*");
		printf("\n");
	}
	return 0;
}