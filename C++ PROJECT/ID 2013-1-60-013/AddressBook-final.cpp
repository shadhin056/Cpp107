#include<fstream>
#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void welcome();
void ba_bye();
void ba_bye()
{
    puts("Thank you for using address book :) ");
    getch();
}
void welcome()
{
    puts("**************** W E L C O M E  *********************** ");
    puts("******************** T O ****************************** " );
    puts("******** A D D R E S S  B O O K  P R O J E C T ******** ");
    puts("\n");
    puts(" \t*** PRESS ANY KEY TO CONTINUE***");
    getch();
    return;
}
class decVarFunc // declaring functions and variables name
{
public:
    //variable list
    int record;
    long pn1; // house phone number
    char pn2[10]; //office phone number
    char address1[50]; // house
    char address2[50]; // office
    char occupation[20];
    char name[20];
    char emailadd[25];
    char webadd[25];
    //function list
    void updateRec(); //modifying data
    void addNew(); //adding new record
    void deleteRec(); // delete records
    void menu();
    void search(); // searching records
    void view1(); // searched result
    void input(); // entering details
    void view(); //displaying all records
    char check(char *); // surity about update records
    int recNo(); // number of records
} obj;
void decVarFunc::addNew()
{
    ofstream fout;
    //out :: open a file for output
    //app :: open a file for output and write all data
    fout.open("eka",ios::out|ios::app);
    input();
    fout.write((char*)&obj,sizeof(obj));
    fout.close();
}
int decVarFunc::recNo()
{
    ifstream fin;
    fin.open("eka");
    //end :: Set the file pointer at the end of the file.
    fin.seekg(0,ios::end);
    int n;
    n=fin.tellg()/sizeof(obj);
    cout<<" \n NUMBER OF RECORDS = "<<n ;
    return n ;
}
void decVarFunc::search()
{
    ifstream fin;
    fin.open("eka");
    if(fin.fail())
    {
        cout<<" \n FILE NOT FOUND!!! ";
        getch();
        return;
    }
    printf("\n\nS E A R C H I N G\n\n");
    cout<<" \n ENTER PHONE NUMBER TO SEARCH : ";
    long pn;
    cin>>pn;
    int n;
    n=recNo();
    for(int i=0; i<n; i++)
    {
        fin.read((char*)&obj,sizeof(obj));
        if(pn==pn1)
        {
            view1();
            return;
        }
        else
        {
            cout<<"\n\nSORRY!! RECORD NOT FOUND\n\n";
        }
    }
    if(fin.eof())
    {
        cout<<" \n RECORD NOT FOUND\n ";
    }
}
void decVarFunc::input()
{


    char ch;

    printf("A D D I T I O N");

    cout<<" \n ENTER HOUSE PHONE NUMBER : ";
    cin>>pn1;
    cout<<" \n ENTER OFFICE PHONE NUMBER : ";
    cin>>pn2;
    // ch=cin.get();
    cin.get(ch);
    cout<<" \n ENTER NAME : ";
    gets(name);

    cout<<" \n ENTER THE OCCUPATION : ";
    gets(occupation);

    cout<<" \n ENTER HOUSE ADDRESS : ";
    gets(address1);

    cout<<" \n ENTER OFFICE ADDRESS : ";
    gets(address2);

    cout<<" \n ENTER EMAIL ADDRESS : ";
    gets(emailadd);

    cout<<" \n ENTER INTERNET ADDRESS : ";
    gets(webadd);

}

