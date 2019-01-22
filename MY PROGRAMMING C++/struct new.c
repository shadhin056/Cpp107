//struct new
#include<stdio.h>
struct shadhin
{
    int a;
    float b;
    char c;
};

int main()
{
    struct shadhin v;
    v.a=5;
    v.b=5.5;
    v.c=getchar();
    printf("%d\n%f\n%c",v.a,v.b,v.c);
}
