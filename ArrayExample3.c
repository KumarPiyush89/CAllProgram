/*WRITE A C PROGRAM THAT WILL ACCEPT EIGHT NUMBER AND PRINT LARGEST NUMBER*/
#include<stdio.h>
int main()
{
	int n[8],i;
	for(i=0;i<8;i++)
	{
	printf("Enter number %d/8:",i+1);
	scanf("%d%*c",&n[i]);
	}
	
	if(n[0]>n[1]&&n[0]>n[2]&&n[0]>n[3]&&n[0]>n[4]&&n[0]>n[5]&&n[0]>n[6]&&n[0]>n[7])	printf("\n%d is largest number",n[0]);
	else if(n[1]>n[2]&&n[1]>n[3]&&n[1]>n[4]&&n[1]>n[5]&&n[1]>n[6]&&n[1]>n[7]) printf("\n%d is largest number",n[1]);
	else if(n[2]>n[3]&&n[2]>n[4]&&n[2]>n[5]&&n[2]>n[6]&&n[2]>n[7]) printf("\n%d is largest number",n[2]);
	else if(n[3]>n[4]&&n[3]>n[5]&&n[3]>n[6]&&n[3]>n[7])	 printf("\n%d is largest number",n[3]);
	else if(n[4]>n[5]&&n[4]>n[6]&&n[4]>n[7]) printf("\n%d is largest number",n[4]);
	else if(n[5]>n[6]&&n[5]>n[7]) printf("\n%d is largest number",n[5]);
	else if(n[6]>n[7])  printf("\n%d is largest number",n[6]);
	else 	   printf("\n%d is largest number",n[7]);
  
	printf("\nThank You");
	return 0;
}



/*WRITE A C PROGRAM THAT WILL ACCEPT NINE NUMBER AND PRINT LARGEST NUMBER*/
 
 /*#include<stdio.h>
int main()
{
	int n[9],i;
	for(i=0;i<9;i++)
	{
	printf("Enter number %d/9:",i+1);
	scanf("%d%*c",&n[i]);
	}
	
	if(n[0]>n[1]&&n[0]>n[2]&&n[0]>n[3]&&n[0]>n[4]&&n[0]>n[5]&&n[0]>n[6]&&n[0]>n[7]&&n[0]>n[8])	printf("\n%d is largest number",n[0]);
	else if(n[1]>n[2]&&n[1]>n[3]&&n[1]>n[4]&&n[1]>n[5]&&n[1]>n[6]&&n[1]>n[7]&&n[1]>n[8]) printf("\n%d is largest number",n[1]);
	else if(n[2]>n[3]&&n[2]>n[4]&&n[2]>n[5]&&n[2]>n[6]&&n[2]>n[7]&&n[2]>n[8]) printf("\n%d is largest number",n[2]);
	else if(n[3]>n[4]&&n[3]>n[5]&&n[3]>n[6]&&n[3]>n[7]&&n[3]>n[8])	 printf("\n%d is largest number",n[3]);
	else if(n[4]>n[5]&&n[4]>n[6]&&n[4]>n[7]&&n[4]>n[8]) printf("\n%d is largest number",n[4]);
	else if(n[5]>n[6]&&n[5]>n[7]&&n[5]>n[8]) printf("\n%d is largest number",n[5]);
	else if(n[6]>n[7]&&n[6]>n[8])  printf("\n%d is largest number",n[6]);
	else if(n[7]>n[8])	   printf("\n%d is largest number",n[7]);
	else            printf("\n%d is largest number",n[8]);  
	printf("\nThank You");
	return 0;
}
*/