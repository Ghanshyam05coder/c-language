//to print student display.
#include<stdio.h>
int main()
{
    struct student
    {
        int rn;
        char name[5];
        int age;
    };
    struct student class={10,"name",20};
    printf("content of structure");
    printf("rn%d",class.rn);
    printf("name%c",class.name);
    printf("age%d",class.age);
    return 0;
    
}