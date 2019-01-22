#include<iostream>
#include<stdio.h>
using namespace std;
class base{
public:
    int a;

};
class new1:virtual public base {
    public:
int b;

};
class new2:virtual public base {
    public:
int c;

};
 class derive:public new1,new2{

 public :
     void set(){
     cin>>a>>b>>c;
     }

     int add()
     {
         return a+b+c;
     }
 };


int main()
{
    derive ob;
    ob.set();
   cout<< ob.add();

    return 0;

}
