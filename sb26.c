#include<stdio.h>
int main()
{
    int i,j;
    for(i=6;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}