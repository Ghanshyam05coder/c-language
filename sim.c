#include<stdio.h>
int main()
{
    float u,a,t,v=0;
    printf("enter the u,a,t");
    scanf("%f%f%f\n",&u,&a,&t);
    v=u+a*t;
    printf("%f",v);
    return 0;
}