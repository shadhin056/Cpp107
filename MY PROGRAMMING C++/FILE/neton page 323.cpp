#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ofstream fout("DESTOP");
    if(!fout)
    {
        //if any failure occure during file creation
        cout<<"FILE ERROR";
        return 0;
    }
    fout<<"Decimal Octal Hexadecimal"<<endl;
for (int i=0;i<=10;i++)
{

    fout<<dec<<setw(4)<<i<<setw(7)<<oct<<i<<setw(8)<<hex<<i<<endl;
    fout.close();
}

}
