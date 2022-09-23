//1ST QUESTION

/*C program that will accept 20 values from user and print all entered values and distinct values*/
#include<stdio.h>
#define SZ 20
int main()
{
    int list[SZ],distinctList[SZ],totalDistinct=0,i,j,found,number;
    
	int temp;
    /* accept numbers from user*/
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
    //print 
    //Print original list
    printf("Entered array is:");
    for(i=0;i<SZ;i++)
    printf("%d, ",list[i]);

    
    for(i=0;i<totalDistinct;i++)
    {
       //CODE FOR SORTING(LINEAR SORT)
		for(i=0;i<SZ-1;i++)
		{
			for(j=i+1;j<SZ;j++)
			{
				if(list[i]>list[j])
				{
					//SWAP LIST[i] WITH[j]
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
	}
    printf("\n");
    for(j=1;j<110;j++)
    printf("%c",205);
    printf("\nAscending Order number :");
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