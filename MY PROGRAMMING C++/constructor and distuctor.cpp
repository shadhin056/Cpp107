
#include<stdio.h>
#include<iostream>
using namespace std;
class a{
int aa;
int bb;
public:
   // void set(int h,int w);
    int area()
    {
        return aa*bb;
    }
    a(int h,int w);
    ~a();
};
a::a(int h,int w)
{
    aa=h;
    bb=w;
    cout<<"constructor"<<area()<<endl;
}
a::~a()
{
    cout<<"\ndistructor"<<area()<<endl;
}
int main()
{
    a obj(5,6),obj1(4,3);

    cout<<obj.area();
    return 0;
}
