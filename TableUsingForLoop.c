/*WRITE A C PROGRAM TABLE USING FOR LOOP
*/
#include<stdio.h>
int main()
{
	int i,c;
	printf("ENter any number which table you want to print:");
	scanf("%d",&c);
	for(i=1;i<11;i++)
	printf("\n%d *%3d =%3d",c,i,c*i);
	return 0;
}