//constructor
//disconstructor
#include<iostream>
using namespace std;
class cons
{
public:
    cons()
    {
        cout <<"this is constructor\n";
    }
    ~cons()
    {
        cout <<"this is disconstructor\n";
    }
    void out ()
    {
        cons v1;
    }
};
int main()
{
    cons R;
    R.out ();
    return 0;
}
