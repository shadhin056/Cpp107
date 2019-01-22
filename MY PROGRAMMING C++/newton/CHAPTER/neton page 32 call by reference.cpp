//neton page 32 call by reference

#include<iostream>
using namespace std;

void changeValue (int *val)
{
    *val=15;
}
int main()
{
    int i= 10;
    cout <<"before calling changevalue (): "<<i<<endl;
    changeValue (&i);
    cout <<"after calling changevalue ():i=  "<<i<<endl;
}
