//Company management
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class earn
{
public:
    long double profit;
    void show()
    {
        ifstream x("ooo.txt");
        if(!x)
            cout<<"\n() PROFIT\t\t     : 0 ";
        else
        {
            x>>profit;
            cout<<"\n() TOTAL STARTING PROFIT     : "<<profit<<"\n\n";
            x.close();
        }

    }

};
class product:public virtual earn
{
public:
    int quan;
    char name[20];
    char id[20];
    double percost;
    double persell;
    double cost;
    double sell;
    void cal()
    {
        cost=percost*quan;
        sell=persell*quan;
        profit=profit +(sell-cost)*30;
    }
    void file();
    void get() ;

};
void product::get()
{
    int s;
    cout<<"# HOW MANY PRODUCT PRODUCE ? : ";
    cin>>s;
    for(int i=0; i<s; i++)
    {
        cout<<"\n# input product name\t     : ";
        cin>>name;
        cout<<"\n# input product id\t     : ";
        cin>>id;
        cout<<"\n# input percost of product   : ";
        cin>>percost;
        cout<<"\n# input persell of product   : ";
        cin>>persell;
        cout<<"\n# total product quntity\t     : ";
        cin>>quan;

    }
    cal();
    file();

}
void product::file()
{
    char file[30];
    strcpy(file,id);
    strcat(file,".txt");
    ofstream f(file);
    f<< "\n\n\n======>PRODUCT DETAILS<======\n"<<"\n# product name\t\t     : "<<name<< "\n\n# product id\t\t     : "<<id<<"\n\n# percost ofproduct\t     : " <<percost<<"\n\n# persell of product\t     : "<<persell<<"\n\n# quantity\t\t     : "<<quan<<"\n\n# total cost\t\t     : "<<cost<<"\n\n# total sell\t\t     : "<<sell<<"\n";
    f.close();
}

class staff:public virtual earn
{
protected:
    double salary;
    char post[12];
    char emid[10];
    int postquan;
    void cal()
    {
        profit=(profit-salary*postquan)*12;
    }
    void getstaff();
    void file();
};
void staff::getstaff()
{
    cout<<"\n# input salary\t\t     : ";
    cin>>salary;
    cout<<"\n# input postquantity\t     : ";
    cin>>postquan;
      cout<<"\n\n@@@ FILE IS LOADING...\n\n";
    cal();
    file();
}
void staff::file()
{
    char file[20];
    strcpy(file,emid);
    strcat(file,".txt");
    ofstream f(file);
    f<< "\nstaff salary: "<<salary<< "\post quantity: "<<postquan;
    f.close();
}

class ammount:public staff,public product
{

public:
    void  add();
};
void ammount::add()
{
    cout<<"\n\n\n======>INPUT FOR PRODUCT<======\n\n\n";
    get();
    cout<<"\n\n\n======>INPUT FOR EMPLOYEE<======\n\n\n" ;
    getstaff();

    ofstream x("ooo.txt");
    x<<profit;
    x.close();
}


int main()
{
    system("color 7");//color
    while(1)
    {
        cout<<"\n    \t\t \t++++++++++++++++++++++++++++++++++++ \n";
        cout<<" \t\t\t+     ""COMPANY MANAGEMENT\t   +";
        cout<<"\n\t\t\t+\t\t\t\t   +\n\t\t\t+\t1..add\t\t\t   +\n\t\t\t+\t2..show\t\t\t   +\n\t\t\t+\t3...search\t\t   +\n\t\t\t+\t4..exit\t\t\t   +\n";

        cout<<"\t\t\t+\t\t\t\t   +\n\t\t\t++++++++++++++++++++++++++++++++++++";
        cout<<"\n\n# WHAT IS YOUR CHOICE? \t     : ";
        int u;

        cin>>u;
        if(u==1)
        {
            ammount a;
            a.show();
            a.add();
        }
        else if(u==2)
        {
            ammount d;
            d.show();

        }
        else if(u==3)
        {
            char id[20];
            char c;
            cout<<"\n# INPUT ID FOR SEARCH\t     : ";
            cin>>id;
            char file[20];
            strcpy(file,id);
            strcat(file,".txt")  ;
            ifstream x(file);
            while(x)
            {
                x.get(c)   ;
                cout<<c;
            }

            x.close();

        }
        else if(u==4)
        {

            cout<<"\n\n!!!!!!!! HAPPY PROGRAMMING !!!!!!!!\n\n\n";
            break;
        }
        else
            {
                cout<<"\n";
                cout<<"..............................\n      ERROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................";
                cout<<"\n";


        }
    }
    return 0;

}

