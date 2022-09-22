//C program to print the size of different type variables
#include<stdio.h>
int main()
{
	printf("\nData type->Size(int Bytes)");
	printf("\nchar -> %d",sizeof(char));
	printf("\nshort int ->%d",sizeof(short int));
	printf("\nint ->%d",sizeof(int));
	printf("\nlong int->%d",sizeof(long int));
	printf("\nfloat->%d",sizeof(float));
	printf("\ndouble->%d",sizeof(double));
	printf("\nlong double->%d",sizeof(long double));
	return 0;
}