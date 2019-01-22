//clss summation
#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b,c;
    void input ();
public:
    void output();
}x;

void sum::input()
{
    cin>>a>>b;
    c=a+b;
    cout<<"sum of a & b="<<c ;
}
void sum::output()
{
    input ();
}
int main()
{
    //x.input();
    x.output();
    return 0;
}
