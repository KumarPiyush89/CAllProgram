// write a c program to check a number or not

#include<stdio.h>
int main()
{
	int n,c,p;
	printf("Enter any number in n.");
	scanf("%d",&n);
	c=2;
	//flag p
	p=0;
	while
	(c<=n/2&&p==0)
	{
	if(n%c==0)
	
		p=1;
	
	c=c+1;
	}
	if
	(p==0)
	
		printf("%d is prime number",n);
	
	else
	printf("%d is not prime number",n);
	
	return 0;
}


/*C program to check A number is prime or not*/
/*#include<stdio.h>
#include<process.h>
int main()
{
	int n,i,f,c,t,min;
	printf("Enter minimum range:");
	scanf("%d",&min);
	if(min<0)
	min*=-1;
	
	if(min==1)min=2;
	
	printf("Enter Max Range:");
	scanf("%d",&t);
	if(t<0)
	t*=-1;
	
	if(min>t)
	{
		i=min;
		min=t;
		t=i;		
	}	
	
	printf("\nAll prime numbers between %d and %d are as:\n",min,t);
	
	for(i=1;i<120;i++)printf("%c",205);
	
	printf("\n");
	c=0;
	for(n=min;n<=t;n++)
	{
	
	//code for check n is prime or not
	f=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		f=1;
	}
	if(f==0)
	{
	
	printf("%d,",n);
	c++;
}
	
	}
	printf("\n");
	for(i=1;i<120;i++)printf("%c",205);
	
	printf("\n\t\t\t\t\t Total:%d",c);
	
	printf("\n");
	for(i=1;i<120;i++)printf("%c",205);
	
	printf("\n");
	system("pause");
	return 0;
}*/