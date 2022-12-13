#include<stdio.h>
int main()
{
    int i=0;
    char name[10][20]={"piyush Kumar","Amit Kumar"};
    for(i=0;i<10;i++)
    {
        printf("<option value[\"%d\"]>%s <option/>",i+1,name[i]);
    }
    /*
    printf("\n<option value=\'1'>Abhishek Kumar</option>");
    printf("\n<option value=\'2'>Sahcin Kumar</option>");
    printf("\n<option value=\'3'>Atul Alam</option>");
    printf("\n<option value=\'4'>Satish Kumar</option>");
    printf("\n<option value=\'5'>Abhay Kumar</option>");
    printf("\n<option value=\'6'>Rakesh Kumar</option>");
    printf("\n<option value=\'7'>Rahul Kumar</option>");
    printf("\n<option value=\'8'>Rakesh Kumar</option>");
    printf("\n<option value=\'9'>Avinash Kumar</option>");
    printf("\n<option value=\'10'>Amit Kumar</option>");
    printf("<option value=\'11'>Piyush Kumar</option>");*/
    return 0;
}
