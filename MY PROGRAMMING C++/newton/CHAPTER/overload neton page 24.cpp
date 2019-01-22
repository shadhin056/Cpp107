//overload neton page 24

#include<iostream>
using namespace std;
int Addxy(int x,int y)
{
    return x+y;
}
float Addxy(float x,float y)
{
    return x+y;
}
double Addxy(double x,double y)
{
    return x+y;
}
int main()
{
    cout <<"integer x+y="<<Addxy(5,5)<<endl;
    cout <<"float   x+y="<<Addxy(5.754,5.223)<<endl;
    cout <<"double  x+y="<<Addxy(90.39349872,5.9398749)<<endl;
}
