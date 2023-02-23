// calculate table of num.
#include<stdio.h>
int main()
{
    int n,t=0,i;
    printf("enter the num");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        t=n*i;
        printf("%d\n",t);
        i++;
    }
    return 0;
}