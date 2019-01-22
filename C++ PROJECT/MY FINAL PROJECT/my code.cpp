//University GPA Calculation.
#include <iostream>
#include<string.h>
using namespace std;
class student
{
    char name [40];
    char roll [10];
    char dep  [5];
    char batch[5];

    void get()
    {
        cout<<"\n Enter the Name          =  ";
        cin>>name;
        cout<<"\n Enter the Roll          =  ";
        cin>>roll;
        cout<<"\n Enter the Deperment     =  ";
        cin>>dep;
        cout<<"\n Enter the Batch         =  ";
        cin>>batch;
    }
};
int main()
{
        int p ;
        while (1)
        {
                cout<< "\t""EAST WEST UNIVERSITY";
        cout<<"\n------------------------------\n";
        cout<<"\n1..input\n2...search\n3...show\n4...exit";
        cout<<"\n\nYOUR CHOOSE= ";
        cin>>p;
        if(p==1)
        {

        }
       else if(p==2)
        {
            char roll[20];
            cout<<"\ninput the roll   =  ";
            cin>>roll;
            cout<<"------------------------------HERE WE FOUND ";
            cout<<"\n";
        }
       else if(p==3)
        {
                cout<<"";
        }
       else if(p==4)
        {
                cout<<"\nTHANK YOU FOR USING ME !!!!!!!!\n";
                break;
        }
        else
        {
                cout<<"\n";
                cout<<"              EROR 404  \n YOUR SELECT OPTION WAS WRONG (-_-)";
                cout<<"\n";

        }
        }
}
