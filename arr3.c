// to arrange array element in asending order.
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int num[50];
    printf("how many num are in an array");
    scanf("%d",&n);
    printf("enter an array element");
    for(i=0;i<=n-1;i--)
    {
        scanf("%d",&num[i]);
    }
    printf("unsorted element");
    for(i=1;i<n-1;i++)
    {
        printf("%d",num[i]);

    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        if(num[i]<num[j])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }
        printf("sorted array");
        for(i=0;i<=n-1;i++)
        {
            printf("%d",num[i]);
        }
    return 0;
}
