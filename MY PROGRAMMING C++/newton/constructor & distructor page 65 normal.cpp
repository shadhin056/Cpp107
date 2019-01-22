// constructor & distructor page 65
#include<iostream>
using namespace std;
class sample
{
public:
    sample ()
    {
        cout <<"\nsms";
    }
    ~sample ()
    {
        cout <<"\nsms destructor ";
    }
};
void funcA(void )
{
    cout <<"\ncsampel object";
    sample v;
}
int main(void)
{
    sample v;
    funcA();
}
