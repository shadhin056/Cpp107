//neton paGE 38 reference vs pointer
#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int& ref_i=i;
    int *ptr_i=&i;

    cout<<"i:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;
    ++ref_i;
    cout <<endl<<endl;
    cout <<endl<<endl;

    cout<<"i:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;
    ++(*ptr_i);
    cout <<endl<<endl;
    cout <<endl<<endl;

    cout<<"i:"<<*ptr_i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;
    ++ptr_i;
    cout <<endl<<endl;


    cout<<"i:"<<i<<endl<<"ref_i:"<<ref_i<<endl<<"ptr_i:"<<ptr_i<<endl;
    }
