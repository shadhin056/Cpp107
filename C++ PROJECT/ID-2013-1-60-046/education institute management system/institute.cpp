#include <iostream>
#include<string.h>
#include<conio.h>
#include <sstream>
#include <fstream>

 char User[100],pass[100],snm[100],option,op,type,dep[30],cgpa[10],date[20],id[20],sm[2],crs[100];
using namespace std;

class person
{
public:
    string Name,dob;

};

class Teacher:public person
{

public:
    string CourseTaken,name,pss,dob,line;

    void show(char ser[])
    {
        ifstream myfile("trainer.txt");
        while (getline(myfile, line))
        {

                istringstream ss(line);
                ss>>name>>pss>>dob>>CourseTaken;
                if(name == ser)
                {
                    cout<<"\nName: "<<name<<"\n"<<"Date of birth"<<dob<<"\n"<<"Course Taken by: "<<CourseTaken;
                    cout<<"\n";
                    break;
                }

        }
        myfile.close();

    }
};
class Student: public person
{
    public:
    string dept,id;
    int semester;
    void show(char User[])
    {
        ifstream myfile("student.txt");
        string line,Name,dob,id,dep,semester,pss,cg;
        while (getline(myfile, line))
        {
            istringstream ss(line);
            ss>>Name>>pss>>dob>>id>>dep>>semester>>cg;
            cout<<"\n";
            if(Name == User)
            {
                cout<<"\nName: "<<Name<<"\n"<<"Date of birth"<<dob<<"\n"<<"ID: "<<id<<"\n"<<"dep:"<<dep<<"\nSemester"<<semester<<"\n\n";

            }
        }
        myfile.close();
    }
};




class admin:public person
{
    public:
    string name,dob,pss,line;
    void show(char User[])
    {
		ifstream myfile("admin.txt");
		getline(myfile,line);
	   {
            istringstream ss(line);
            ss>>name>>pss>>dob;

            cout<<"\nName:"<<name<<"\n"<<"date of birth"<<dob<<"\n";
			cout<<"\n";
        
        myfile.close();
	   }
       

    }
};
void Take_user_input()
{
    cout<<"Enter your Name: ";
    cin>>User;
    cout<<"password: ";
    cin>>pass;
    cout<<"Enter your date of birth";
    cin>>date;

        if(type == 's')
        {
            cout<<"Enter your department: ";
            cin>>dep;
            cout<<"Enter your id: ";
            cin>>id;
            cout<<"Enter your semester";fstream myfile("student.txt");
            cin>>sm;
            cout<<"Enter your CGPA: ";
            cin>>cgpa;
        }
        else if(type == 't')
        {
            cout<<"Enter Course taken by you";
            cin>>crs;
        }
}

void Update(char fname[])
{
    ifstream inputFile("temp.txt");
    ofstream myfile;
    myfile.open (fname);
   // myfile << "Writing this to a file.\n";
    string line;
    while (getline(inputFile, line))
    {
            myfile<<line;
            myfile<<"\n";
    }
    myfile.close();
    inputFile.close();

}
void Delet(char fname[])
{
    ifstream inputFile(fname);
    ofstream myfile;
    myfile.open ("temp.txt");
   // myfile << "Writing this to a file.\n";
    char user_to_delet[200];
    string line;
    cout<<"Enter the user name to delet:";
    cin>>user_to_delet;
    while (getline(inputFile, line))
    {
        istringstream ss(line);

        string name;

        ss >> name;
        if(user_to_delet != name)
        {
            myfile<<line;
            myfile<<"\n";
        }
    }
    myfile.close();
    inputFile.close();
    Update(fname);
}
int check(char dname[])
{
    ifstream inputFile(dname);
    string line;
    int permition = 0;
    while (getline(inputFile, line))
    {

        istringstream ss(line);

        string name,p;

        ss >> name >> p;
        again:
        if(User == name)
        {
            if(pass == p)
            {
                cout <<"Successfully logged in" ;
                permition = 1;
            }
            else
            {
                cout<<"Wrong pass word\nEnter your password again:";
                cin>>pass;
                goto again;
            }

           break;
        }

    }
    inputFile.close();
return permition;
}

void Creat_Account(char fname[])
{
        FILE *f = fopen(fname,"a");
        fputs(User,f);
        putc(' ',f);
        fputs(pass,f);
        putc(' ',f);
        fputs(date,f);
        if(type == 's')
        {
            putc(' ',f);
            fputs(dep,f);
            putc(' ',f);
            fputs(id,f);
            putc(' ',f);
            fputs(sm,f);
            putc(' ',f);
            fputs(cgpa,f);
        }
        else if(type == 't')
        {
            putc(' ',f);
            fputs(crs,f);
        }

        fprintf(f,"\n");
        fclose(f);
}

