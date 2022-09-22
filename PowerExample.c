	#include<stdio.h>
	#include<math.h>
	int main()
	{
		int b;
		int p;
		int r;
		printf("Enter base value:");
		scanf("%d",&b);
		printf("Enter power value:");
		scanf("%d",&p);
	r = pow(b,p); 
		printf("%d^%d=%d",b,p,r);
		return 0;
	}