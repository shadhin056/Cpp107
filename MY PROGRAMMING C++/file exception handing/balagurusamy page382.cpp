//balagurusamy page382

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a and b\n";
    cin>>a;
    cin>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"result(a/x)="<<a/x<<"\n";
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"exception cautch :x="<<x<<"\n";
    }
    cout<<"end";
    return 0;
}
