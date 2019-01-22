//string input output arry

#include<stdio.h>
struct shadhin
{
    int a[100];
    float b[100];
    char c[100];
};
int main()
{
    struct shadhin v;
    int i;

    for (i=0;i<2;i++)
    {
        scanf("%d",&v.a[i]);
    }
    for (i=0;i<2;i++)
    {
        scanf("%f",&v.b[i]);
    }
    for (i=0;i<2;i++)
    {
        scanf("%s",&v.c[i]);
    }
//************************************************
    for (i=0;i<2;i++)
    {
        printf("%d\n",v.a[i]);
    }
    for (i=0;i<2;i++)
    {
        printf("%f\n",v.b[i]);
    }
    for (i=0;i<2;i++)
    {
        printf("%s\n",v.c[i]);
    }
};
