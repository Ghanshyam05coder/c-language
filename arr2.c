// #include<stdio.h>
int main()
{
    int i,s=0,avg;
    int num[5]={2,1,3,4,2};
    printf("enter  sum & avg of an  aarray");
    for(i=0;i<5;i++)
    {
        s=s+num[i];
        avg=s/5;
        printf("%d %d\n",s,avg);
    }
    return 0;
}