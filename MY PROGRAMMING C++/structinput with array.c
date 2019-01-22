//string input output arry
#include<stdio.h>
struct shadhin
{
    int a[100];
    float b[100];
    char c[100];
}v;
int main()
{
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
        scanf("%c",&v.c[i]);
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
        printf("%c\n",v.c[i]);
    }
}
