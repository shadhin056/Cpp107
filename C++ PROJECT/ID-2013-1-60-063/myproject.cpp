#include<iostream>
#include<fstream>
#include <cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;

class Player
{


	int salary;
public:
    int save;
    int loss;
    int goal;
    int miss;
    int defend;
    int passing;
    int mispass;
    char name[25];
    int id,choice3;
    int per;
	Player()
	{
	}
	~Player()
	{
	}
	void setdata()
	{
		cout<<"Enter the id no. of the Player :"<<endl;
		cin>>id;
		cout<<"Enter the name of the Player: "<<endl;
		gets(name);
		cin.get(name,25);
		cout<<"Enter the salary: "<<endl;
		cin>>salary;
        cout<<"\n\n\t\t1.Goalkeeper"<<endl;
        cout<<"\t\t2.Defender"<<endl;
        cout<<"\t\t3.Striker"<<endl;
        cout<<"\t\t4.Midfielder"<<endl;
        cout<<"\n\t\tEnter your choice: ";
        cin>>choice3;
		    switch(choice3)
		    {
		       case 1: goalkeeper();
		               break;
		       case 2: defender();
                       break;
		       case 3: striker();
		               break;
		       case 4: midfielder();
		               break;
		       default: cout<<"\n\n\t\tWrong input\n\n"<<endl;

		    }


	}
	 void goalkeeper()
    {

        cout<<"\nHow many goal he saved?"<<endl;
        cin>>save;
        save=save*25;
        cout<<"\nHow many goal he got?"<<endl;
        cin>>loss;
        loss=loss*75;
        per=save-loss;
        if(per<0)
        per=0;
    }
    void defender()
    {
         cout<<"\nHow many defend?"<<endl;
         cin>>defend;
         defend=defend*25;
         cout<<"\nHow many missdefence?"<<endl;
         cin>>loss;
         loss=loss*75;
         per=defend-loss;
         if(per<0)
         per=0;
    }
    void midfielder()
    {
        cout<<"\nHow many pass??"<<endl;
        cin>>passing;
        passing=passing*25;
        cout<<"\nHow many miss pass?"<<endl;
        cin>>mispass;
        mispass=mispass*75;
        per=passing-mispass;
        if(per<0)
        per=0;
    }
    void striker()
    {
        cout<<"\nHow many goal?"<<endl;
        cin>>goal;
        goal=goal*25;
        cout<<"\nHow many goal he miss?"<<endl;
        cin>>miss;
        miss=miss*75;
        per=goal-miss;
        if(per<0)
        per=0;
    }
	void display()
	{
		cout<<id<<"\t\t";
		cout<<setw(20)<<setiosflags(ios::left)<<name;
		cout<<"\t\t"<<salary;
		cout<<"\t\t"<<per<<std::endl;
	}
};
int getsizeofFile();
void Add();
void View();
void Edit();
void Search();
char fname[]={"file.dat"};

//*************MAIN FUNCTION**************

int main()
{
	int choice;
	cout<<"\t*********************************************************"<<endl;
	cout<<"\t\t**Walcome to the Football Player database**"<<endl;
	cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
	cout<<"\t*********************************************************"<<endl;
	cout<<"\n\n\n\n\n";
	while(1)
	{
		cout<<"\t\t\t\t1.Add"<<endl;
		cout<<"\t\t\t\t2.View"<<endl;
		cout<<"\t\t\t\t3.Edit"<<endl;
		cout<<"\t\t\t\t4.Search"<<endl;
		cout<<"\t\t\t\t5.Exit"<<endl;
		cout<<"\n\n\n\t\t\t\tEnter your choice: ";
		cin>>choice;
		system("cls");
		switch(choice)
		{
		case 1: Add();
			     break;
		case 2: View();
			    break;
		case 3: Edit();
			     break;
		case 4: Search();
			    break;
		case 5: cout<<"\t*********************************************************"<<endl;
	            cout<<"\t\t**Walcome to the Football Player database**"<<endl;
	            cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	            cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
	            cout<<"\t*********************************************************"<<endl;
                cout<<"\n\n\n\n\n";
		        cout<<"\n\n\t\tThanks for using this app"<<endl;
		        exit(0);
        default: cout<<"\n\n\t\t\tWrong input.Try again\n"<<endl;

		}
		cout<<"\n\n\n";
	}
		return 0;
}
//**********************ADD FUNCTION*************************//

void Add()
{
    cout<<"\t*********************************************************"<<endl;
	cout<<"\t\t**Walcome to the Football Player database**"<<endl;
	cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
	cout<<"\t*********************************************************"<<endl;
	cout<<"\n\n\n\n\n";
	Player t1;
	fstream fout(fname,ios::app|ios::out);
	t1.setdata();
	fout.write((char*)&t1,sizeof(t1));
	fout.close();
}
//**************FIND THE SIZE OF FILE***********************//

int getsizeofFile()
{

    int size;
    int total;
    Player t1;
    ifstream fin(fname);
    fin.seekg(0,ios::end);
    total=fin.tellg();
    fin.close();
    size=total/sizeof(t1);
    return (size);
}
//*******************VIEW FUNCTION***********************//

