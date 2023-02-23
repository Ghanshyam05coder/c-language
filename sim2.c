#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,n,ci=0;
    printf("enter the p,r,n");
    scanf("%f%f%f",&p,&r,&n);
    ci=p*pow((1+r/100),n)-1;
    printf("%f",ci);
    return 0;
    }