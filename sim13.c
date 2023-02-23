#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float res=0;
    printf("enter the option");
    scanf("%d",&n);
    printf("enter the num");
    scanf("%d",&a);
    if(n==1)
    {
        res=a*a;
        printf("%f",res);
    }
    else if(n==2)
    {
        res=a*a*a;
        printf("%f",res);
    }
    else if(n==3)
    {
        res=sqrt(a);
        printf("%f",res);
    }
    else
    {
        printf(" worng choice");

    }
    return 0;
}