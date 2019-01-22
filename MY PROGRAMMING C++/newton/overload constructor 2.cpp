//overload constructor
#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public :
  int  Add(int x,int y)
    {
        a=x;
        b=y;
        return a+b;
    }
   float Add(float x,float y,float z)
    {
        a=x;
        b=y;
        c=z;
        return a+b+c;
    }
};
int main()
{
    cout<<Add(10,20);
    cout<<Add(10,20,20);
}
