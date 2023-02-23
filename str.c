#include<stdio.h>
int main()
{
    struct student
    {
        int rn;
        char name[5];
        int age;
        float weight;
        float height;
    };
    static struct student class [4]={
        {100, "vivek" ,22,40.3,5.4},
        {101, "shyam" ,25,45.2,5.3},
        {102, "omkar" ,23,50.3,5.5},
        {103, "gopal" ,27,50.1,5.2},
    };
    int i;
    for(i=0;i<=3;i++)
    {
        printf("roll no=%d",class[i].rn);
        printf("name=%c",class[i].name);
        printf("age=%d",class[i].age);
        printf("weight=%f",class[i].weight);
        printf("height=%f",class[i].height);
        printf(" \n ");
    }
    return 0;
    }
