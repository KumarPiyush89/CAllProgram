/*
0
10
101
0101
01010
101010
*/
#include<stdio.h>
int main()
{
	int x,y,z;
	z=0;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d",z);
			if(z==0)
			z=1;
			else
			z=0;
		}
		printf("\n");
	}
	return 0;
}