#include<iostream>
using namespace std;
template<class a,class b>
{
    return (a+b);
}
int main()
{
    int iresult;
    double bresult;
    iresult=add(5,5);
    dresult=add(9.8,8.9);
    cout<<"iresult="<<iresult<<endl;
    cout<<"dresult="<<dresult<<endl;
}
