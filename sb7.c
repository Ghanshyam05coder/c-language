// to print each digit in reverse order.
#include<stdio.h>
int main()
{
    int n,digit;
    printf("enter the num");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        printf("%d",digit);
        n=n/10;
    }
    return 0;
}