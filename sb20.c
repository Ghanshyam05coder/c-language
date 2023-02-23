// to print squre root of 1-10.
#include<stdio.h>
int main()
{
    int n;
    float sq=0;
    n=1;
    do
    {
        sq=sqrt(n);
        printf("%f\n",sq);
        n++;
    }
    while(n<=10);
    return 0;
}
    