/*write a c program that accepts radius of circle and print the area if circle.*/
#include <stdio.h>
int main()
{
  float radius;
  float area;

  printf("Enter the radius of a circle\n");

  scanf("%f", &radius);

  area = 3.14*radius*radius;

  printf("Area of the circle = %.2f\n", area);  

  return 0;
}