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
    scanf("%d%d%d",&x.a,&x.b,&x.c);
    scanf("%f%f%f",&y.d,&y.e,&y.f);
    scanf("%c%c%c",&z.g,&z.h,&z.i);

    printf("%d%d%d",x.a,x.b,x.c);
    printf("%f%f%f",y.d,y.e,y.f);
    printf("%c%c%c",z.g,z.h,z.i);
}
