#include<stdio.h>
#include<iostream>
using namespace std;

class add
{
    int a;
    int b;
public:
    void ad(int aa,int bb)
    {
        a=aa;
        b=bb;
    }
    int  area()
    {
        return a*b;
    }
};
int main()
{
    add obj[5];
    obj[0].ad(1,2);
    obj[1].ad(2,2);
    obj[2].ad(3,2);
    obj[3].ad(4,2);
    obj[4].ad(5,2);

    //...................
    add *p;
    p = obj;
    for(int i=0; i<5; i++)
    {
        cout <<i<<"=" <<(p+i)->area()<<endl;
    }


}

