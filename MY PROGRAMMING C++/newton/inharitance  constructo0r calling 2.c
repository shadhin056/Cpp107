// inharitance  constructo0r calling
#include<iostream>
using namespace std;
class A
{
    public :
    A()
    {
        cout<<"CC-A    \n";
    }
    ~A()
    {
        cout<<"DC-A    \n";
    }
};
class B : public A
{
    public :
    B()
    {
        cout <<"CC-B   \n";
    }
    ~B()
    {
        cout <<"DC-B   \n";
    }
};
class C : public B
{
    public :
    C()
    {
        cout <<"CC-C   \n";
    }
    ~C()
    {
        cout <<"DC-C   \n";
    }
};

int main()
{
    A a;
    B b;
    C c;
    return 0;
}
