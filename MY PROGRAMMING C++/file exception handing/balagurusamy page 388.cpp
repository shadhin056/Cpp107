#include<iostream>
//balagurusamy page388

#include<stdlib.h>
using namespace std;
void test (int x)
{
    try
    {
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if (x==-1) throw 1.0;
        cout<<"end of try-block \n";

    }
    catch (char c)
    {
        cout <<"catch a character";
    }
    catch (int m )
    {
        cout <<"catch an integer";
    }
    catch (double d )
    {
        cout <<"catch a double";
    }
    cout <<"end of try-catch system\n";
}
int main()
{
      system("color C0");
    cout <<"testing multiple catches\n";
    cout<<" x== 1\n";
    test(1);
    cout<<"x== 0\n";
    test(0);
    cout<<"x== -1\n";
        test(-1);
    cout<<"x==2\n";
    test(2);
    return 0;
}












