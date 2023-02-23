#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the  a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("A large%d",a);
            }
            else
            {
                printf("D is large %d",d);
            }
        }
    }
    else
    if(b>c)
    {
        if(b>d)
        {
            printf("B is large %d",b);
        }
        else
        {
            printf("D is large %d",d);
        }
    }
    else
    if(c>d)
        {
            printf("C is large %d",c);
        }
        else
        {
            printf("D is large %d\n",d);
        }
    return 0;
}