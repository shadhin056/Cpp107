#include<iostream>
using namespace std;
class sample
{
private :
    void add()
    {
        cout << "\n x+y="<<x+y<<"\n";
    }
    int x,y;
public :
    sample (int a,int b)
    {
        x=a;
        y=b;
        add();
    }
};
int main()
         {
          sample v(100,200);
         }
