//local variable work

#include<iostream>
using namespace std;
int x;
int changeX()
{
    x=20;
}
int main()
{
    int x;
    x=10;
    changeX();
    cout <<"value of X is :"<<x;
}
