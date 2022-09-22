 /* C program to calculate Compound Interest */

#include <stdio.h>
#include<math.h>

int main()
{
    int pa;
	float rate;
	float time; 
	float CI;
    printf("Enter principle amount: ");
    scanf("%f", &pa);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    CI = pa* (pow((1 + rate / 100), time));
    printf("Compound Interest = %f", CI);
    return 0;
}

