// to display element on the screen.
#include<stdio.h>
int main()
{
    int marks[5]={45,46,66,36,25};
    int i;
    printf("content of an array");
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }
    return 0;
}