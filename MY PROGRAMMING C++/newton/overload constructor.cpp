//overload constructor

#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public :
    A()
    {
       a=0;
       b=0;
       c=0;
     }
    A(int x)
    {
        a=x;
        cout<< a<<"\n" ;
    }
    A(int x,int y)
    {
        a=x;
        b=y;
        cout<< a <<"\n"<< b <<"\n" ;
    }
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        cout<< a <<"\n"<< b <<"\n"<< c <<"\n";
    }
};
int main()
{
    A a1(10),b1(20,200),c1(30,40,50);
}
