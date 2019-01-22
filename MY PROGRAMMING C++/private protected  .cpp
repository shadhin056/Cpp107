#include<iostream>
using namespace std;
class ami{

    int a=5;
    int b=6;
    public:
  int fun();
  void cal(int h,int w);

};
int ami :: cal(int h,int w)
{
    a=h;
    b=w;
    return a*b;
}
int ami :: fun()
{
    return a*b;
}
int main()
{
    ami obj;
    //obj.a=5;
    //obj.b=6;
    obj.cal(5,6);
   cout<<obj.fun()<<endl;
   return 0;
}

