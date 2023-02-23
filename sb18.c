//to print even no from 1-15 use do while.
#include<stdio.h>
int main()
{
    int n;
    n=0;
    do
    {
        printf("%d\n",n);
        n=n+2;
    }
    while(n<=10);
    return 0;
}