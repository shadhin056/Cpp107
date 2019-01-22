//neton page 34 parameterreference

#include <iostream>
using namespace std;
int& largevalue (int array[],int n)
{
    int i,currentindex =0;
    for (i=1; i<n;i++)
        if (array[currentindex]<array [i])
            currentindex=i;
    return array[currentindex];
}
int main()
{
    int iarray[10]= {22,434,54,23,235,653,756,323,121,565};
    cout <<"large element :"<<largevalue (iarray,10)<<endl;
}
