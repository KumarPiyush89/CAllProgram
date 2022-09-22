/*C program to calculate the side of square,area and diagonal*/
#include<stdio.h>
int main()
{
    float area;
	float diagonal;

    printf("Enter length of diagonal of a Square\n");
    scanf("%f", &diagonal);

    area = (diagonal * diagonal)*0.5;

    printf("Area of the Square is %0.2f\n", area);

    return 0;
}