//using 2 class calling page 58.cpp

#include<iostream>
using namespace std;
class A
{
public:
    void funcA1()
    {
        cout <<"\n this is function A1() in class A\n";
    }

    void funcA2()
    {
        cout <<"\n this is function A2() in class A\n";
    }
};
class B {
A a1; //CREATING OBJECT OF A
public :
    void funcB1()
    {
        cout <<"\n this is funcB1 in class B calling funA1() from class A:\n";
        a1.funcA1();
    }
    void funcB2()
    {
        cout <<"\n this is funcB2() in class B\n";
    }
};
int main()
{
    B b1;
    b1.funcB1();
}
