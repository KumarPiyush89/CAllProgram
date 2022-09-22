/* WACP to find the HCF of two non zero positive number using divison mathod*/
#include<stdio.h>
int main()
{
	int a,b,dr,dd,r;
	printf("Enter any two positive number in a and b:");
	scanf("%d%*c%d",&a,&b);
	 	if(a<b)
	 	{
			dr=b;
			dd=a; 
		}
		else
	    {
		dr=a;
		dd=b;
	    }
		r=dd%dr;
		do
		{
			dd=dr;
			dr=r;
			r=dd%dr;
		}
		while
		
			(r!=0);
			printf("%d and %d is the HCF of %d",a,b,dr);
        
	return 0; 
    }
