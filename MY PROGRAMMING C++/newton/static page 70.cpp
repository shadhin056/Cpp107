//static page 70
#include<iostream>
using namespace std;
class sample
{
    static int x,y;
public :
    void setxy (int a,int b)
    {
        x=a;
        y=b;
    }
    void printxy()
    {
        cout <<"\nx="<<x<<"y="<<y<<"\n";
    }
    };
        int sample ::x;
        int sample ::y;
        int main(void)
        {
        sample smp1,smp2;
        smp1.setxy (100,200);
        smp1.printxy();
        smp2.printxy();
    }
