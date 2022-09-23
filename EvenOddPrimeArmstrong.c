/* C Program that will accept 20 numbers from user and find all even,odd and prime numbers*/
#include<stdio.h>
#include<process.h>
#define S 10
int main()
{
	int data[S],evens[S],odds[S],primes[S],totalEvens=0,totalOdds=0,totalPrimes=0,i,j,isPrime,a,largestNumber,smallestNumber;
	
	//accept data from user
	
	for(i=0;i<S;i++)
	{
		printf("Enter number %d/%d:",i+1,S);
		scanf("%d",&data[i]);
	}
	
	//find all even odd and prime numbers
	for(i=0;i<S;i++)
	{
		//check data[i]
		if(data[i]%2==0)
		{
			//number is even So add it to evens list
			evens[totalEvens]=data[i];
			totalEvens++;
			if(data[i]==2)
			{
				//add it to primes list
				primes[totalPrimes]=2;
				totalPrimes++;
			}
		}
		else
		{
			//number is odd So add it to odds list
			odds[totalOdds]=data[i];
			totalOdds++;
			//now check the corrent odd number is prime or not
			isPrime=1;
			for(j=2;j<=data[i]/2;j++)
			{
				if(data[i]%j==0)
				{
					isPrime=0;
					break;
				}
			}
			if(isPrime==1)
			{
				//data[i] is prime So add it to prime list
				primes[totalPrimes]=data[i];
				totalPrimes++;
			}
		}
	}
	
	system("cls");
	printf("All numbers entered by you are:");
	for(i=0;i<S;i++)
	{
		printf("%d",data[i]);
		//print seperator if nre 2nd last is prinrint rator, if 2nd last number is printed then print 'and' as seperator 
		//and if last number is printed the print no seperator
		if(i<S-2)//before 2nd last number is printed
		printf(", ");
		else if(i==S-2)//that means 2nd last number is printed
		printf(" and ");	
	}
	printf("\n");
	for(a=0;a<80;a++)
	printf("%c",220);
	
	
	//print all even numbers
	if(totalEvens==0)
	printf("\nThere is NO even number in list.");
	else if(totalEvens==1)
	printf("\nThere are only one even number in list i.e. %d",evens[0]);
	else
	{
		printf("\nThere are %d even numbers in list that are:",totalEvens);
		for(i=0;i<totalEvens;i++)
		{
			printf("%d",evens[i]);
			//print seperator
			if(i<totalEvens-2)
			printf(", ");
			else if(i==totalEvens-2)
			printf(" and ");
			
		}
		
	}
	largestNumber=evens[0];
	for(i=1;i<totalEvens;i++)
	{
		if(evens[i]>largestNumber)
		{
			largestNumber=evens[i];
		}
	}
	smallestNumber=evens[0];
	for(i=1;i<totalEvens;i++)
	{
		if(evens[i]<smallestNumber)
		{
			smallestNumber=evens[i];
		}
	}
	printf("\nThe smallestNumber is %d and The largestNumber is %d",smallestNumber,largestNumber);
	
	
	printf("\n");
	for(a=0;a<80;a++)
	printf("%c",220);
	
	
	//print all odd numbers
	if(totalOdds==0)
	printf("\nThere is NO Odd number in list");
	else if(totalOdds==1)
	printf("\nThere are only one Odd number in list i.e. %d",odds[0]);
	else
	{
		printf("\nThere are %d Odd numbers in list that are:",totalOdds);
		for(i=0;i<totalOdds;i++)
		{
			printf("%d",odds[i]);	
			//print seperator
			if(i<totalOdds-2)
			printf(", ");
			else if(i==totalOdds-2)
			printf(" and ");
		}
		
	}
	largestNumber=odds[0];
	for(i=1;i<totalOdds;i++)
	{
		if(odds[i]>largestNumber)
		{
			largestNumber=odds[i];
		}
	}
	smallestNumber=odds[0];
	for(i=1;i<totalOdds;i++)
	{
		if(odds[i]<smallestNumber)
		{
			smallestNumber=odds[i];
		}
	}
	printf("\nThe smallestNumber is %d and The largestNumber is %d",smallestNumber,largestNumber);
	printf("\n");
	for(a=0;a<80;a++)
	printf("%c",220);
	
	
	//print all prime numbers
	if(totalPrimes==0)
	printf("\nThere is NO Prime number in list");
	else if(totalOdds==1)
	printf("\nThere are only one Prime number in list i.e. %d",primes[0]);
	else
	{
		printf("\nThere are %d Prime numbers in list that are:",totalPrimes);
		for(i=0;i<totalPrimes;i++)
		{
			printf("%d",primes[i]);	
			//print seperator
			if(i<totalPrimes-2)
			printf(", ");
			else if(i==totalPrimes-2)
			printf(" and ");
			
		}
	}
	
largestNumber=primes[0];
	for(i=1;i<totalPrimes;i++)
	{
		if(primes[i]>largestNumber)
		{
			largestNumber=primes[i];
		}
	}
	smallestNumber=primes[0];
	for(i=1;i<totalPrimes;i++)
	{
		if(primes[i]<smallestNumber)
		{
			smallestNumber=primes[i];
		}
	}
	printf("\nThe smallestNumber is %d and The largestNumber is %d",smallestNumber,largestNumber);
	

	printf("\n");
	for(a=0;a<80;a++)
	printf("%c",220);
	
	printf("\nThank you\n");
	system("pause");
	return 0;
	
}