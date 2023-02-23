#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greter %d",a);
        }
        else
        {
            printf("c is greter %d",c);
        }
    }
    else
    if(b>c)
    {
        printf("b is greter %d",b);
    }
    else
    {
        printf("c is greter %d",c);
    }
        return 0;
}