
#include <iostream>
using namespace std;
class myclass
{
private:
    int a;
public:
    myclass ();
    void show ();
}ob1,ob2;
myclass::myclass()
{
    a=20;
}
void myclass::show ()
{
    cout<< a;
}
int main()
{
    //cout << "helllo" << endl;
    //myclass ob1,ob2;
    //cout << "ending";
    ob1.show();
    return 0;
}
