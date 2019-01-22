//swap neton page 25.cpp
#include <iostream>
using namespace std;
int swapValue(int &x,int &y)
{
    int temp ;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int p,q;
    p=5;
    q=7;
    swapValue(p,q);
    cout <<"p="<<p<<",q="<<q<<endl;
}
