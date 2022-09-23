/*C program that will accept 20 values from user and print all entered values and distinct values*/
#include<stdio.h>
#define SZ 20
int main()
{
    int list[SZ],distinctList[SZ],totalDistinct=0,frequency[SZ]={0},i,j,found,number;
    
	int temp;/* accept numbers from user*/
    for(i=0;i<SZ;i++)
    {
        printf("Enter number %d/%d:",i+1,SZ);
        scanf("%d",&list[i]);
    }
    number=list[0];
    // find all distinct numbers /
    for(i=0;i<SZ;i++)
    {
        //find i(th) position number of list is available in distinctList or not
         found=0;
         for(j=0;j<totalDistinct;j++)
         {
             if(list[i]==distinctList[j])
             {
                 found++;
   
             }
         }

        //if not found then add it to distinct list at last
        if(found==0)
        {
        distinctList[totalDistinct]=list[i];
        totalDistinct++;
        }
    }

    //find  frequency
    for(i=0;i<totalDistinct;i++)
    {
        //find the frequency of distinctList[i] and store it in frequency[i]
        for(j=0;j<SZ;j++)if(distinctList[i]==list[j])frequency[i]++;
    }


    //print 
    //Print original list
    printf("Entered array is:");
    for(i=0;i<SZ;i++)
    printf("%d, ",list[i]);

    
   //print distinct array
    printf("\nNumber\tFrequency\n______________________________________");
    for(i=0;i<totalDistinct;i++)
    {
        printf("\n%6d\t",distinctList[i]);
        for(j=0;j<frequency[i];j++)printf("*");
        printf(" (%d)",frequency[i]);
   
	}
    
    printf("\nData Entered by you are:");
    for(i=0;i<SZ;i++)
	{
	    printf("%d",list[i]);
	    if(i<SZ-2)
	    printf(", ");
	    else if(i==SZ-2)
	    printf(" and ");
	    else
	    printf(" |");
	    
	}
    printf("\nThank you\n");
    system("pause");
    return 0;
}