#include<iostream>
#include<stdio.h>
//using namespace std;
class math1
{
private:
    int num1,num2,result;
    void getvalue();
public:
    void access();
};
void math1::getvalue()
{
    //cin>>num1>>num2;
   scanf("%d%d",&num1,&num2);
    result=num1+num2;
    //cout<<result;
    printf("%d",result);
}
void math1 ::access()
{
    getvalue();
}
int main()
{
    math1 math;
    math.access();
}
