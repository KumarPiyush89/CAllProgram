//WACP TO DIVIDE TWO FRACTION NUMBER*/
#include<stdio.h>
int main()
{
	int n1,d1,n2,d2,n3,d3;
	printf("\Enter 1st fraction number(p/q):");
	scanf("%d%*c%d",&n1,&d1);
	//validate entered number
	if(d1==0)
	{
		printf("\nNot a valid number!");
		return 0;
		
	 }
	 //if denominator is -ve
	 if(d1<0)
	 {
	 	n1= n1*-1;
	 	d1= d1*-1;
	  } 
	  printf("Enter 2nd fraction number(p/q):");
	  scanf("%d%*c%d",&n2, &d2);
	  //validate entered number
	  if(d2==0)
	  {
	 printf("\nNot a valid number!");
		return 0;
	  }
	   //if denominator is -ve
	 if(d2<0)
	 {
	 	n2= n2*-1;
	 	d2= d2*-1;
	  } 
	  
	  //calculate result numerator
	  n3=(n1*d2);
	  d3=(d1*n2);
	  //print result
	  printf("\n%d/%d/%d/%d=%d/%d", n1,d1,n2,d2,n3,d3);
	  return 0;
	  
	  
}