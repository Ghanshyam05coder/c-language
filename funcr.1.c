// find factorial of given number .
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",fa(n));
    return 0;
}
fa (n)
int n;
{
    int val=n;
    if(n==1)
    return (val);
    else 
    val=val*fa(n-1);
    return (val);
} 