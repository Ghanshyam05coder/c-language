// reverse  each digit using do while .
#include<stdio.h>
int main()
{
    int n,digit;
    printf("enter the num");
    scanf("%d",&n);
    do
    {
        digit=n%10;
        printf("%d",digit);
        n=n/10;
    }
    while(n!=0);
    return 0;
}