//constructor and distructor

#include<iostream>
using namespace std;
class ConDes
{
public:
    ConDes()
    {
        cout <<"constructing...............";
    }
   ~ConDes()
    {
        cout <<"Destructing................";
        cout <<"\n\n\n";
    }
};
void SampleFunction ()
{
    cout <<"\n object creating  in SampleFunction() \n";
    ConDes SF;
    cout <<"\n return to MAIN() from SampleFunction \n";
}
int main()
{
    cout << "\n object creating in MAIN() \n";
    ConDes MAIN;
    cout << "\n calling SampleFunction.... \n";
    SampleFunction();
    cout <<"\nend of main():\n";
}
