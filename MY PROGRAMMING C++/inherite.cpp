#include<iostream>
using namespace std;
class student{
public :
    int roll;
    int mark;

};
class result : public student{

public:
    void set()
    {
        cin>>roll>>mark;
    }
    void print()
    {
        cout<<mark<<" "<<roll<<endl;
    }
};
int main()
{
    result ob;
    ob.set();
    ob.print();
    //cout<<ob.mark<<" "<<ob.roll<<endl;
    return 0;
}
