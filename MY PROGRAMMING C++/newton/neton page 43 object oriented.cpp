//neton page 42 object oriented
#include<stdio.h>
#include <iostream>
using namespace std;
class SortedLargest
{
private:
    int i,j,temp,getLarge,a[5];
public:    //class constructor
    SortedLargest ()
    {
        cout<<"enter five integer(press ENTER after each value):\n";
        for(i=0; i<5; i++)
        {
            cin >> a[i];
        }
        GetSortedArray();
        GetLargestValue();
    }

private:
int GetSortedArray()
    {
        for (i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"\n\n after sorting :\n";
        for(i=0; i<5; i++)
        {
            cout<<a[i]<<endl;
        }
    }

int  GetLargestValue()
    {
        getLarge=a[0];
        for(i=0; i<5; i++)
        {
            if(a[i]>getLarge)
                getLarge=a[i];
        }
        cout << "\n\nthe Largest value is:\n"<<getLarge;

    }
};
int main()
{
    SortedLargest();
}
