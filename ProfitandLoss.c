#include<stdio.h>
#include<process.h>
int main()
{
    int sp,cp,profit,loss;
     printf("Enter CostPrice(cp):");
    scanf("%d",&cp);
    printf("Enter SelingPrice(sp):");
    scanf("%d",&sp);
    
    if(sp>cp)
    {
        profit=sp-cp;
        printf("Profit is %d",profit);
    }
    else
    {
        loss=cp-sp;
        printf("Loss is %d",loss);
    }
    printf("\nThankYou");
     system("pause");
    return 0;
}