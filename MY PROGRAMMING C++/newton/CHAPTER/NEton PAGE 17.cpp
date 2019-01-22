// NEton page 17
// endl="\n" same
#include<iostream>
using namespace std;
int main()
{
    bool GetResult;
    int x,y,z;
    x=5;
    y=10;
    z=15;
    GetResult=x>y;
    cout<<"Result of GetResult=x>y    :"<<GetResult<<"\n";
//***********************************
    GetResult=y<z;
    cout<<"Result of GetResult=y<z    :"<<GetResult<<endl;
//***********************************
    GetResult=x+z-y;
    cout<<"Result of GetResult=x+z-y  :"<<GetResult<<endl;
//***********************************
    x=x+z-y;
    cout<<"Result of         x=x+z-y  :"<<x<<endl;
//***********************************
    GetResult=true;
    cout <<"Result of GetResult=true   :"<<GetResult<<endl;
//***********************************
    GetResult=false;
    cout<<"Result of GetResult=false  :"<<GetResult<<endl;
}
