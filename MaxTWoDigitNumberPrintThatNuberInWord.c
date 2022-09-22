 /*WRITE A C PROGRAM THAT WILL ACCEPT  MAX TWO DIGIT NUMBER AND PRINT THAT NUMBER IN WORD*/

#include<stdio.h>

 int main()
{
	int N,upd,tpd;
	printf("Enter anny number.");
	scanf("%d",&N);

    if(N==0)
    printf("ZERO.");
	else if(N==1)
	printf("ONE.");
	else if(N==2)
	printf("TWO.");
	else if(N==3)
	printf("THREE.");
	else if(N==4)
	printf("FOUR.");
	else if(N==5)
	printf("FIVE.");
	else if(N==6)
	printf("SIX");
	else if(N==7)
	printf("SEVEN.");
	else if(N==8)
	printf("EIGHT.");
	else if(N==9)	
	printf("NINE.");

	else if(N==10)
	printf("TEN.");
	else if(N==11)
	printf("ELEVEN ");
	else if(N==12)
	printf("TWELVE ");
	else if(N==13)
	printf("THIRTEEN ");
	else if(N==14)
	printf("FOURTEEN ");
	else if(N==15)
	printf("FIFTEEN ");
	else if(N==16)
	printf("SIXTEEN ");
	else if(N==17)
	printf("SEVENTEEN ");
	else if(N==18)
	printf("EIGHTEEN ");
	else if(N==19)
	printf("NINTEEN ");
else
{
	upd=N%10;
	tpd=N/10;
	

		
	if(tpd==2)
	printf("TWENTY ");
	else if(tpd==3)
	printf("THIRTY ");
	else if(tpd==4)
	printf("FORTY ");
	else if(tpd==5)
	printf("fifty ");
	else if(tpd==6)
	printf("SIXTY ");
	else if(tpd==7)
	printf("SEVENTY ");
	else if(tpd==8)
	printf("EIGHTY ");
	else if(tpd==9)
	printf("NINTY ");
	else

	 if(upd==0) 
	 printf("ZERO.");
	else if(upd==1)
	printf("ONE.");
	else if(upd==2)
	printf("TWO.");
	else if(upd==3)
	printf("THREE.");
	else if(upd==4)
	printf("FOUR.");
	else if(upd==5)
	printf("FIVE.");
	else if(upd==6)
	printf("SIX.");
	else if(upd==7)
	printf("SEVEN.");
	else if(upd==8)
	printf("EIGHT.");
	else if(upd==9)
	printf("NINE.");
}
	return 0;
}


