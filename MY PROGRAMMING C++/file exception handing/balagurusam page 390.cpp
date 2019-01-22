//balagurusamy page390

#include<iostream>
using namespace std;
void test (int x)
{
        try
        {
                if(x==0)throw x;
                if(x==-1)throw x;
                if(x==1)throw x;

        }
        catch (...)

        {
                cout<<"catch an exceptional\n";
        }
}
int main()
{
        cout<<"test generic catch \n";
        test (-1);
        test (0) ;
        test (1) ;
}
