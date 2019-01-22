#include<stdio.h>
#include<iostream>
using namespace std;

class add
{
    int a;
    int b;
public:
    void ad(int a,int b)
    {
        cout <<a*b<<endl;
    }
};
int main()
{
    add obj;
    obj.ad(5,2);
    //...................
    add *p;
    p = &obj;
    p->ad(1,2);

}
