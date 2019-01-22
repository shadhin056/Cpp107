
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

class contest
{
private:
    char roll[10];
    float x;
    char name[20];
    char s[100],ans;

public:
    contest()
    { x=0; };
    void init();
    void define();
    void display();
};
void  contest :: define()
{
   ifstream in;
   char a;
      int i=1;
   in.open("quiz.txt");
    while(in.eof()==0)
    {
    in.getline(s,100);
    cout<<endl<<s;
   if(i==5)
   {
   in.get(a);
   cout<<"\nans:";
    cin>>ans;
   i=-1;
    if(ans==a)
       {
       x=x+5;
       cout<<" *Your ans  correct.\n";
       }
    else
       {
       if(x>0)
        x=x-2.5;
       cout<<" # Wrong ans.\n";
       }
    }
    i++;
    }
   in.close();
}
     void contest :: init()
       {
     cout<<"\t\t\t   Examinee Name:";
     cin>>name;
     cout<<"\t\t\t   Examinee roll:";
     cin>>roll;
       }
     void contest :: display()
       {
     cout<<"\n **Result:\n";
     cout<<"\t"<<name<<" you got total "<<x<<" marks,out of 25.\n";
       }

int  main()
{

    contest r;
    system("color F9");
    cout<<"      \t\t\t~~~*** QUIZ CONTEST ***~~~\t      Total Marks:25\n\n";
    r.init();
    cout<<"\t*5 marks per Ques(half negative marking for wrong ans)";
       L:
    cout<<"\n\n\tselect your choice:\n"
        <<"\n\t1 for start exam:"
        <<"\n\t0 for quit the exam :";
       int c;
       cin>>c;
       switch(c)
       {
       case 1:
        r.define();
        r.display();
        break;
       case 0:
        exit(1);
       default:
        cout<<"invalid choice!";
        goto L;
       }
}
