#include<iostream>
#include<fstream>
using namespace std;
int main()
{   //int b;
    ifstream fin;
    fin.open("sample.txt");
    if(!fin)
    {
        cout<<"file eror...\n";

    }
int b;
    while(!fin.eof())
         fin>>b;
    cout<<b;
    fin.close();

}
