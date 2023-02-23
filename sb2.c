// sum of 10 natural number.
#include<stdio.h>
int main()
{
    int n, s=0;
    n=1;
    while(n<=10)
    {
        s=s+n;
        printf("%d\n",s);
        n++;
    }
    return 0;
}