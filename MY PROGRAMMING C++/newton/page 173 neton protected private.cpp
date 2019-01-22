#include<iostream>
using namespace std;
class base
{
    int b1;
    protected:
    int b2;
    public:
    int  b3;
    base()
    {
        b1=10;
        b2=10;
        b3=10;
    }
    void showBaseMemValue()
    {
        cout<<b1<<","<<b2<<","<<b3<<endl;
    }
};
class derived : public base
{
    public :
    void ChangeBaseMemValue()
    {
        b2=20;
        b3=20;
    }
};
int main()
{
    base b1;
    derived d1;
    b1.showBaseMemValue();
    d1.ChangeBaseMemValue();
    d1.showBaseMemValue();
}
