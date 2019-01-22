#include<iostream>
using namespace std;
int add (int a,int b)
{
    return a+b;
}
int add (int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    cout<<add(3,1,2)<<endl;
    return 0;
}
