// Name:Moumita Saha//
//ID:2012-2-60-005//
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include <string>
using namespace std;

class software {
public:
    char P_name [50];
    char L_name [50];
    char M_name [3][20];
    char D_line [50];
    int Payment;

    ofstream file;

    void input ()
    {
        cout<<"\n Enter Project Name: ";
        cin>>P_name;
        cout<<"\n Enter Project Leader Name: ";
        cin>>L_name;
        for(int i=0;i<3;i++)
          {
            cout<<"\n Member Name"<<i+1<<":";
            cin>>M_name[i];
          }
        cout<<"\n Enter Deadline: ";
        cin>>D_line;
        cout<<"\n Enter The Payment: ";
        cin>>Payment;
    }


    void write()
    {
        file.open("software.txt", ios::app);
        if(file.is_open())
        {
            file<<P_name<<"   "<<" \t"<< L_name<<"   "<<"\t"<< M_name[0]<<"  "<<"\t"<< M_name[1]<<" "<<"\t"<<M_name[2]<<"  "<<"\t"<<D_line<<"  "<<" \t"<<Payment<<endl;

            file.close();
        }
        else
        {
            printf("Error openin file!!");
        }
    }
};

int main () {
    software x;
    fstream file, f1;
    int e;
    int pay;
    char P[50];

    string line;

    do{
        system("color A");
        cout<<"\n DATA BASE";
        cout<<"\n 1.Data Entry";
        cout<<"\n 2.Project Display";
        cout<<"\n 3.Update Project Info";
        cout<<"\n 4.Quit\n";
        cin>>e;

        if(e == 1)
        {
            system("cls");
                int size;
                cout<<"\n How Many Project: ";
                cin>>size;
                for(int i=0;i<size;i++)
                {
                    x.input();
                    x.write();
                }

        }
        else if(e == 2)
        {
            system("cls");

            file.open("software.txt", ios::in);
            if(file.is_open())
            {
               cout<<"Project_Name  Leader_Name   Member1   Member2  Member3  Deadline    Payment"<<endl;
               cout<<"============================================================================="<<endl;

            while ( file.good() )
                {
                  getline (file,line);
                  cout << line << endl;
                }

                file.close();
            }
        }
        else if(e == 3)
        {
            system("cls");

            cout<<"\n Enter The Project Name That You Want To Update:";
            cin>>P;

            string data[1000];
            char p_name[200];
            int cnt=0;
            bool is_updated = false;
            file.open("software.txt", ios::in);

            if(file.is_open())
            {
                while ( file.good() )
                {
                    getline (file,data[cnt]);

                    sscanf(data[cnt].c_str(), "%s", &p_name);

                    if(strcmp(P, p_name) == 0)
                    {
                        int up;

                        cout<<"\n Update Project press 1\n";

                        cin>>up;

                        char p_n[100], l_name[100], m_name[3][100], d_line[100], p[100];

                        if(up==1)
                        {
                            cout<<"\n Previous Project: "<<p_name;
                            cout<<"\n New Project:";
                            cin>>P;

                            sscanf(data[cnt].c_str(), "%s %s %s %s %s %s %s", &p_n, &l_name, &m_name[0], &m_name[1], &m_name[2], &d_line, &p);

                            line =  string(P)+string("    ")+
                                    string("\t")+string(l_name)+string("   ")+
                                    string("\t")+string(m_name[0])+string("  ")+
                                    string("\t")+string(m_name[1])+string("  ")+
                                    string("\t")+string(m_name[2])+string("  ")+
                                    string("\t")+string(d_line)+string("  ")+
                                    string("\t")+string(p);
                            data[cnt] = line;

                            is_updated = true;
                        }
                    }
                    cnt++;
                }
                file.close();

                if(is_updated)
                {
                    int k;
                    file.open("software.txt", ios::out);
                    if(file.is_open())
                    {
                        for(k=0; k<=cnt; k++)
                        {
                            file<<data[k]<<endl;
                        }
                    }
                    file.close();

                    cout<<"Project updated!"<<endl;
                }
            }
        }
    }
    while(e!=4);
    return 0;
}
