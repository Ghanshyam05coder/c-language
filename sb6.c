// To print factorial of given num.
#include<stdio.h>
int main()
{
    int n,fa=1,i;
    printf("enter the num");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        fa=fa*i;
        printf("%d\n",fa);
        i--;
    }
    return 0;
}
