//project name:EAST WEST University GPA Calculation.
//NAME: MD.MONIRUZZAMAN KHONDAKER
//ROLL :2012-2-60-056
//Section  :  02

#include<fstream>       //using file
#include<string.h>      //character of array
#include<iostream>      //C++
#include<stdio.h>       //c header file
#include<stdlib.h>      //color header file

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
    }                                              // back 118
};
//*****************************************
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
//****************************************
//grade calculation
//****************************************
void cgpa::gra(float k)             // from 171
{
    while(1)
    {
        if(k<=.99)
        {
            strcpy(gradeno,"F"); //**********string copy
            break;
        }
        else if(k<=1)
        {
            strcpy(gradeno,"D" );
            break;
        }
        else if(k<=1.30)
        {
            strcpy(gradeno,"D+" );
            break;
        }
        else if(k<=1.70)
        {
            strcpy(gradeno,"c-" );
            break;
        }
        else if(k<=2)
        {
            strcpy(gradeno,"c" );
            break;
        }
        else if(k<=2.3)
        {
            strcpy(gradeno,"c+" );
            break;
        }
        else if(k<=2.70)
        {
            strcpy(gradeno,"B-" );
            break;
        }
        else if(k<=3.0)
        {
            strcpy(gradeno,"B" );
            break;
        }
        else if(k<=3.3)
        {
            strcpy(gradeno,"B+" );
            break;
        }
        else if(k<=3.70)
        {
            strcpy(gradeno,"A-" );
            break;
        }
        else if(k<=4.0)
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
}                                       // goto 171
//************************************** getting subject code & credit
void  cgpa::getgpa() //come in 174
{
    get(); // goto line 22
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
Y:
        cout<<" [] CREDIT OF THAT SUBJECT  =    ";
        cin>>credit[j];
        if(credit[j]<=4)
        {
            cout<<"";
        }
        else
        {
            cout<< "\n..............................\n      EROR 404  \n YOUR input WAS WRONG (-_-)\n [ please try again ] \n..............................\n";
            goto Y;
        }
z:
        cout<<" [] GPA OF THAT SUBJECT     =    ";
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
        cout<<"\n+++++++++++++++++   ";
        totalcredit=totalcredit+credit[j];
        subg[j]=gpa[j]*credit[j];
        total=subg[j]+total;
    }
// grade calculation
    grade=total/totalcredit;
    cout<<"\n [] RESULT                  =    "<<grade;
    gra(grade);                 // goto line 58
    cout<<"\n [] GRADE                   =    "<<gradeno;
    cout<<"\n********************************************************************************\n";
// result store kora hoyeche
    fstream x("RESULT",ios::app|ios::out);

    x<<endl<<"\t"<<name<<"\t"<<roll<<"\t"<<grade<<"\t"<<gradeno<<endl;
    x.close();                  // back to 174
}
//******************************(IT STORE MY INFORMATION USING FILE )
void cgpa::file()   // come in from  219
{
    getgpa(); // goto line 115
    ofstream out(roll);
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

    out.close();    // end of file // end of input 1

}
//*****************************************************************************( MAIN FUNCTION )
int main()
{
    int p;
    system("color 2");//color
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
            x.file(); //goto line 172
        }
        else if(p==2)
        {
            //system("cls");
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
            ifstream x("RESULT");
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
    return 0;
}
