//inline member function
#include<iostream>
using namespace std;
class sample
{
public :
    int a,b;
    void add();
};
void sample::add()
{
    cout <<"\n A+B ="<<a+b;
}
int main()
{
    sample v1,v2;
    v1.a=5;
    v1.b=90;

    v2.a=100;
    v2.b=100;

    v1.add();
    v2.add();
}
//*********************************
/*#include<iostream>
using namespace std;
class sample
{
public :
    int a,b;
   void add (int a,int b)
{
    cout <<"\n A+B ="<<a+b;
}
}v1,v2;
int main()
{
    v1.add(5,5);
    v2.add(6,6);

}
//**********************************
//inline member function
#include<iostream>
using namespace std;
class sample
{
public :
    int a,b;
   void add (int a,int b)
{
    cout <<"\n A+B ="<<a+b;
}
};
int main()
{
    sample v1,v2;
    v1.add(5,5);
    v2.add(6,6);

}
//********************************** /*