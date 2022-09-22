/* C Program Calculate Compound Interest quatarly*/
#include<stdio.h>
#include<math.h>
#include<process.h>

int main()
{
	float pa;
	float r;
	float t;
	float x;
	float y;
	float z;
	float yci,hci,qci;
	
	/*code of input*/
	printf("Enter principal amount:");
	scanf("%f",&pa);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	
	x = (1+r/100);
	y =pow(x,t);
	z =pa*y;
	yci = z-pa;
	
	printf("\nCompound Interest Yearly=%f",yci);
	
	system("pause");
		
	
			
		
		x = (1+r/200);
	y =pow(x,2*t);
	z =pa*y;
	hci = z-pa;
		
		system("pause");
		
		x = (1+r/100);
	y =pow(x,t);
	z =pa*y;
	qci = z-pa;
	printf("\nCompound Interest Quatarly=%f",qci);	
return 0;
}