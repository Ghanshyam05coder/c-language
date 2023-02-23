// sum of two number using as globale variable .
int x,y=5;
#include<stdio.h>
int main()
{
    x=5;
    func();
}
func()
{
    int sum;
    sum=x+y;
    printf("%d",sum);
}