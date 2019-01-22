//balagurusamy page391

#include<iostream>
using namespace std;
void divide(double x,double y)
{
        cout<<"inside function \n";
        try
        {
                if(y==0.0)
                throw y;
                else
                cout<<"Divition ="<<x/y<<"\n";
        }
        catch(double)
        {
                cout<<"catch double inside function \n";
                throw ;
        }
        cout<<"end of function\n\n";
}
int main()
{
{
        cout <<"inside main \n";
}
try
{
        divide(10.5,2.0);
        divide(20.0,0.0);
}
catch (double )
{
        cout<<"catch double inside main\n";
}
cout<<"end of main\n";
return 0;
}
