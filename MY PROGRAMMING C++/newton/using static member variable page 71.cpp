//using static member variable

#include<iostream>
using namespace std;
class sample
{
    static int TotObj;
public :
    sample ()
    {
        TotObj++;
    }
    ~sample ()
    {
        TotObj--;
    }
    static void printinfo()
    {
        cout <<"\n total object :"<<TotObj<<"\n";
    }
};
int sample ::TotObj=0;

int main()
{
    sample s1,s2,s3,s4,s5;
    sample :: printinfo();
}
