// constructor & distructor page 65
#include<iostream>
using namespace std;
//creating simple class
class sample
{
public:
    sample ()
    {
        cout <<"\n sms from construc tor ";
    }
    ~sample ()
    {
        cout <<"\n sms from destruc tor ";
    }
};
//defining a test function
void funcA(void )
{
    cout <<"\n creating sampel object in FuncA()";
    sample smp ;  //constructor is calling here
}                 //destructor is calling here
int main(void)
{
    cout <<"\n creating sample object in main()";
    sample smp;   //constructor  is calling
    cout <<"\n\n calling funcA()";
    funcA();//calling FuncA
    cout <<"\n \n funcA() calledn\n\n";
}        //destructor is calling here
