#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:\ONLINE DRIVE\Dropbox\Dropbox\PROGRAMMING C++\FILE.txt");
    fout<<"TEAM A"<<endl;
    fout<<"TEAM READER"<<endl;
    fout<<"SOLVE PROBLEM:3";
    fout<<"who you";
    fout.close();
}
