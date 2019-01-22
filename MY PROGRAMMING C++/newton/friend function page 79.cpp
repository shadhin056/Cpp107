//friend function page 79
#include<iostream>
using namespace std;
class A;
class B
{   private :
    int PrvB1;
public :
    B()
    {PrvB1=0;}
    void GetPrvB1(int x)
    {PrvB1=x;}
    void showPrvB1(A a);
};
class A
{   int PrvA1;
public:
    A()
    {PrvA1=0;}
    void GetPrvA1(int x)
    {PrvA1=x;}
    friend void B:: showPrvB1(A a);
};
void B :: showPrvB1(A a)
{cout << "\n value of prvA1="<<a.PrvA1<<"\n";
    cout << "\n value of PrvB1="<<PrvB1<<"\n";
}
int main()
{   A a1;B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(50);
    b1.showPrvB1(a1);
}

