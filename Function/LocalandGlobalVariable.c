#include<stdio.h>
//global variable declaration
int x=0;//Here x is global variable
void sheetal();
void anshu();
int main();

void sheetal()
{
    int a=10;//local variable of Sheetal
    printf("\nI am sheetak. I have a local variable named a and its value is %d",a);
    printf("\nI am sheetal. I can access Global variable  x=%d",x);
    a+=50;
    return;
}

void anshu()
{
    int b=50;
    //a=10;
    printf("\nI am anshu.I have a local variable named b and its value is %d",b);
    printf("\nI am anshu. I can access Global variable x=%d",x);
    return;

}
int main()
{
    printf("\nI am main. value of x is %d",x);
    sheetal();
    anshu();
    x=10;
    anshu();
    sheetal();
    
}