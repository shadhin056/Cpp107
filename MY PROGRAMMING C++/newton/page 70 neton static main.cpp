//page 70 neton static main


#include<iostream>
using namespace std;
class sample
{
    static int x,y;
public :
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void printxy()
    {
        cout <<"\n x="<<x<<"y="<<y;
    }
};
int sample :: x;
int sample :: y;

int main()
{
    sample smp1,smp2;
    smp1.setxy(100,200);
    smp1.printxy();
    smp2.printxy();
}
