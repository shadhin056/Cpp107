#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>
#include<iomanip.h>

using namespace std;
class team_info
{
    private :
    char team_id[10],team_leader[35];
    int solved;
    public:
    team_info()
    {
        solved=0;
    }
    void setTeam(char[10],char[10]);
    void set (int num)
    {
        solved=num;
    }
    chat[10]get()
    {
        return team_leader;
    }
    char getleader()
    {
        return solved;
    }
    friend void operator <<(ofstream &os,team_info ob);

};
void team_info::Setteam(char[10,char[10]name)
{
    void team_info::setteam(char[10],char[10]name)
    {
        strcpy(team_id,id);
        strcpy(team_leader,name);
    }

    void operator <<(ofstream &os,team_info ob)
os<<setiosflage(ios::left)<<setw(16)<<ob.getld()
<<setiosflag(ios::left)<<setw(40)<<ob.getleader()
<<setiosflages(ios::right)<<setw(4)<<ob.getsolveditem()<<endl;
int main()
{
    ofstream fout("E:\ONLINE DRIVE\Dropbox\Dropbox\PROGRAMMING C++\FILE")
    fout<<teamid \t te
}
}

