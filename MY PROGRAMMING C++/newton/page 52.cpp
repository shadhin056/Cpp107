/*#include<iostream>
using namespace std;
class simpleaddition
{
public:
    int a,b;
    int add()
    {
        return (a+b);
    }
}sa;
int main()
{
    //simpleaddition sa;
    sa.a=10;
    sa.b=20;
    cout<<"a+b="<<sa.add();
}
***************************/
#include<iostream>
using namespace std;
class simpleaddition
{
public:
    int a,b;
    int add()
    {
        return (a+b);
    }
};
int main()
{
    simpleaddition sa;
    sa.a=10;
    sa.b=20;
    cout<<"a+b="<<sa.add();
}
