/* WACP THAT WILL ACEPT THE AGE AND WEIGHT OF A PERSON AND PRINT THE PERSON IS ELIGIBLE TO DONATE BLOOD OR NOT.
TO DONATE BLOOD PERSON SHOULD BE 18-55 YEARS OLD HIS/HER WEIGHT SHOULD BE BETWEEN 45 AND 80 KG.
*/
 
 #include<stdio.h>
 #include<process.h>
 int main()
 {
 	int age,weight;
 	printf("Accept person age:");
 	scanf("%d",&age);
 	printf("Accept person weight:");
 	scanf("%d",&weight);
 	if(age>=18)
 	{ 
 		if(age<=55)
 		{
 			if(weight>=45)
			 {
			 	if(weight<=80)
				{
				printf("person is eligiable to donate blood");
				}
			else
				{
				printf("weight is not less than or equal to 80");
				printf("\nperson is not eligible to donate blood");
				}	
				}
			else
				{
				printf("weight is not gratter than or equal to 45");
				printf("\nperson is not eligible to donate blood");
				}
				}
			else
				{
				printf("age is not less than or equal to 55");
				printf("\nperson is not eligible to donate blood");
				}
				}
			else
				{
				printf("age is not gratter than or equal to 18");
				printf("\nperson is not eligible to donate blood");
				}
	return 0;
}