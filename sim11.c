#include<stdio.h>
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("one");
    }
    else if(n==2)
    {
        printf("two");
    }
    else if(n==3)
    {
        printf("three");
    }
    else if(n==4)
    {
        printf("four");
    }
    else
    {
        printf("worng choice");
    }
    return 0;
}