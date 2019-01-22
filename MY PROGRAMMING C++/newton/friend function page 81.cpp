//friend function page 81
#include<iostream>
using namespace std;
class B;
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
    friend void ShowPrvValue(A a,B b);
};
class B
{
    int PrvB1;
public :
    B()
    {
        PrvB1=0;
    }
    void GetPrvB1(int X)
    {
        PrvB1=X;
    }
    friend void ShowPrvValue(A a,B b);
};
void ShowPrvValue(A a,B b)
{
    cout<<"\n value of prvA1="<<a.PrvA1<<"\n";
    cout<<"\n value of prvB1="<<b.PrvB1<<"\n";
}
int main()
{
    A a1;
    B b1;
    a1.GetPrvA1(50);
    b1.GetPrvB1(70);
    ShowPrvValue(a1,b1);
}
