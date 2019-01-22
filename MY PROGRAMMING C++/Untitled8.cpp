
#include<iostream>
using namespace std;

class a{
int aa;
int bb;
public:
    void set(int a,int b )
    {
        aa=a;
        bb=b;
    }
int area()
{
    return aa*bb;
}
//friend class b;
 friend int b ::Cost(a objaa);
};

class b{
    int C;
    public:
    void setvalue(int a)
    {
        C=a;
    }
    int Cost(a objaa);
    {
    return C*objaa.area()   ;

    }
};
// int b ::Cost(a objaa)
//{
//     return C*objaa.aa*objaa.bb;
//
//}
int main()
{    a obja;
    b objb;
    obja.set(5,1);
    objb.setvalue(5);
    cout<<objb.Cost(obja);

}
