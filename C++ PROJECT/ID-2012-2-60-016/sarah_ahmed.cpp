//name=Sarah Ahmed
//ID=2012-2-60-016

#include<iostream>
#include<string>
#include<stdlib.h>
#include <fstream>
using namespace std;
class patient{
public:
        char name1[100];
        char name2[100];
        int age;
        char blood[20];
        char date[20];
        char *dept;
        char *doc;
        int a;
        int t;
        int dat,mon,yer;
        double price,lab,total;
        ofstream myfile;
public:
        void input()
        {
                system("cls");
                system("color D");
                cout<<"\nENTER PATIENT 1ST NAME=";
                cin>>name1;
                cout<<"\nENTER PATIENT LAST NAME=";
                cin>>name2;
                cout<<"\nAGE=";
                cin>>age;
                cout<<"\nBLOOD GROUP=";
                cin>>blood;
                cout<<"\nDATE=";
                cin>>dat;
                cout<<"\nMONTH=";
                cin>>mon;
                cout<<"\nYEAR=";
                cin>>yer;
                cout<<"\n\n";
                cout<<"\nTEST--\n\n"<<"\n";
                cout<<"\n 1.EMERGENCY"<<"\n";
                cout<<"\n 2.BLOOD TEST"<<"\n";
                cout<<"\n 3.PATHOLOGY TEST"<<"\n";
                cout<<"\n 4.URINE TEST"<<"\n";
                cout<<"\n 5.CITY SCAN"<<"\n";
                cout<<"\n 6.ULTRASONOGRAPHY"<<"\n";
                cout<<"\n 7.ECG"<<"\n";
                cout<<"\n 8.Endoscopy"<<"\n";
                cin>>a;

                try{
                        if(a==1)
                        {
                                dept="EMERGENCY";
                                doc="DR.MASSUM";
                        }
                        else if(a==2)
                        {
                                dept="BLOOD TEST";
                                doc="DR.RIAD";
                         }
                        else if(a==3)
                        {
                                dept="PATHOLOGY TEST";
                                doc="DR.RAHUL";
                        }
                        else if(a==4)
                        {
                                dept="URINE TEST";
                                doc="DR.MARUF";
                        }
                        else if(a==5)
                        {
                                dept="CITY SCAN";
                                doc="DR.AHSAN";
                        }
                        else if(a==6)
                        {
                                dept="ULTRASONOGRAPHY";
                                doc="DR.TUMPA";
                        }
                        else if(a==7)
                        {
                                dept="ECG";
                                doc="DR.SAFIUUDIN";
                        }
                        else if(a==8)
                        {
                                dept="Endoscopy";
                                doc="DR.ARIF";
                        }
                        else
                        {
                                throw(a);
                        }
                }
                catch(int)
                {
                        cout<<"\nWRONG INFORMATION!"<<"\n";
                        exit(1);
                }
        }
        void display()
        {
                        cout<<"\n\t\tNAME"<<"\t\tBLOOD"<<"\t\tAGE=\n\t\t";
                        for(int t=0;t<55;t++)
                        {
                           cout<<"=";
                        }
                        cout<<"\n\t\t"<<name1<<" "<<name2;
                        cout<<"\t"<<blood;
                        cout<<"\t\t"<<age;
                        cout<<"\n\t\tDate"<<"\t\tPatient Test"<<"\t\tDoctor name\n\t\t";
                        for(t=0;t<55;t++)
                        {
                        cout<<"=";
                        }
                        cout<<"\n\t\t"<<dat<<"/"<<mon<<"/"<<yer;
                        cout<<"\t"<<dept;
                        cout<<"\t\t"<<doc<<"\n\n";
        }
        void amount()
        {
                cout<<"\n\nLab Charge 200 TK"<<"\n";
                lab=200;
                if(a==1)
                {
                      price=1000;
                }
                else if(a==2)
                {
                      price=500;
                }
                else if(a==3)
                {
                      price=1000;
                }
                else if(a==4)
                {
                      price=1000;
                }
                else if(a==5)
                {
                      price=5000;
                }
                else if(a==6)
                {
                      price=2000;
                }
                else if(a==7)
                {
                       price=4000;
                }
                else if(a==8)
                {
                       price=3000;
                }
                else
                {
                        cout<<"\nWRONG INFORMATION!"<<"\n";
                        exit(1);
                }
                total=price+lab;
                display();
                file_write();
                cout<<"\nTOTAL FEES="<<total;
        }
        void file_write()
        {
                myfile.open("diagnostic center.txt", ios::app);
                myfile<<"Lab Charge 200 TK"<<"\n";
                myfile<<"\n\t\tNAME"<<"\t\tBLOOD"<<"\t\tAGE=\n\t\t";
            for(int t=0;t<55;t++)
            {
             myfile<<"=";
            }
            myfile<<"\n\t\t"<<name1<<" "<<name2;
            myfile<<"\t"<<blood;
            myfile<<"\t\t"<<age;
            myfile<<"\n\t\tDate"<<"\t\tPatient Test"<<"\t\tDoctor name\n\t\t";
            for(t=0;t<55;t++)
            {
               myfile<<"=";
            }
            myfile<<"\n\t\t"<<dat<<"/"<<mon<<"/"<<yer;
            myfile<<"\t"<<dept;
            myfile<<"\t\t"<<doc;
            myfile<<"\nTOTAL FEES="<<total;
            myfile<<"\n\n\n";
            myfile.close();
        }
};
int main()
{
        int n,i=0;
        patient x1[100];
        int num;
        char ch;
        do{
                system("cls");
                system("Color B");
                cout<<"\nDATA ENTRY:";
                cout<<"\n\n\t\tADMIT PATIENT [1]";
                cout<<"\n\n\t\tVIEW LIST OF TESTS [2]";
                cout<<"\n\n\t\tTOTAL AMOUNT [3]";
                cout<<"\n\n\t\tEXIT [4]\n\t\t";
                cin>>num;
                switch(num)
                {
                case 1:
                        system("cls");
                        system("Color 1E");
                        cout<<"\nHOW MANY PATIENT=";
                        cin>>n;
                        for(i=0;i<n;i++)
                        {
                           x1[i].input();
                        }
                        cout<<"\nPLEASE PRESS ANY KEY FOR THE MAIN MENU";
                        cin>>ch;
                        break;
                case 2:
                        system("cls");
                        system("Color 1E");
                        cout<<"\nLIST OF TESTs--";
                        for(i=0;i<n;i++)
                        {
                           x1[i].display();
                        }
                        cout<<"\nPLEASE PRESS ANY KEY FOR THE MAIN MENU";
                        cin>>ch;
                        break;
                case 3:
                        system("cls");
                        system("Color 1E");
                        cout<<"\nTOTAL AMOUNT=";
                        for(i=0;i<n;i++)
                        {
                            x1[i].amount();
                        }
                        cout<<"\nPLEASE PRESS ANY KEY FOR THE MAIN MENU";
                        cin>>ch;
                        break;
                case 4:
                        break;
                }
        }
        while(num!=4);
        return 0;
}
