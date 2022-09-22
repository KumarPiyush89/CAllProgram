/*C PROGRAM TO FIND THE L.C.M USING FOR LOOP
*/
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("ENter the value of any two positive integer number:");
	scanf("%d%*c%d",&x,&y);
	a=x;
	b=y;
	if(a!=b)
	{
		for(a=x,b=y;a<b;a!=b);
	}
	printf("\n%d is the lcm of %d and %d",a,x,y);
	return 0;
}