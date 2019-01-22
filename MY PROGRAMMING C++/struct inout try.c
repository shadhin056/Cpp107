//struture in & out

#include<stdio.h>
struct sha
{
    int a,b,c;
    float d,e,f;
    char g,h,i;

}x,y,z;

    int main()
{
    scanf("%d%f%d",&x.a,&x.e,&x.c);
    scanf("%f%d%c",&y.d,&y.b,&y.i);
    scanf("%c%c%f",&z.g,&z.h,&z.f);

    printf("%d%f%d",x.a,x.e,x.c);
    printf("%f%d%c",y.d,y.b,y.i);
    printf("%c%c%f",z.g,z.h,z.f);
}
