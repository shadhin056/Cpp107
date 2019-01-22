//constructor overload
#include <iostream>
using namespace std;
class myclass
{
private:
    int a;
public:
    myclass();
    myclass (int i);
    void show ();
};
myclass::myclass(int i)
{
    a=i;
    cout << "constructor is called\n";
}
myclass::myclass()
{
    a=0;
    cout << "constructor is called\n";
}
void myclass::show ()
{
    cout<< a;
}
int main()
{
    myclass ob1,ob2(2);
    ob2.show();
    ob1.show();
    return 0;
}
