//neton page 23

#include<iostream>
using namespace std;
int func(int x,float y=3.1416)
{
    cout <<"value of x and y are ="<<x<<","<<y<<"\n";
}
int main()
{
    func(10);
    func(10,7.22);
}
