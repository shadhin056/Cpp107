// static page 69
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
        cout <<"\nx="<<x<<"y="<<y<<"\n";
    }
};
int main(void)
{
    sample smp1(14,16),smp2(24,36);
    smp1.printxy();
    smp2.printxy();
}
