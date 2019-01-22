//friend function page 75
#include<iostream>
using namespace std;
class A
{
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
    friend class B;
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
    void GetPrvB1(A &a)
    {
        PrvB1=a.PrvA1+25;
        a.PrvA1=50;
    }
    void showPrvB1(A a)
    {
        cout <<"\n Value of PrvA1="<<a.PrvA1<<"\n";
        cout <<"\n Value of PrvB1="<<PrvB1<<"\n";
    }
};
 int main()
{
    A a1;
    B b1;
        a1.GetPrvA1(30);
        b1.GetPrvB1(a1);
        b1.showPrvB1(a1);
}
