// to print factorial of given number using function.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the num");
    scanf("%d",&n);
    temp=factorial(n);
    printf("%d",temp);
    return 0;
}
factorial (n)
int n;
{
    int i,value=1;
    if(n==1)
    return(value);
    else
    {
        for(i=1;i<=n;i++)
        value=value*i;
        return(value);
        
    }
}