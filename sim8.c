#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("he /she is eligible for voting %d",age);
    }
    else
    {
        printf("he / she is not eligible for votting %d",age);
    }
    return 0;
}