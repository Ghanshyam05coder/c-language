// to calculate sum of array element.
#include<stdio.h>
int main()
{
    int i,sum=0;
    int num[5]={2,1,3,4,2};
    printf("enter sum of an array");
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
        printf("%d\t",sum);
    }
    return 0;
} 