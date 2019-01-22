//member function and dot operator
#include<iostream>
using namespace std;
class sample {
public:
    void funca()
    {
        cout <<"this is function funca()";
    }

    void funcb()
    {
        cout <<"\nfuncb() is calling funca\n\t";
        funca();
    }
};
int main()
{
    sample samp;
    samp.funca();
    samp.funcb();
}
