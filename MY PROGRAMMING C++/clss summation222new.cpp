//clss summation
#include<iostream>
using namespace std;
//summatoon 2nd
class sum
{
//private:
    int a,b,c;
public:
    void input ();
    void calculation();
    void output();
}x;
void sum::input()
{
    cin>>a>>b;
}
void sum::calculation()
{
    c=a+b;
}
void sum::output()
{
    cout<<"sum of a & b="<<c ;
}
int main()
{
    x.input ();
    x.calculation ();
    x.output ();
    return 0;
}
