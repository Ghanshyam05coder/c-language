//to print factorial using do while.
#include<stdio.h>
int main()
{
    int n,fa=1,i;
    printf("enter the num");
    scanf("%d",&n);
    i=n;
    do
    {
        fa=fa*i;
        printf("%d\n",fa);
        i--;
    }
    while(i>=1);
    return 0;
}