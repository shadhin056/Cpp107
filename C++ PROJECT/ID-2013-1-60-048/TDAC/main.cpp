#include<iostream>
#include<fstream>
#include<stdlib.h>
#include <cstdlib>
#include<iomanip>
#include<cstring>
using namespace std;

char file_name[15]={"userdata.dat"};
void greetings()
{
    cout<<"\n"<<endl;
    cout<<"\t**********************************************************"<<endl;
    cout<<"\t..::Welcome To Telephone Directory with Access Control::.."<<endl;
    cout<<"\t**********************************************************"<<endl;
    cout<<"\n\n";
}

/********************************************************************/


class user_data
{
protected:
    char cell_num[12];
    char tele_num[16];
    char user_name[30];
    char city[15];
    char area[15];

public:
    int id;
    user_data()
    {

    }
    ~user_data()
    {

    }
    void get_detail();
    void show_detail();
    void search();
    int getsizeofFile();
};

void user_data::get_detail()
{
    greetings();
    cout<<"\n\tInput national ID:";
    cin>>id;
    cout<<"\n\tInput cell number:";
    cin>>cell_num;
    cout<<"\n\tInput telephone number:";
    cin>>tele_num;
    cin.ignore();
    cout<<"\n\tInput user name:";
    gets(user_name);
    cout<<"\n\tInput city name:";
    gets(city);
    cout<<"\n\tInput area name:";
    gets(area);
    cout<<"\n\tUser Account Created!"<<"\n"<<endl;
}

void user_data::show_detail()
{
    cout<<"\n\tID:"<<id<<endl;
    cout<<"\tName:"<<user_name<<endl;
    cout<<"\tCell Number:"<<cell_num<<endl;
    cout<<"\tTelephone Number:"<<tele_num<<endl;
    cout<<"\tCity:"<<city<<endl;
    cout<<"\tArea:"<<area<<endl;
}

int user_data::getsizeofFile()
{

    int size;
    int total;
    user_data u1;
    ifstream file_in(file_name);
    file_in.seekg(0,ios::end);
    total=file_in.tellg();
    file_in.close();
    size=total/sizeof(u1);
    return (size);
}

void user_data::search()
{

    user_data u;
    int id=0,choice;
    int counter=0;
    char name2[25];
    int size=getsizeofFile();

    ifstream file_in(file_name);
    if(file_in==NULL)
    {
        cout<<"\n\tNo Record Found!"<<endl;
    }
    file_in.close();
    while(1)
    {
    cout<<"\n"<<endl;
    cout<<"\tAvailable Search Criteria.";
    cout<<"\n\t1.Search With ID."<<endl;
    cout<<"\t2.Search With Name."<<endl;
    cout<<"\t3.Stop Search.";
    cout<<"\n\n\tSelect a Task:";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\n\tInput the User's ID:";
        cin>>id;
        ifstream file_in(file_name);
        if(file_in==NULL)
        {
            cout<<"\n\tNo Record Found!"<<endl;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                file_in.read((char *)&u,sizeof (u));
                if(id==u.id)
                {
                    u.show_detail();
                    counter=1;
                }
                cout<<"\n";
            }
          file_in.close();
          if(counter==0)
          {
             cout<<"\n\tNo Record Found!"<<endl;
          }
        }
    }
    else if(choice==2)
    {
        cout<<"\n\tInput the User's Name:";
        cin>>name2;
        ifstream file_in(file_name);
        cout<<"\n\n\n";
        if(file_in==NULL)
        {
            cout<<"\n\tNo Record Found!"<<endl;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                file_in.read((char *)&u,sizeof (u));
                if(!strcmp(u.user_name,name2))
                {
                    u.show_detail();
                    counter=1;
                }
                cout<<"\n";
            }
          file_in.close();
          if(counter==0)
          {
             cout<<"\n\tNo Record Found!"<<endl;
          }
        }

    }
     else if(choice==3)
    {
        system("cls");
        cout<<"\n\tSearch Stopped!"<<"\n"<<endl;
        greetings();
        break;
    }
    else
        system("cls");
        cout<<"\n\n\tInvalid Input!\n\n"<<endl;
        greetings();
        break;

    }


}



/*****************************************************************************/

class admin_data : public user_data
{
    protected:
        string username;
        string password;
        string sample_username;
        string sample_password;

