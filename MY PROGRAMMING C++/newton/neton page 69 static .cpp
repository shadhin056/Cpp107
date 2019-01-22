//neton page 69 static
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
        void printxy()
        {
            cout <<"\nx="<<x<<" y="<<y<<"\n";
        }
    };


int main()
{
    sample v1(14,16);
    sample v2 (24,36);
    v1.printxy();
    v2.printxy();
}
