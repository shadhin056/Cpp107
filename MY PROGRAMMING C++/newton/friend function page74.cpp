//friend function
#include<iostream>
using namespace std;
class A
{
public:
    int PrvA1;
public :
    A()
    {
        PrvA1=0;
    }
    void GetPrvA1(int x)
    {
        PrvA1=x;
    }
    void showPrvA1()
    {
        cout <<"\nvalue of of PrvA1="<<PrvA1<<"\n";
    }
};
class B
{
private :
    int PrvB1;
public:
    B()
    {
        PrvB1=0;
    }
    void GetPrvB1(A a)
    {
        PrvB1=a.PrvA1;
    }
    void showPrvB1()
    {
        cout <<"\n Value of PrvB1="<<PrvB1<<"\n";
    }
};
 int main()
{
    A a1;
    B b1;
        a1.GetPrvA1(30);
        b1.GetPrvB1(a1);
        a1.showPrvA1();
        b1.showPrvB1();
}
