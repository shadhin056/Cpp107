// constructor & distructor page 67
#include<iostream>
using namespace std;
class sample
{
    int x,y;
public :
    sample (int a,int b)
    {
        x=a;
        y=b;
    }
        void add ()
        {
            cout <<"\n  x+y="<<x+y<<"\n";
        }
};
 int main(void)
{
    sample v(25,30);
    v.add();
}
