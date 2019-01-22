//project name:EAST WEST University GPA Calculation.
//NAME: MD.MONIRUZZAMAN KHONDAKER
//ROLL :2012-2-60-056
//Section  :  02

#include<fstream>       //using file
#include<string.h>      //character of array
#include<iostream>      //C++
#include<stdio.h>       //c header file
#include<stdlib.h>      //color header file
#include<stdio.h>
using namespace std;
class student           //class name
{
public:
    char name[40];
    char roll[10];
    char dep[5];
    char batch[5];
//*****************************************
    void get()
    {
        cout<<"\n    ENTER THE NAME          =  ";
        cin>>name;
        cout<<"    ENTER THE ROLL          =  ";
        cin>>roll;
        cout<<"    ENTER THE DEPARTMENT    =  ";
        cin>>dep;
        cout<<"    ENTER THE BATCH         =  ";
        cin>>batch;
    }
};
class cgpa:public student                // INHERITANCE
{
// **************************************** member variable
public:
    char subname[10][20];
    char subcode[10][20];
    float gpa[10];
    float credit[10];
    float totalcredit;
    float subg[10];
    float total;
    int i;
    float grade;
    char gradeno[4];
//**************************************** member function
public:
    void getgpa();
    void file();
    void gra(float);
};
void cgpa::file()
{
    getgpa();
    /*ofstream out(roll); //
    out<<"\n    NAME        = "<<name;
    out<<"\n    ROLL        = "<<roll;
    out<<"\n    DEPARTMENT  = "<<dep;
    out<<"\n    BATCH       = "<<batch;
    out<<"\n\n\n    RESULT   = Subject Code ---- CREDIT of that SUBJECT----GPA of that SUBJECT";
    for(int j=0; j<i; j++)
    {
        out<<"\n";
        out<<subname[j];
        out<<"\t\t\t"<<subcode[j];
        out<<"\t\t\t" ;
        out<<credit[j];
        out<<"\t\t\t" ;
        out<<gpa[j];
    }
    out<<"\n------------------------------\n\n    TOTAL CREDIT      = "<<totalcredit;
    out<<"\n\n    TOTAL GRADE POINT = "<<grade;
    out<<"\n\n    CGPA              = "<<gradeno;
    out<<"\n********************************************************************************\n";

    out.close(); */

}
void  cgpa::getgpa()
{
    get();
}


int main()
{
    int p;
    system("color 3");//color
    while(1)
    {
        cout<<"\n    \t\t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
        cout<<" \t\t\t|     ""EAST WEST UNIVERSITY\t   |";
z:
        cout<<"\n  \t \t\t ---------------------------------- \n \t \t\t|        SELECT YOUR OPTION        |\n\t\t\t|\t\t\t\t   |";
        cout<<"\n  ";
        cout<<"\t\t\t| 1...INPUT\t\t\t   |\n  \t\t\t| 2...SEARCH\t\t\t   |\n        \t \t| 3...SHOW  ( TOTAL RECORD )\t   | \n  \t\t\t| 4...LOGOUT\t\t\t   |";
        cout<<"\n\t\t\t ----------------------------------\nYOU CHOOSE= ";
        cin>>p;
        cout<<"-----------------------------------------------------------";
        system("cls");
        if(p==1)
        {
            cout<<"\n\t\t\tBASIC INFORMATION :\n";
            cgpa x;
            x.file();
        }


    }

    }

