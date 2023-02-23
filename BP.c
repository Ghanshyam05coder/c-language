#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,fib;
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("%d\n",fib);
    }
    return 0;
}