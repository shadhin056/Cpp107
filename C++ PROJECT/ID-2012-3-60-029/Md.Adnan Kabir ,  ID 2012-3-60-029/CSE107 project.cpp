#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>


using namespace std;

class Library
{
    char name[20];
    char id[20];
public:
    void get_data(void)
    {
        cout<<"NAME :";
        cin>>name;
        cout<<"ID :";
        cin>>id;
    }
    void check_student()
    {
       
        {
            if(id[7]=='6'&&id[8]=='0')
                cout<<"You are a student of CSE Department\n";
            else if(id[7]=='3'&&id[8]=='0')
                cout<<"You are a student of EEE Department\n";
            else if(id[7]=='4'&&id[8]=='0')
                cout<<"You are astudent of ECE Department\n";
            else if(id[7]=='1'&&id[8]=='0')
                cout<<"You are astudent of BBA Department\n";
            else if (id[7]=='7'&&id[8]=='7')
                cout<<"You are astudent of pharmacy Department\n";
            else if (id[7]=='5'&&id[8]=='0')
                cout<<"You are astudent of ENGLISH Department\n";
                else
                    {
                        cout<<"Invalid id";
                        exit(0);
                    }
        }

    }

};

class CSE: public Library
{
public:
    void show_CSE()
    {
    fstream fp;
    fp.open("CSE.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<"\n";
       }

    }
      

}
};


class EEE:public CSE
{
public:
   void show_EEE()
   {
    ifstream fp;
    fp.open("EEE.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
   }

};
class BBA : public Library
{
public:
    void show_BBA()
    {
    ifstream fp;
    fp.open("BBA.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
    }
};
class ECE: public BBA
{
    public:
    void show_ECE()
    {
    ifstream fp;
    fp.open("ECE.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
    }


};

class ECO : public BBA
{
    public:
    void show_ECO()
    {
    ifstream fp;
    fp.open("ECO.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
    }

};

class ENGLISH: public ECO
{
    public:
    void show_ENG()
    {
    ifstream fp;
    fp.open("ENG.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
    }

};

class other:public ENGLISH
{
   public:
    void show_other()
    {
    ifstream fp;
    fp.open("other.txt");
    string in;
    if(fp.is_open())
    {
        while(fp.good())
       {
        getline(fp,in);
        cout<<in<<endl;
       }
    }
    }
};

int main()
{
    cout<<"\t\t\t"<<" Library Manegement\n";
    cout<<"\t\t\t"<<"---------------------\n";
    char n;
    Library lb;
    lb.get_data();
    lb.check_student();
    cout<<"Choose witch department of book you are searching?";
    cout<<"\n\n 01. CSE";
    cout<<"\n\n 02. EEE";
    cout<<"\n\n 03. BBA";
    cout<<"\n\n 04. ECE";
    cout<<"\n\n 05. ECO";
    cout<<"\n\n 06. ENGLISH";
    cout<<"\n\n 07. Other book";
    cout<<"\n\n";
    cout<<"Please input department code :";
    cin>>n;
    switch (n)
    {
    case '1':
    {
    CSE c;
    c.show_CSE();
    break;
    }
    case '2' :
    {
    EEE e;
    e.show_EEE();
    break;
    }
    case '3':
    {
    BBA b;
    b.show_BBA();
    break;
    }
    case '4':
    {
        ECE ec;
        ec.show_ECE();
        break;

    }
    case '5':
    {
        ECO e;
        e.show_ECO();
        break;
    }
    case '6':
    {
        ENGLISH eg;
        eg.show_ENG();
        break;
    }
    case '7':
    {
        other o;
        o.show_other();
        break;
    }

    }
	return 0;
}
