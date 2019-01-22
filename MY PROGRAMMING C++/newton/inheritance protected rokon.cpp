//inheritance protected rokon

#include<iostream>
using namespace std;
class A
{
    public:
    char s_name[30];
    char s_id[12];
    void input()
    {
        cin>>s_name>>s_id;
    }
    void output()
    {
        cout<<s_name<<"\t"<<s_id;
    }
};
class B: protected A
{
    float cgpa;
    public:
    void c_input()
    {

        cin>>cgpa;
    }
    void c_output()
    {
        cout<<cgpa;
    }
};
int main()
{
    B b;
    b.c_input();
    b.c_output();
}

