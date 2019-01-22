//private member using

#include<iostream>
using namespace std;
class A
{
private :
   int x,y;
   int a,b;
public :
    void add_xy();
    void add_xyz();

};
void A::add_xy()
{
    a=b=5;
    cout <<"a+b="<<a+b;
}
void A::add_xyz()
{
    a=b=6;
    cout <<"\na+b="<<a+b;
}
int main()
{
    A ob1;
    ob1.add_xy();
    ob1.add_xyz();
}
