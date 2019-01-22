#include<iostream>
using namespace std;
class math1
{
private:
    int num1,num2,result;
    void getvalue();
public:
    void access();
}math;
//****************************
void math1::getvalue()
{
 cin>>num1>>num2;
    result=num1+num2;
 cout<<result;
}
//****************************
void math1 ::access()
{
    getvalue();
}
//****************************
int main()
{
    math.access();
}
