#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr= new int [5];
    ptr[1]=5;
    cout<<ptr[1]<<endl;
    //*ptr=7;
    cout<<*(ptr+1)<<endl;
    delete [] ptr;
    return 0;
}

