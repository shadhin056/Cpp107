#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int j=0,m=0,n=0,k,b,temp;
char p[10];
class user
{
    public:
    char userid[20];
    int usertype; // 1 admin, 2 faculty, 3 student
    char password[10];
    public:
    user(){strcpy(userid,"admin");usertype=1; strcpy(password,"admin");}
    void adminview();
    void facultyview();
    void studentview();
    void newaccount();

};
int totalstd;
class student
{
    public:
    char stdname[20];
    char stdid[20];
    string course[6];
    float gpa;
    static int stdnumber;
public:
    student();
	char grade[2];
	int credithr,sec;
    //void create_student_id();
    void edit_student_id();
    void view_student_id();
    void delete_student_id();
    void block_or_unblock_student_id();
    void add_course();
    void drop_course();
    void give_gpa();
    void gpa_calculation();
};
int student::stdnumber=1;
user u[100];
student s[100];
student::student()
{

    gpa=0;
}
int main()
{
    while(1)
    {
        char cusrname[20];
    char cpassword[20],c;
    cout<<"This is Login Panel"<<"\n\n"<<endl;
    cout<<"Enter Your User Name"<<endl;
    cin>>cusrname;
    cout<<"Enter Your Password"<<endl;

      for(int ps=0;;)
    {
        c=getch();
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        {cpassword[ps]=c;ps++;
            cout<<"*";
        }
        if(c=='\b' && ps>=1)
        {cout<<"\b \b";--ps;
        }
        if(c=='\r')
        {cpassword[ps]='\0';break;
        }
    }
    for(int i=0; i<100; i++)
    {
        if(strcmp(cusrname,u[i].userid)==0 && strcmp(cpassword,u[i].password)==0)
        {
            cout<<"\nSuccessfull Login"<<"\n\n"<<endl;
            if(u[i].usertype==1)
            {
                j=i;
                u[j].adminview();
                j=0;
                break;
            }
            if(u[i].usertype==2)
            {
                j=i;
                u[j].facultyview();
                j=0;
                break;
            }
            if(u[i].usertype==3 )
            {
				if(strcmp(u[temp].password,cpassword)!=0 && temp==i)
				{
					cout<<"This ID has been blocked\n";
					break;
				}
				else

				{
                  j=i;
                  u[j].studentview();
                  j=0;
                  break;
				}
            }
        }
    }
    }
    return 0;
}
void user::adminview()
{
    cout<<"This is ADMIN Panel"<<"\n"<<endl;
    int input;
screen:
    cout << "Press 1 To create New account\n";
    //cout << "Press 2 To Create New Student ID\n";
    cout << "Press 2 To Edit Student Details\n";
    cout << "Press 3 To View Student Details\n";
    cout << "Press 4 To Delete Student Id\n";
    cout << "Press 5 To Block or unblock Student Id\n";
    cout << "Press 6 To Add course\n";
    cout << "Press 7 To Drop Course\n";
    cout << "Press 8 To Give GPA\n";
    cout << "Press 9 To calculate gpa\n";
	cout<<"Press 10 to log out\n";
    cin >> input;
    switch(input)
		{
        case 1:
            u[m].newaccount();
			goto screen;
		/*case 2:
			s[m].create_student_id();
			goto screen;*/
		case 2:
			s[j].edit_student_id();
			goto screen;
		case 3:
			s[j].view_student_id();
			goto screen;
        case 4:
            s[j].delete_student_id();
            goto screen;
        case 5:
            s[j].block_or_unblock_student_id();
            goto screen;
        case 6:
            s[j].add_course();
            goto screen;
        case 7:
            s[j].drop_course();
            goto screen;
        case 8:
            s[j].give_gpa();
            goto screen;
        case 9:
            s[j].gpa_calculation();
			goto screen;
		case 10:
			break;
		}
    if(input>11)
    {
        cout << "Wrong input\n";
        goto screen;
    }

}
void user::facultyview()
{
    cout<<"This is Faculty Panel"<<"\n"<<endl;
    int input;
screen:
    cout << "Press 1 To View Student Details\n";
    cout << "Press 2 To Add course\n";
    cout << "Press 3 To Drop Course\n";
    cout << "Press 4 To Give GPA\n";
    cout << "Press 5 To calculate gpa\n";
	cout<<"Press 6 to log out\n";
    cin >> input;
    switch(input)
		{
        case 1:
			s[j].view_student_id();
			goto screen;
        case 2:
            s[j].add_course();
            goto screen;
        case 3:
            s[j].drop_course();
            goto screen;
        case 4:
            s[j].give_gpa();
            goto screen;
        case 5:
			s[j].gpa_calculation();
			goto screen;
		case 6:
			break;
		}
    if(input>6)
    {
        cout << "Wrong input\n";
        goto screen;
    }

}
void user::studentview()
{
    cout<<"This is Student Panel"<<"\n"<<endl;
    int input;
screen:
    cout << "Press 1 To View Student Details\n";
    cout << "Press 2 To Logout\n";
    cin >> input;
    switch(input)
		{
        case 1:
			s[j].view_student_id();
			goto screen;
        case 2:
            break;
		}
    if(input>2)
    {
        cout << "Wrong input\n";
        goto screen;
    }
}
void user::newaccount()
{
    cout<<"Create New Account"<<"\n"<<endl;
    cout<<"Enter User Name\n";
    cin>>u[m].userid;
    cout<<"Create New Password\n";
    cin>>u[m].password;
    cout<<"Enter user type\n";
    cout<<"1 for admin type\n 2 for faculty type \n 3 for student type\n";
    cin>>u[m].usertype;
    if(u[m].usertype==3)
    {
        cout<<"Create New Student id"<<"\n"<<endl;
    cout<<"Enter Student Name\n";
    cin>>s[n].stdname;
    cout<<"Enter student id(number)\n";
    cin>>s[n].stdid;
    cout<<"Successfully created new student id\n";
    totalstd=student::stdnumber++;
    n++;

    }
    cout<<"You have successfully Created Account with following details\n";
    cout<<"User id      :"<<u[m].userid;
    cout<<"User type    :"<<u[m].usertype;
    m++;
}
/*void student::create_student_id()
{
    cout<<"Create New Student id"<<"\n"<<endl;
    cout<<"Enter Student Name\n";
    cin>>s[n].stdname;
    cout<<"Enter student id\n";
    cin>>s[n].stdid;
    cout<<"Successfully created new student id\n";
    totalstd=stdnumber++;
    n++;
}*/
void student::edit_student_id()
{   char id[20]; int k,b;
    cout<<"Edit student ID\n";
	cout<<"Enter the current student ID.\n";
	cin>>id;

	for(int a=0;a<100;a++)
	{
      if(strcmp(id,s[a].stdid)==0)
	  { j=a;
	    cout<<"Edit Student name:\n";
	    cin>>s[j].stdname;
	    cout<<"Edit student courses:\n";
	    cout<<"number of courses\n";
	    cin>>k;
	    for(b=0;b<k;b++)
        { cout<<"course code\n";
        cin>>s[j].course[b];
        cout<<"credit hour\n";
        cin>>s[j].credithr;
        cout<<"edit sec\n";
        cin>>s[j].sec;
		cout<<"Edit CPA\n";
		cin>>s[j].gpa;
		cout<<"Edit grade \n";
		cin>>s[j].grade;
        }
		cout<<"Successfully edited student ID\n";
	  }
	}
}

