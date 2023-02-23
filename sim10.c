#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("A is greter %d",a);
            }
            else
            {
                printf("D is greter %d",d);
            }
        }
    }
    else
    if(b>c)
    {
        if(b>d)
        {
            printf("B is greter %d",b);
        }
        else
        {
            printf("D is greter",d);
        }
    }
    else
    if(c>d)
    {
        printf("C is greter",c);
    }
    else
    {
        printf("D is greter %d",d);
    }
    return 0;
}