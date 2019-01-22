//newton page 97

#include <iostream>
#include <string.h>
using namespace std;
class StringLength
{
public:
    char *p[10];
    void print()
    {
        cout <<"\t"<<P[9]<<"\tLength is:"<<strlen(p[9])<<"\n";
    }
    StringLength()
    {
        p=new char[50];
    }
    StringLength(StringLength &);
};
StringLength :: StringLength(StringLength& str)
{
    strcpy(p,str.p);
}
int main()
{
    StringLength str1;
    strcpy(str1.p,"str1:M kamruzzaman");
    cout<< "before assignng:\n";
    str1.print();
    stringLength str2=str1;
    strcpy(str1.p,"str1:B.M Morshed");
    cout <<"\n \nafter assinging:\n";
    str1.print();
    str2.print();
}
