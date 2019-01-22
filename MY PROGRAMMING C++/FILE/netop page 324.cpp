#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:\ONLINE DRIVE\Dropbox\Dropbox\PROGRAMMING C++\FILE");
    for(int small='a';small<='z';small++)
    {
        fout.width(2);
        fout<<(int)small;
    }
    fout.close();
}
