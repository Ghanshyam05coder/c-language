// to print sum of n natural num using function.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the step");
    scanf("%d",&n);
    temp=sum(n);
    printf("%d",temp);
    return 0;
}
sum(n)
int n;
{
    int s=0,i;
    for(i=1;i<=n;i++)
    s=s+i;
    return (s);
}
