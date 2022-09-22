#include<stdio.h>
#include<math.h>
int main()
{
	int numbers[10],i,sr,cr,squrt;
    for(i=0;i<10;i++)
    {
    printf("Enter number%d/10:",i+1);
    scanf("%d",&numbers[i]);
    }
		/*find the square root of n*/

 printf("\nSquareroot of numers is as:");
    for(i=0;i<10;i++)
  //  sr=sqrt(i);
    printf("%d, ", sqrt((double)numbers[i]));
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	
	
	int i;
	int sr;
	printf("Enter any number: ");
	scanf("%d",&n);
	/*find the square root of n*/
/*
 printf("\nSquareroot of numers is as:");
    for(i=0;i<10;i++)
  //  sr=sqrt(i);
    printf("%d, ", sqrt((double)numbers[i]));



	sr=sqrt(n);
	printf("\nSquare root=%d",sr);
	return 0;
	
}




/*
/* WRITE A C PROGRAM THAT WILL ACCEPT ANY 10 INTEGER NUMBERS FROM USER AND PRINT THE ALL ENTERED NUMBER WITH ITS 
SQUARE, SQUAREROOT, CUBEROOT
*/
/*#include<stdio.h>
int main(){
    int numbers[10],i,sr,cr;
    for(i=0;i<10;i++)
    {
    printf("Enter number%d/10:",i+1);
    scanf("%d",&numbers[i]);
    }
    // FIND SQUARE
    printf("%d, ",i*numbers[i]);
    //find SQUAREROOT
    sr=squrt[i];
    printf("\n=%d, ",sr);
    system("pause");
    return 0;
    
}

*/