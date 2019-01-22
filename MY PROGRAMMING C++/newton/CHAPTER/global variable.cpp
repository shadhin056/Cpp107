//global variable
#include<stdio.h>
int a;
int global()
{
    printf("enter a=");
    scanf("%d",a);
    return a;
}
int main()
{
    int b=10;
    printf("%d",b);
    printf("%d",global());
}
