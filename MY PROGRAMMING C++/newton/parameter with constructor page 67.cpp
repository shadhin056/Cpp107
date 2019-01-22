//parameter with constructor
#include<iostream>
using namespace std;
 class sample
 {
     int x,y;
 public :
    sample (int a,int b)
    {
        x=a;
        y=b;
    }
    void add()
    {
        cout <<"\nx+y="<<x+y<<"\n";
    }
 };
 int main()
 {
     sample v(25,30);
     v.add();
 }
