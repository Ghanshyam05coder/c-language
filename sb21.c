// to print fibonocci seriese.
#include<stdio.h>
int main()
{
    int a=0,b=1,n,fib,i;
    printf("enter the num");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("%d\n",fib);
    }
    return 0;
}