void Add_Courses()
{

    FILE *f;
    f = fopen("Courses.txt","a");
    char Cname[200],trainer[200],p;
    float credit;

    do
    {
        cout<<"Enter your course name:  ";
        cin>>Cname;
        cout<<"Enter trainer's name:  ";
        cin>>trainer;
        cout<<"Enter course credit";
        cin>>credit;
        fprintf(f,"%s %s %f",Cname,trainer,credit);
        fprintf(f,"\n");
        cout<<"\npress:\n\n\tM: for main menu\n\tc: for add more course";
        cin>>p;
    }  while(p!='m');
    fclose(f);
}

void Show_Courses()
{
    ifstream myfile("Courses.txt");
    string line,cnm,tnm,crdt;
    cout<<"Course Name\tTrainer's name\tcredit hour\n";
    cout<<"-------------------------------------------\n";
    while (getline(myfile, line))
    {
            istringstream ss(line);
            ss>>cnm>>tnm>>crdt;
            cout<<cnm<<"\t\t"<<tnm<<"\t\t"<<crdt;
            cout<<"\n";
    }
    myfile.close();

}

int main()
{
    int permition;
    cout<<"Welcome to MakeITpossible:\n";
    cout<<"\nPress:\n\tT: for teacher\n\ts: for Student\n\ta:for admin\n";
    cin>>type;
    if(type == 's')
    {

        cout<<"\npress:\n\t\"1:\"for login:\n\t\"2:\"for creat new account\n";
        cin>>op;
        if(op == '1')
        {
            cout<<"Enter your Name: ";
            cin>>User;
            cout<<"password: ";
            cin>>pass;
            permition = check("student.txt");
            if(permition == 1)
            {
                do
                {
                    cout<<"\n\nEnter:\n\n\t\"c\":to see the courses:\n\t\"p\"to see your profile\n\t\"t\"to see trainer's profile\n\t\"q\" to quit";

                    cin>>option;

                    if(option == 'c')
                    {
                        Show_Courses();
                    }
                    else if(option == 'p')
                    {
                        Student st;
                        st.show(User);
                    }
                    else if(option == 't')
                    {
                        cout<<"Enter the teacher's name";
                        cin>>snm;
                        Teacher t;
                        t.show(snm);
                    }
                }while(option!='q');
            }

        }

        else if(op == '2')
        {
            cout<<"Creat an account";
            Take_user_input();
            Creat_Account("student.txt");
        }
    }
    else if(type == 'a')
    {
        char op;
        cout<<"Welcome admin";
        cout<<"\nEnter :\n\t1: to login\n\t2: creat account: ";
        cin>>op;
        if(op == '1')
        {
            cout<<"Enter your Name: ";
            cin>>User;
            cout<<"password: ";
            cin>>pass;
            permition = check("admin.txt");
            if(permition == 1)
            {

                do
                {
                    cout<<"\n\nEnter:\n\n\t1:to see the courses:\n\t2: to add course\n\t3:to see your profile\n\t4: to see trainer's profile\n\t5: to see a student's profile\n\t6: to delet an student from list\n\t\"q\" to quit";
                    cin>>option;
                    if(option == '1')
                    {
                         Show_Courses();
                    }
                    else if(option == '2')
                    {
                        Add_Courses();
                    }
                    else if(option == '3')
                    {
                        admin a;
                        a.show(User);
                    }
                    else if(option == '4')
                    {
                        cout<<"Enter name of trainer: ";
                        cin>>snm;
                        Teacher t;
                        t.show(snm);
                    }
                    else if (option == '5')
                    {
                        cout<<"Enter student's name to see profile:";
                        cin>>snm;
                        Student s;
                        s.show(snm);
                    }
                    else if (option == '6')
                    {
                        Delet("student.txt");
                    }
                }while(option!='q');
            }


        }
        else if(op == '2')
        {
            Take_user_input();
            Creat_Account("admin.txt");
        }

    }
else if(type == 't')
{
        cout<<"Welcome Trainer";
        cout<<"\nEnter :\n\t1: to login\n\t2: creat account: ";
        cin>>op;
        if(op == '1')
        {
            cout<<"Enter your Name: ";
            cin>>User;
            cout<<"password: ";
            cin>>pass;
            permition = check("trainer.txt");
            if(permition == 1)
            {

                do
                {
                    cout<<"\n\nEnter:\n\n\t1:to see the courses:\n\t2:to see your profile\n\t3: to see a student's profile\n\t\"q\" to quit";
                    cin>>option;
                    if(option == '1')
                    {
                         Show_Courses();
                    }

                    else if(option == '2')
                    {
                        Teacher t;
                        t.show(User);
                    }
                    else if(option == '3')
                    {
                        cout<<"Enter student's name to see profile: ";
                        cin>>snm;
                        Student s;
                        s.show(snm);
                    }

                }while(option!='q');
            }

        }
        else
        {
            Take_user_input();
            Creat_Account("trainer.txt");
        }
}
getch();
    return 0;
}
