#include<iostream>
#include<string.h>
using namespace std;
class hon
{
private :
    char a[10];
public :
    void honest();
} v1;
void hon::honest()
{
        cin >>a;
        if(a=="gold" && a=="silvar")
        {
           cout<<"he will not get the gift";

        }
        else if(strcmp(a,"wood")==0)
        {
             cout<<"he will get the gift";
        }

        else
            cout<<"he will not get the gift";
}
int main()
{
    v1.honest();
    return 0;
}


