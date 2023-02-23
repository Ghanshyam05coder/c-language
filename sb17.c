//reverse each digit to check the num of polidrone.
#include<stdio.h> 
int main()
{
    int n,dig,rev=0,temp;
    printf("enter the num");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        printf("%d",rev);
        n=n/10;
    }
    if(rev==temp)
    {
        printf("its polindrone");
    }
    else
    {
        printf("not polindrone");
    }
    return 0;
}