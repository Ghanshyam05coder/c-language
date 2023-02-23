// sum of n natural num.
#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("enter the num");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=s+i;
        printf("%d\n",s);
        i++;
    }
    return 0;
}