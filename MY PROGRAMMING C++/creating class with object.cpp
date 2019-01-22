#include<iostream>
using namespace std;
class ami{
public:
    int a=5;
    int b=6;


};

int main()
{
    ami obj;
    obj.a=5;
    obj.b=6;
   int c =(obj.a*obj.b);
   cout<<c<<endl;
   return 0;
}

