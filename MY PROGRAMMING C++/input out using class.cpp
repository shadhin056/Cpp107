//input out using class

#include<iostream>
using namespace std;
class shadhin
{
private:
    int a,b;
public:
    void input ()
    {
        cin >>a>>b;
    }
    void output()
    {
       cout <<a<<b;
    }
}r;
int main()
{
    r.input();
    r.output();
}
