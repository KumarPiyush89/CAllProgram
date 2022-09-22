/*
0
01
010
0101
01010
010101
*/
#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=25;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			printf("%d",s);
			if(s==0)
			s=1;
			else
			s=0;
		}
		printf("\n");
	}
	return 0;
}