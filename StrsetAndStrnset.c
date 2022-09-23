/*strset() and strnset() Example*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[50],s4[50],s5[50];
    printf("Enter Any String:");
    gets(s1);
    strcpy(s2,s1);
    strset(s2,'*');
    printf("\ns1=%s,s2=%s",s1,s2);
    strcpy(s3,s1);
    strset(s3+2,'*');
    printf("\ns3=%s",s3);
    strcpy(s4,s1);
    strnset(s4,'*',7);
    printf("\ns4=%s",s4);
    return 0;
}