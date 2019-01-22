#include<iostream>
using namespace std;
class getaverage
{
public:
    char* id;
    float course[5];
    float calcavg()
    {
        float avg=0.00;
        for(i=0;i<5;i++)
        {
            avg=avg+course[i];
        }
        return (avg/5);
    }
};
int main()
{
    getaverage niton;
    cout <<"enter ld";
    cin >>niton.id;

    cout <<"\n enter 5 score ";
    for (int i=0;i<5;i++)
    {
        cin >>niton.course[i];
        cout <<"average for "<<niton.id<<"is"<<niton.calcavg();
    }
}
