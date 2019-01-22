// no return no argument

#include<stdio.h>
void sum()
{
    int a,b,c;
    printf("enter number=");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
int main()
{
    sum();
    return 0;
}
