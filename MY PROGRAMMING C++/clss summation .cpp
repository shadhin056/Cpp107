//clss summation
#include<iostream>
using namespace std;
class sum
{
//private:
    int a,b,c;
public:
    void input ();
    void output();
}x;

void sum::input()
{
    cin>>a>>b;
}
void sum::output()
{
    c=a+b;
    cout<<"sum of a & b="<<c ;
}
int main()
{
    x.input();
    x.output();
    return 0;
}
