//neton page 39 negative site off reference

#include<iostream>
using namespace std;
int increment (int& value )
{
    value++;
}
int decrement (int *value)
{
    (*value)--;
}
int main()
{
    int val =10;
    increment (val);       //val=11
    cout <<"after increment(),val is :"<<val<<endl;
    decrement(&val);       //val=10
    cout <<"after decrement(),val is :"<<val<<endl;
}
