//to print sum of each digit in reverse order.
#include<stdio.h>
int main()
{
    int n,digit,s=0;
    printf("enter the num");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        s=s+digit;
        printf("%d\n",s);
        n=n/10;
    }
    return 0;
}