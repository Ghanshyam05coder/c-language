#include<stdio.h>
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("n is even%d",n);
    }
    else
    {
        printf("n is odd %d",n);
    }
    return 0;
}