void View()
{
    cout<<"\t*********************************************************"<<endl;
	cout<<"\t\t**Walcome to the Football Player database**"<<endl;
	cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
	cout<<"\t*********************************************************"<<endl;
	cout<<"\n\n\n\n\n";

    Player t;
    int size=getsizeofFile();
    ifstream fin(fname);
    if(fin==NULL)
    {
        cout<<"No record found"<<endl;
    }
    else
    {
        cout<<"ID\t\tNAME\t\t\t\tSALARY\t\tPerformance"<<endl;
        for(int i=0;i<size;i++)
        {
            fin.read((char*)&t,sizeof(t));
            t.display();
            cout<<"\n";
        }
    }
    fin.close();
}
//********************EDIT FUNCTION********************//

void Edit()
{
    cout<<"\t*********************************************************"<<endl;
	cout<<"\t\t**Walcome to the Football Player database**"<<endl;
	cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
	cout<<"\t*********************************************************"<<endl;
	cout<<"\n\n\n\n\n";
    Player t;
    int size=getsizeofFile();
    int password;
    cout<<"\n\n\t\tEnter the password to edit the database"<<endl;
    cout<<"\n\t\tPassword : ";
    cin>>password;
    if(password==1234)
    {
        cout<<"\n\n\t\tCorrect Password\n\n"<<endl;
        ifstream fin(fname);
    if(fin==NULL)
    {
        cout<<"No record found"<<endl;
    }
    else
    {
        cout<<"ID\t\tNAME\t\t\t\tSALARY\t\tPerformance"<<endl;
        for(int i=0;i<size;i++)
        {
            fin.read((char*)&t,sizeof(t));
            t.display();
            cout<<"\n";
        }
    }
    fin.close();
    fstream fil(fname,ios::ate|ios::out|ios::in);
    fil.seekg(0);
    int id;
    int counter=0;
    cout<<"Enter the Player id: "<<endl;
    cin>>id;
    if(fil==NULL)
    {
        cout<<"\nSorry no record found\n"<<endl;

    }
    else
    {
        for(int i=0;i<size;i++)
        {
            fil.read((char*)&t, sizeof(t));
            if(id==t.id)
            {
                int size=fil.tellg();
                size=size-sizeof(t);
                fil.seekp(size,ios::beg);
                Player newobj=t;
                newobj.setdata();
                fil.write((char*)&newobj,sizeof(newobj));
                counter=1;
                break;
            }
            cout<<"\n";
        }
    }
    fil.close();
    if(counter==0)
    {
        cout<<"\nSorry no record found\n"<<endl;
    }
    else
    {
        cout<<"\nRecord Updated\n"<<endl;
    }
    }
    else
    {
        cout<<"\n\n\t\tWrong password"<<endl;
    }

}
//*****************SEARCH FUNCTION********************//

void Search()
{

    Player t;
    int id=0,choice;
    int counter=0;
    char name2[25];
    int size=getsizeofFile();
    cout<<"\t*********************************************************"<<endl;
    cout<<"\t\t**Walcome to the Football Player database**"<<endl;
    cout<<"\t\t\tDeveloped by TANZIM RIZWAN"<<endl;
	cout<<"\t\t\t\t  ID:2013-1-60-063"<<endl;
    cout<<"\t*********************************************************"<<endl;
    cout<<"\n\n\n\n\n";
    ifstream fin(fname);
    if(fin==NULL)
    {
        cout<<"No record found"<<endl;
    }
    else
    {
        cout<<"ID\t\tNAME\t\t\t\tSALARY\t\tPerformance"<<endl;
        for(int i=0;i<size;i++)
        {
            fin.read((char*)&t,sizeof(t));
            t.display();
            cout<<"\n";
        }
    }
    fin.close();
    while(1)
    {
    cout<<"Whice type of search you want"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"\t\t1.Id Search"<<endl;
    cout<<"\t\t2.Name Search"<<endl;
    cout<<"\n\n\t\tEnter your choice: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"You have selected Id Search option"<<endl;
        cout<<"Enter the id of the Player: "<<endl;
        cin>>id;
        ifstream fin(fname);
        cout<<"\n\n\n";
        cout<<"ID\t\tNAME\t\t\t\tSALARY\t\tPerformance"<<endl;
        if(fin==NULL)
        {
            cout<<"No id found"<<endl;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                fin.read((char *)&t,sizeof (t));
                if(id==t.id)
                {
                    t.display();
                    counter=1;
                }
                cout<<"\n";
            }
          fin.close();
          if(counter==0)
          {
             cout<<"No record found"<<endl;
          }
        }
    }
    else if(choice==2)
    {
        cout<<"You have selected Name Search option"<<endl;
        cout<<"Enter the name of the Player: "<<endl;
        cin>>name2;
        ifstream fin(fname);
        cout<<"\n\n\n";
        cout<<"ID\t\tNAME\t\t\t\tSALARY\t\tPerformance"<<endl;
        if(fin==NULL)
        {
            cout<<"No id found"<<endl;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                fin.read((char *)&t,sizeof (t));
                if(!strcmp(t.name,name2))
                {
                    t.display();
                    counter=1;
                }
                cout<<"\n";
            }
          fin.close();
          if(counter==0)
          {
             cout<<"No record found"<<endl;
          }
        }

    }
     else
    {
        system("cls");
        cout<<"\n\n\n\n\t\tWRONG INPUT\n\n"<<endl;
        break;
    }

    }


}
