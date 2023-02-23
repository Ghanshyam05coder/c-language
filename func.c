// to print squre of given steps using a function.
#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("enter the steps");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        temp=squre(i);
        printf("%d\t",temp);
    }
    return 0;
}
squre(m)
int m;
{
    int value;
    value=m*m;
    return (value);
}
    