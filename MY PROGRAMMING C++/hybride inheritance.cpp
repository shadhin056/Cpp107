#include<iostream>
using namespace std;
class info
{
    int id;
public:
    int getid()
    {
        cout<<"Enter ID: \n";
        cin>>id;
        return id;
    }
};
class lab
{
    int lmark;
public:
    int getmark()
    {   cout<<"lab\n";
        cin>>lmark;
        return lmark;
    }

};
class exam : public lab
{
    int mark;
public:
    int getMark()
    {   cout<<"EXAM:\n";
        cin>>mark;
        return mark+getmark();
    }

};
class result : private info,private exam
{
public:
    void getresult()
    {
        int sid=getid();
        int res = getMark();
        cout<<"ID->" <<sid<<"mark->"<<res<<endl;
    }
};
int main()
{
    result ob;
    ob.getresult();
    return 0;
}
