#include<stdio.h>
int main()
{
    float u,a,t,v=0;
    printf("enter the u,a,t");
    scanf("%f%f%f",&u,&a,&t);
    v=u*t+0.5*a*t*t;
    printf("%f",v);
    return 0;

}