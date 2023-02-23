// table of given num.
#include<stdio.h>
int main()
{
    int n,ta=0,i;
    printf("enter the num");
    scanf("%d",&n);
    i=1;
    do
    {
        ta=n*i;
        printf("%d\n",ta);
        i++;
    }
    while(i<=10);
    return 0;
}