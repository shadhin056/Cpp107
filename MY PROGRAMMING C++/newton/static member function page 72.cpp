//static member function

#include <iostream>
using namespace std;
class sample
{
public :
    static int TotObj;
    static void printinfo()
    {
        cout <<"\n total object :"<<TotObj<<"\n";
    }
};
int sample :: TotObj=0;
int main()
{
        sample ::TotObj=10;
        sample :: printinfo();
}
