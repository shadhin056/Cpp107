//project name:EAST WEST University GPA Calculation.
//NAME: MD.MONIRUZZAMAN KHONDAKER
//ROLL :2012-2-60-056

#include<fstream>       //using file
#include<string.h>
#include<iostream>
#include<stdio.h>       //c header file
#include<stdlib.h>      // color header file
#include<stdio.h>
using namespace std;

class student
{
public:
    char name[40];
    char roll[10];
    char dep[5];
    char batch[5];
    void get()
    {
        cout<<"\n enter the name          =  ";
        cin>>name;
        cout<<" enter the roll          =  ";
        cin>>roll;
        cout<<" enter the deperment     =  ";
        cin>>dep;
        cout<<" enter the batch         =  ";
        cin>>batch;
    }
};
//*************************************************************************************
class cgpa:protected student
{
private:
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
public:
    void getgpa();
    void file();
    void gra(float);
};
//****************************************
//grade calcilation
//****************************************
void cgpa::gra(float k)
{
    while(1)
    {
        if(k<2.0)
        {
            strcpy(gradeno,"F");
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
}
//***********************************************************************************************
void  cgpa::getgpa()
{
    get();
    totalcredit =0;
    total=0;
    cout<<"\n+++++ABOUT HIS / HER RESULT+++++++\n";
    cout<<"\n HOW MANY SUBJECT IN HIS/ HER EXAM HE/SHE ATTEND  =   ";
    cin>>i;
    for(int j=0; j<i; j++)
    {
        cout<<"\n";
        gets(subname[j]);
        cout<<" <> enter the subject code              =    ";
        gets(subcode[j]);
        Y:
        cout<<" <> enter the credit of that subject    =    ";
        cin>>credit[j];
        if(credit[j]<=5)
        {
                cout<<"";
        }
        else
        {
                cout<< "\n..............................\n      EROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................\n";
                goto Y;
        }
        z:
        cout<<" <> enter the gpa of that subject       =    ";
        cin>>gpa[j];
         if(gpa[j]<=credit[j])
        {
                cout<<"";
        }
        else
        {
                cout<< "\n..............................\n      EROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................\n";
                goto z;
        }
        cout<<"\n+++++++++++++++++   next subject";
        totalcredit=totalcredit+credit[j];
        subg[j]=gpa[j]*credit[j];
        total=subg[j]+total;
    }
    grade=total/totalcredit;
    cout<<"\nRESULT              =    "<<grade;
    gra(grade);
    cout<<"\nGRADE               =    "<<gradeno;
    cout<<"\n*****************************************************************************\n";

    fstream x("RESULT",ios::app|ios::out);
    x<<endl
    <<name<<"\t"<<roll<<"\t"<<grade<<"\t"<<gradeno<<endl;
    x.close();
}
//***************************************************************************(IT STORE MY INFORMATION USING FILE )
void cgpa::file()
{
    getgpa();
    ofstream out(roll);
    out<<"\nNAME        = "<<name;
    out<<"\nROLL        = "<<roll;
    out<<"\nDEPARTMENT  = "<<dep;
    out<<"\nBATCH       = "<<batch;
    out<<"\n\n\n\t\tsubject code ---- CREDIT of that SUBJECT----GPA of that SUBJECT";
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
    out<<"\n\nTOTTAL CREDIT     = "<<totalcredit;
    out<<"\n\nTOTAL GRADE POINT = "<<grade;
    out<<"\n\nCGPA "<<gradeno;
    out.close();
}
//*****************************************************************************( MAIN FUNCTION )
int main()
{
    char p;
    system("color C");
    while(1)
    {
            cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n" "\t""EAST WEST UNIVERSITY";
z:
        cout<<"\n------------------------------\nSELECT YOUR OPTION\n\n1...input\n2...search\n3...show\n4...exit";
        cout<<"\n--------\nYOU CHOOSE= ";
        cin>>p;
        cout<<"--------";
        switch (p){
        case 1:
        {
            cgpa x;
            x.file();
        }
        case 2:
        {
            cout<<"\ninput the roll   =  ";
            char roll[20];
            cin>>roll;
            cout<<"------------------------------HERE WE FOUND ";
            cout<<"\n";
            char c;
            ifstream x(roll);
            while(x)
            {
                x.get(c);
                cout<<c;
            }
        }
        case 3:
        {
            char c;
            ifstream x("RESULT");
            while(x)
            {
                x.get(c);
                cout<<c;
            }
        }
        case 4:
        {
                cout<<"\nTHANK YOU FOR USING ME !!!!!!!!\n\n\n\n\n\n\n\n\n";
                break;
        }
        default:
        {
                cout<<"\n";
                cout<<"..............................\n      EROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................";
                cout<<"\n";
                goto z;

        }
        }

    }
    return 0;
}
