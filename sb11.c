// sum of n natural num.
#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("enter the num");
    scanf("%d",&n);
    i=1;
    do
    {
        s=s+i;
        printf("%d\n",s);
        i++;
    }
    while(i<=n);
    return 0;

}