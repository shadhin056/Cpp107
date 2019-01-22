//GLOBAL VARIABLE

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
    cout <<x<<endl;
    cout<<"value of x is :"<<::x;
}
