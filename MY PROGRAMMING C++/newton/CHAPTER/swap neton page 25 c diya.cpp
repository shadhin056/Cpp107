#include <stdio.h>
swapValue (int *x,int *y)
{
    int temp ;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int p,q;
    p=5;
    q=7;
    swapValue(&p,&q);
    printf("p=%d,q=%d",p,q);
}
