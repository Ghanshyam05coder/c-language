// to print factorial of given digit.
#include<stdio.h>
int main()
{
    int digit,fa=1,i;
    printf("enter the digit");
    scanf("%d",&digit);
    i=digit;
    do
    {
        fa=fa*i;
        printf("%d\n",fa);
        i--;
    }
    while(i>=1);
    return 0;
}