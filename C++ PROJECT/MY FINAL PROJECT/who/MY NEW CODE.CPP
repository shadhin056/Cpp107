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
void cgpa::gra(float k)
{
    while(1)
    if(k<2.0)
    {
            strcpy(gradeno,"F"); //**********string copy
            break;
    }
    else if(k<2.25)
        {
            strcpy(gradeno,"D" );
            break;
        }
        else if(k<2.5)
        {
            strcpy(gradeno,"c" );
            break;
        }
        else if(k<2.75)
        {
            strcpy(gradeno,"c+" );
            break;
        }
        else if(k<3.0)
        {
            strcpy(gradeno,"B-" );
            break;
        }
        else if(k<3.25)
        {
            strcpy(gradeno,"B" );
            break;
        }
        else if(k<3.5)
        {
            strcpy(gradeno,"B+" );
            break;
        }
        else if(k<3.75)
        {
            strcpy(gradeno,"A-" );
            break;
        }
        else if(k<4.0)
        {
            strcpy(gradeno,"A" );
            break;
        }
        else if(k==4)
        {
            strcpy(gradeno,"A+" );
            break;
        }
}


void  cgpa::getgpa()
{
    get();
    totalcredit =0;
    total=0;
    cout<<"\n+++++++++++++++++   ABOUT RESULT  \n";
    cout<<"\n    HOW MANY SUBJECT IN HIS/ HER EXAM HE/SHE ATTEND  =   ";
    cin>>i;
    for(int j=0; j<i; j++)
    {
        cout<<"\n";
        cout<<" [] SUBJECT NAME            =    ";
        cin>>subname[j];
        cout<<" [] SUBJECT CODE            =    ";
        cin>>subcode[j];
        cout<<" [] CREDIT OF THAT SUBJECT  =    ";
        cin>>credit[j];
        cout<<" [] GPA OF THAT SUBJECT     =    ";
        cin>>gpa[j];
        cout<<"\n+++++++++++++++++   ";
        totalcredit=totalcredit+credit[j];
        subg[j]=gpa[j]*credit[j];
        total=subg[j]+total;
    }
        grade=total/totalcredit;
        cout<<"\n [] RESULT                  =    "<<grade;
    gra(grade);
    cout<<"\n [] GRADE                   =    "<<gradeno;
    fstream x("RESULT.txt",ios::app|ios::out);
x<<endl<<"\t"<<name<<"\t"<<roll<<"\t"<<grade<<"\t"<<gradeno<<endl;
x.close();

}
void cgpa::file()
{
    getgpa();
    ofstream out(roll); //
    out<<"\n    NAME        = "<<name;
    out<<"\n    ROLL        = "<<roll;
    out<<"\n    DEPARTMENT  = "<<dep;
    out<<"\n    BATCH       = "<<batch;
out<<"\n\n\n SUBJECT NAME = Subject Code --- CREDIT of that SUBJECT---YOUR GPA ";
for(int j=0; j<i; j++)
    {
        out<<"\n";
        out<<"  "<<subname[j];
        out<<"\t\t   "<<subcode[j];
        out<<"\t\t    " ;
        out<<credit[j];
        out<<"    \t\t\t" ;
        out<<gpa[j];
    }
    out<<"\n------------------------------\n\n    TOTAL CREDIT      = "<<totalcredit;
    out<<"\n\n    TOTAL GRADE POINT = "<<grade;
    out<<"\n\n    CGPA              = "<<gradeno;
    out<<"\n********************************************************************************\n";

    out.close();
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
        //system("cls");
        if(p==1)
        {
            cout<<"\n\t\t\tBASIC INFORMATION :\n";
            cgpa x;
            x.file();
        }
        else if(p==2)
        {//system("cls");
            cout<<"\n\n    INPUT The ROLL   =  ";

            char roll[20];
            cin>>roll;
                cout<<"\n";
            cout<<"------------------------------HERE WE FOUND ";
            cout<<"\n";
            char c;
            ifstream x(roll);  ///////

            if(!x)
            {
                cout<<"\nWE CAN'T FIND ANYTHING \n\n";
                cout<<"------------------------------";
            }
        else
            while(x)
            {
                x.get(c);
                cout<<c;
            }
        }
        else if(p==3)
        {
            char c;
            cout<<"\n\n\n\tTOTAL RECORD are HERE \n";
            cout<<"-----------------------------------------------------------";

             cout<<"\n\tNAME    ROLL    CGPA     GRADE\n";
             cout<<"-----------------------------------------------------------";
            ifstream x("RESULT.txt");
            while(x)
            {
                x.get(c);
                cout<<c;
            }
        }
        else if(p==4)
        {
                cout<<"\n\n\n\tTHANK YOU FOR USING THIS PROGRAM !!!!!!!!\n\n\n\n\n\n\n\n\n";
                break;
        }
        else
        {
                cout<<"\n";
                cout<<"..............................\n      EROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................";
                cout<<"\n";
                goto z;

        }


    }

    }

