/*WACP that accept the age and weight of a person and print the person is eligible to donate blood or not.
To donate blood person should be 18to55 years old and his/her weight should be between 45  and 80 kg*/ 
#include<stdio.h>
int main()
{
	int age,weight;
	printf("Enter the age of a person:");
	scanf("%d",&age);
	printf("\nEnter the weight of a person:");
	scanf("%d",&weight);
	
	    if(age>=18&&age<=55)
	   	 {
			if(weight>=45&&weight<=80)
			printf("\nyou can donate a blood");
			else
			printf("\nyou cannot donate a blood");
	    }
		else
		{
		printf("\nyou cannot donate a blood");
	    }
	return 0;
}
