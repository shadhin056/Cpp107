
#include<iostream>
using namespace std ;
class student
{
private :
    long roll;
    char name [40];
    float marks;

public :
    void getdata ();
    void display ();
}s,s1;
void student :: getdata()
{
    cout <<"roll number ";
    cin >>roll;
    cout <<"enter name";
    cin >>name ;
    cout <<"enter marks";
    cin >>marks;

}
void student :: display()
{
    cout <<"\nroll is ="<<roll;
    cout <<"\nname is ="<<name;
    cout <<"\nmarks is ="<<marks;
    if(marks<0)
    {
        cout <<"invalid marks !";
    }

}
int main()
{
    s. getdata ();
    s. display ();
    s1. getdata ();
    s1. display ();
}
