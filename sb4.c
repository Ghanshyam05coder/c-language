// sum of squre of n natural num.
#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the num");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=s+i*i;
        printf("%d\n",s);
        i++;
    }
    return 0;
}