//to print fibbonocci series given step using function.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the step");
    scanf("%d",&n);
    temp=fib(n);
    printf("%d",temp);
    return 0;
}
    fib(n)
    int n;
    {
        int a=0,b=1,fib,i;
        for(i=1;i<=n;i++)
        fib=a+b;
        a=b;
        b=fib;
        printf("%d",fib);
       
    }
