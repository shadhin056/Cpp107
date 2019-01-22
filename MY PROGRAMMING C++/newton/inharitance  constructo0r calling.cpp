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
int main()
{
    A a;
    B b;
    return 0;
}
