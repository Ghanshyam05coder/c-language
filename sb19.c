// to print sum of even no from 0-15 use do while.
#include<stdio.h>
int main()
{
    int n,s=0;
    n=0;
    do
    {
        s=s+n;
        printf("%d\n",s);
        n+=2;
    }
    while(n<=15);
    return 0;
}