void decVarFunc::view1()
{
    cout<<"\n";
    cout<<" HOUSE PHONE NUMBER : "<<obj.pn1<<"\n";
    cout<<" OFFICE PHONE NUMBER2 : "<<obj.pn2<<"\n";
    cout<<" NAME : "<<obj.name<<"\n";
    cout<<" HOUSE ADDRESS : "<<obj.address1<<"\n";
    cout<<" OCCUPATION : "<<obj.occupation<<"\n";
    cout<<" OFFICE ADDRESS : "<<obj.address2<<"\n";
    cout<<" EMAIL ADDRESS : "<<obj.emailadd<<"\n";
    cout<<" INTERNET ADDRESS : "<<obj.webadd<<"\n";
    getch();
}
void decVarFunc::updateRec()
{

    printf("M O D I F I C A T I O N");

    long pn;
    int n,i;
    ifstream fin;
    ofstream fout;
    fin.open("eka");
    if(fin.fail())
    {
        cout<<"\n FILE NOT FOUND !";
        fout.close();
        exit(-1);
    }
    fout.open("new");
    n=recNo();
    if(n==0)
    {
        cout<<"\n FILE IS EMPTY ! ";
        getch();
        return;
    }
    while(fin.good())
    {
        fin.read((char*)&obj,sizeof(obj));
        fout.write((char*)&obj,sizeof(obj));
    }
    fin.close();
    fout.close();
    fout.open("eka",ios::trunc);
    fin.open("new");
    if(fin.fail())
    {
        cout<<"\n FILE NOT FOUND !";
        exit(-1);
    }
    char ch;
    cout<<"\n ENTER PHONE NUMBER :";
    cin>>pn;
    ch=cin.get();

    for(i=0; i<n; i++)
    {
        fin.read((char*)&obj,sizeof(obj));
        char d;
        if(pn==pn1)
        {
            //view1();
            d=check("HOUSE PHONE NUMBER ");
            if((d=='y') || (d=='Y'))
            {
                cout<<"\n ENTER NEW PHONE NUMBER :";
                cin>>pn1;
                ch=cin.get();

            }
            if(check("OFFICE PHONE NUMBER ")=='Y')
            {
                cout<<"\n ENTER NEW PHONE NUMBER :";
                cin>>pn2;
                ch=cin.get();

            }
            if(check("NAME")=='y')
            {
                cout<<"\n ENTER NEW NAME : ";
                gets(name);
            }
            if(check("HOME ADDRESS")=='y')
            {
                cout<<"\n ENTER NEW ADDRESS :";
                gets(address1);
            }
            if(check("OFFICE ADDRESS")=='y')
            {
                cout<<"\n ENTER NEW ADDRESS :";
                gets(address2);
            }
            if(check("EMAIL ADDRESS:")=='y')
            {
                cout<<"\n ENTER NEW MAIL ADDRESS :";
                gets(emailadd);
            }
            if(check("INTERNET ADDRESS")=='y')
            {
                cout<<"\n ENTER NEW INTERNET ADDRESS :";
                gets(webadd);
            }
        }
        fout.write((char*)&obj,sizeof(obj));
    }
    fout.close();
    fin.close();
}
char  decVarFunc::check(char *s)
{
    cout<<"\n MODIFY \t "<<s<<"\t"<<"Y/N";
    char ch;
    ch =getch();
    //cin.get(ch);
    if((ch=='y')||(ch=='Y'))
        return 'y';
    else
        return 'n';
}
void  decVarFunc::deleteRec()
{

    printf("D E L E T I O N \n");
    long pn;
    int n,i;
    ifstream fin;
    ofstream fout;
    fin.open("eka");
    if(fin.fail())
    {
        cout<<"\n FILE NOT FOUND ! ";
        getch();
        return;
    }
    fout.open("new");
    n=recNo();
    if(n==0)
    {
        cout<<"\n FILE IS EMPTY ! ";
        getch();
        return;
    }
    for(i=0; i<n; i++)
    {
        fin.read((char*)&obj,sizeof(obj));
        fout.write((char*)&obj,sizeof(obj));
    }
    fin.close();
    fout.close();
    fout.open("eka",ios::trunc);
    fin.open("new");

    if(fin.fail())
    {
        cout<<"\n FILE NOT FOUND ! ";
        getch();
        return;
    }
    cout<<"\n ENTER PHONE NUMBER :";
    cin>>pn;
    for(i=0; i<n; i++)
    {
        fin.read((char*)&obj,sizeof(obj));
        if(pn!=pn1){
            fout.write((char*)&obj,sizeof(obj));
            cout<<"\nDELETED!!!\n";}
    }
    fout.close();
    fin.close();

}
void decVarFunc::view()
{
    ifstream fin;
    int n,j;
    fin.open("eka");
    if(fin.fail()||fin.bad())
    {
        cout<<"\n FILE NOT FOUND ! ";
        getch();
        return;
    }

    int i=0;
    n=recNo();
    for(j=0; j<n; j++)
    {
        cout<<"\n RECORD "<<i+1<<"\n";
        fin.read((char*)&obj,sizeof(obj));
        cout<<"\n PHONE NUMBER1 :"<<obj.pn1<<"\n";
        cout<<"\n PHONE NUMBER2 :"<<obj.pn2<<"\n";
        cout<<"\n NAME :"<<obj.name<<"\n";
        cout<<"\n HOUSE ADDRESS :"<<obj.address1<<"\n";
        cout<<"\n OCCUPATION :"<<obj.occupation<<"\n";
        cout<<"\n OFFICE ADDRESS :"<<obj.address2<<"\n";
        cout<<"\n INTERNET ADDRESS :"<<obj.webadd<<"\n";
        cout<<"\n EMAIL ADDRESS : "<<obj.emailadd<<"\n";
        i+=1;
    }
    fin.close();
    getch();

}

void  decVarFunc::menu()
{
    char ch;
    printf(" \n\nMAIN MENU\n");
    printf(" \tA:ADD\n");
    printf(" \tD:DELETE\n");
    printf(" \tU:UPDATE\n");
    printf(" \tV:VIEW\n");
    printf(" \tS:SEARCH\n");
    printf(" \tE:EXIT\n");
    ch=getch();

    switch(ch)
    {
    case 'a':
    case 'A':
        addNew();
        break;
    case 'd' :
    case 'D' :
        deleteRec();
        break;
    case 'u':
    case 'U':
        updateRec();
        break;
    case 'v':
    case 'V':
        view();
        break;
    case 's':
    case 'S':
        search();
        break;
    case 'e':
    case 'E':
        ba_bye();
        system("cls");
        exit(0);

    }
}
int main()
{
    welcome();
    for(;;)
    {
        obj.menu();
    }

    return 0;
}
