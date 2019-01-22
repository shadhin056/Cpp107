#include<iostream>
using namespace std;
class ami{
public:
    int a=5;
    int b=6;
int fun();
};
int ami :: fun()
{
    return a*b;
}
int main()
{
    ami obj;
    obj.a=5;
    obj.b=6;
   cout<<obj.fun()<<endl;
   return 0;
}

