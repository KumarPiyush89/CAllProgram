/* Accessing structure member using pointer*/
#include<stdio.h>
struct Person
{
    char name[30];
    int age;
    int weight;
};

int main()
{
    struct Person p={"Kundan Gupta",21,42};
    struct Person *ptr;

    printf("\n Name=%s",p.name);
    printf("\nage=%d",p.age);
    printf("\n weight=%d",p.weight);

    ptr=&p;

    printf("\n\nName=%s",(*ptr).name);
    printf("\n age=%d",(*ptr).age);
    printf("\n weight=%d",(*ptr).weight);

    printf("\n\n Name=%s",ptr->name);
    printf("\n age=%d",ptr->age);
    printf("\n weight=%d",ptr->weight);
    return 0;


}