#include<iostream>
using namespace std;
void divided(int x,int y,int z)
{
    cout<<"\n we inside the fuction\n";
    if((x-y)!=0)
    {
        int R=z/(x-y);
        cout<<"result="<<R<<"\n";
    }
    else
    {
        throw(x-y);
    }


}
int main()
{
    try
    {
        cout<<"we r using the try block\n";
        divided (10,20,30);
        divided (10,10,20);
    }
    catch(int i)
    {
        cout<<"catch the exception\n";
    }
    return 0;
}
