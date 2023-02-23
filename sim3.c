#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1=0,r2=0,di=0;
    printf("enter the a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    di=sqrt(b*b-4*a*c);
    r1=-b+di/2*a;
    r2=-b-di/2*a;
    printf("%f%f",r1,r2);
    return 0;
}