void student::view_student_id()
{
	char id[20]; int b;
	cout<<"Enter the student ID to view\n";
	cin>>id;
	for(int a=0;a<100;a++)
	{
		if(strcmp(id,s[a].stdid)==0)
		{j=a;
		  cout<<"\t\t\t\tStudent information\n\n";
          cout<<"NAME:\t\t"<<s[j].stdname<<endl;
		  cout<<"ID  :\t\t"<<s[j].stdid<<endl;
		  cout<<"COURSES,CREDIT HOUR,SEC,CGPA,GRADE:\t\t\n";
		  for(b=0;b<6;b++)
          {
              cout<<s[j].course[b]<<"   "<<s[j].credithr<<"   "<<s[j].sec<<"   "<<s[j].gpa<<"   "<<s[j].grade<<endl;
          }

		}
	}
}
void student::delete_student_id()
{
   char id[20]; int b;
   cout<<"Enter the student ID\n";
   cin>>id;
   for(int a=0;a<100;a++)
   {
	   if(strcmp(id,s[a].stdid)==0)
	   {
		   j=a;
		   strcpy(s[j].stdid,'\0');
		   strcpy(s[j].stdname,'\0');
		   s[j].gpa='\0';
		   s[j].sec='\0';
		   s[j].credithr='\0';
		   strcpy(s[j].grade,'\0');
		   cout<<"All information has been deleted\n";
		   for(b=0;b<6;b++)
           {
              s[j].course[b]='\0';
           }


	   }
   }
}
void student::block_or_unblock_student_id()
{
   char id[20],p[10]; int n;
   cout<<"Press 1 :if you want to block a student's id\n";
   cout<<"Press 2 :if you want to unblock a student's id\n";
   cin>>n;
   if(n==1)
   {
       cout<<"enter the student's id\n";
       cin>>id;
        for(int a=0;a<100;a++)
      {
	   if(strcmp(id,s[a].stdid)==0)
	   {
		   temp=a;
		   strcpy(p,u[a].password);
		   strcpy(u[temp].password,"bk");
		   cout<<"This ID has been blocked.\n";
	   }
      }
   }
   if(n==2)
   {
      cout<<"enter the student's id\n";
       cin>>id;
        for(int a=0;a<100;a++)
      {
	   if(strcmp(id,s[a].stdid)==0)
	   {
		   temp=a;
		   //strcpy(p,u[a].password);
		   strcpy(u[temp].password,p);
		   cout<<"This ID has been unblocked.\n";
	   }
      }
   }

}
void student::add_course()
{
  char id[20];
  cout<<"Enter the student ID:\n";
  cin>>id;
  for(int a=0;a<100;a++)
  {
	  if(strcmp(id,s[a].stdid)==0)
	  {
		  j=a;
		  cout<<"Enter the number of courses:\n";
		  cin>>k;
		  for(int b=0;b<k;b++)
		  {   cout<<"course code\n";
			  cin>>s[j].course[b];
			  cout<<"credit hour\n";
			  cin>>s[j].credithr;
			  cout<<"sec\n";
			  cin>>s[j].sec;
		  }
		  cout<<"You have added "<<" "<<k<<"  courses"<<endl;
	  }
  }

}
void student::drop_course()
{
   char id[20];
   cout<<"Enter the student ID:\n";
   cin>>id;
   for(int a=0;a<100;a++)
   {
	   if(strcmp(id,s[a].stdid)==0)
	   { j=a;

	   }
   }
}
void student::give_gpa()
{   char id[20];
    cout<<"Enter the student ID\n";
	cin>>id;
	cout<<"For how many subjects you want to give GPA?\nPlease enter the number of subjects.\n";
	cin>>k;
    for(int a=0;a<100;a++)
	{
       if(strcmp(id,s[a].stdid)==0)
	   {j=a;
		   for(int b=0;b<k;b++)
		   { cout<<"course code\n";
		     cin>>s[j].course[b];
		     cout<<"cgpa\n";
		     cin>>s[j].gpa;
		     cout<<"grade\n";
			 cin>>s[j].grade;
		   }
		   cout<<"successfully given gpa\n";
	   }
	}
}
void student::gpa_calculation()
{
   char id[20];
   float C=0,c=0,t=0;
   cout<<"Enter the student ID\n";
   cin>>id;
   cout<<"For how many subjects you want to give credit hour?\nPlease enter the number of subjects.\n";
	cin>>k;
   for(int a=0;a<100;a++)
   {
	   if(strcmp(id,s[a].stdid)==0)
	   {
		   j=a;
		   for(int b=0;b<k;b++)
		   {   cin>>s[j].gpa;
			   cin>>s[j].credithr;
			   c=c+s[j].credithr;
			   C=C+(s[j].credithr*s[j].gpa);
		   }
	   }
   }
   t=C/c;
   s[j].gpa=t;
   cout<<"successfully calculated CGPA\n";
}