    public:
        admin_data();
        int admin_login();
        void add_fileinfo();
        int getsizeofFile();
        void edit_fileinfo();
        void view_fileinfo();
        int control_panel();
};
admin_data::admin_data()
{
    username="tdac_admin";
    password="bl4ckhawk5";
}
int admin_data::admin_login()
{
    cout<<"\tUsername:";
    cin>>sample_username;
    cout<<"\n"<<endl;
    cout<<"\tPassword:";
    cin>>sample_password;
    if(username==sample_username && password==sample_password)
        {
            return 1;
        }
    else
        cout<<"\n\tUsername/Password Incorrect!"<<"\n"<<endl;
}

int admin_data::control_panel()
{
    greetings();
    int ch;
    cout<<"\n\tAdmin Contrl Panel:";
    cout<<"\n\t1.Add a New User Account."<<endl;
    cout<<"\t2.Edit an Existing account."<<endl;
    cout<<"\t3.View All Available Account."<<endl;
    cout<<"\t4.Log Out"<<endl;
    cout<<"\n\tSelect a Task:";
    cin>>ch;
    system("cls");
    return ch;
}

int admin_data::getsizeofFile()
{

    int size;
    int total;
    user_data u1;
    ifstream file_in(file_name);
    file_in.seekg(0,ios::end);
    total=file_in.tellg();
    file_in.close();
    size=total/sizeof(u1);
    return (size);
}

void admin_data::add_fileinfo()
{
    user_data u1;
    fstream file_in(file_name,ios::app|ios::out);
    u1.get_detail();
    file_in.write((char*)&u1,sizeof(u1));
    file_in.close();

}

void admin_data::view_fileinfo()
{
    user_data u4;
    int size=getsizeofFile();
    ifstream file_in(file_name);
    if(file_in==NULL)
    {
        cout<<"\n\tNo Record Found!"<<endl;
    }
    else
    {
        for(int i=0;i<size;i++)
        {
            file_in.read((char*)&u4,sizeof(u4));
            u4.show_detail();
            cout<<"\n";
        }
    }
    file_in.close();
}

void admin_data::edit_fileinfo()
{
    user_data u3;
    int size=getsizeofFile();
    ifstream file_in(file_name);
    if(file_in==NULL)
    {
        cout<<"\t\nNo Record Found!"<<endl;
    }
    file_in.close();
    fstream fil(file_name,ios::ate|ios::out|ios::in);
    fil.seekg(0);
    int id;
    int counter=0;
    cout<<"\n\tEnter The User's ID:";
    cin>>id;
    if(fil==NULL)
    {
        cout<<"\n\tNo Record Found!\n"<<endl;

    }
    else
    {
        for(int i=0;i<size;i++)
        {
            fil.read((char*)&u3, sizeof(u3));
            if(id==u3.id)
            {
                int size=fil.tellg();
                size=size-sizeof(u3);
                fil.seekp(size,ios::beg);
                user_data newobj=u3;
                newobj.get_detail();
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
        cout<<"\n\tNo Record Found1\n"<<endl;
    }
    else
    {
        cout<<"\n\tDatabase Updated Successfully!\n"<<endl;
    }

}



/*****************************************************************************/

int main()
{
    admin_data ad;
    user_data us;
    char ch;

    greetings();
    while(1)
    {
        cout<<"\tMain Menu:"<<endl;
        cout<<"\n\t1. Administrator Login."<<endl;
        cout<<"\t2. General User."<<endl;
        cout<<"\t3. Close Program."<<"\n\n"<<endl;
        cout<<"\tSelect Your Task:";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':greetings();
                 cout<<"\tYou Have Asked to Access as Adminstrator."<<"\n\n"<<endl;
                 cout<<"\tPlease Provide Your Login Details."<<"\n\n"<<endl;
                 if(ad.admin_login()==1)
                 {
                     system("cls");
                     cout<<"\n\n\tAdmin Login Successful!"<<endl;
                     int admin_login_status=0;
                     while(admin_login_status!=1)
                     {
                         switch(ad.control_panel())
                         {
                             case 1:ad.add_fileinfo();
                                break;

                             case 2:ad.edit_fileinfo();
                                break;

                             case 3:ad.view_fileinfo();
                                break;

                             case 4:admin_login_status=1;
                                    cout<<"\n\tLogged Out!\n"<<endl;;
                                    greetings();
                                break;

                            default:
                                break;

                         }
                     }

                 }
            break;

        case '2':greetings();
                 cout<<"\n\tYou Have Asked to Access as General User."<<"\n\n"<<endl;
                 cout<<"\t1.Search the Directory for Contacts."<<endl;
                 us.search();
            break;

        case'3':cout<<"\t****************Program Terminated******************"<<endl;
                exit(0);

        default:
            break;
        }
    }
}
