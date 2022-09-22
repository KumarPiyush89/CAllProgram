
/*calculate simple intrest*/



#include<stdio.h>
int main()
{
	int pa; 
	float rate;
	int time;
	float si;
	printf("Enter principal amount:");
	scanf("%d",&pa);
	printf("Enter rate of intrest:");
	scanf ("f",&rate);
	printf ("Enter time:");
	scanf("%d",&time);
	si=(pa*rate*time)/100;
	printf("\nSimple intrest=%f",si);
	return 0;
}