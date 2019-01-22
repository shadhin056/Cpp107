//member function
#include<iostream>
using namespace std;
class add
{
    int x,y;
public:
    add(int a,int b)
    {
        x=a;
        y=b;
    }
  void add_xy()
    {
        cout<<"x+y="<<x+y;
    }
};
int main()
{
    add lol(5,17);
    lol.add_xy();
}
