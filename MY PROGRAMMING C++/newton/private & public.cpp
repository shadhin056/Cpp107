#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public :
    float a;
    float b;
private:
    void add_xy()
    {
        cout <<"x+y="<<x+y;
    }
    void add_ab()
    {
        cout <<"a+b="<<a+b;
    }
public:
   void aa(int a,int b)
    {
        x=a;
        y=b;
        add_xy();
        add_ab();
    }

};
int main()
{
  A f;
  f.aa(5,5);
}
