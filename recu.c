//sum of n non negative integer number using recoursing.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the step");
    scanf("%d",&n);
    printf(" %d \n ",sum(n));
    return 0;
}
sum(n) /*recursing function*/
int n;
{
    int val;
    if(n==0)
    return(val);
    else
    val=val+sum(n-1);
    return (val);
}

