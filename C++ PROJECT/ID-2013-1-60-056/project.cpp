#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
public:
char s_name[15];
char s_id[10];
      int e_year;
      char b_name[10];
      int b_code;

char q[20];
int w,s,s2,s3,s4,s5;
public:

    void showboard()
       {
       cout<<"***************WELCOME TO THE BANGLADESH EDUCATION BOARD**************\n\n\n";
	   cout<<"\t\t\t***STUDENT'S SECTION***\n\n";
	   cout<<"\t\t**HERE YOU WILL GET YOUR RESULT INFORMATION**\n\n\n";
       }

       float showgrade(int);
       void calculate();
	   void show_result();
	   void dhk_b();
	   void bar_b();
	   void raj_b();
	   void chi_b();
	   void syl_b();
	   void jess_b();
	   void din_b();
	   void com_b();

};
	   void student :: show_result()
	   {
	   cout<<"\t\tPLEASE ENTER BOARD NAME:";
       cin>>b_name;
	   cout<<"\n";
	   cout<<"\t\tPLEASE ENTER YOUR EXAMINATION YEAR:";
	   cin>>e_year;
	   cout<<"\n";
	   cout<<"\t\tPLEASE ENTER YOUR NAME:";
	   gets(s_name);
	   cin.get(s_name,15);
       //cin>>s_name;
       cout<<"\n\t\tPLEASE ENTER YOUR ROLL NUMBER:";
       cin>>s_id;

	   FILE *st;
		st=fopen("info.txt","r");
		char search[100],temp[5000];
		int m=0,n;
		cout<<"\n\n";
		cout<<"\t\t\t***HERE IS YOUR RESULT***";
		cout<<"\n\n";
		cout<<"ROLL   NAME   BAN  ENG  MATH  PHY  CHE  GPA\n";

		while(1)
		{
			n=0;

			while(fgets(temp, 5000,st)!=NULL)
			{
				if(strstr(temp,s_id)!=NULL)
				{
					printf("%s\n",temp);
					n++;
				}
			}
			/*if(n==0)
			{
				printf("Does not match :- %s\n",search);
			}
			printf("If you want to continue press 0 and stop press 1\n");
			scanf("%d",&m);
			if(m==1)
			{
				break;
			}*/
			break;
		}
		fclose(st);
	  }



void student:: dhk_b()
{
	int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE DHAKA BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=65232;int j=43131;int k=3267;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";


}
void student:: bar_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE BARISHAL BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=37852;int j=23443;int k=5432;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}


void student:: raj_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE RAJSHAHI BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=51237;int j=19756;int k=2732;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

void student:: chi_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE CHITTAGONG BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=46792;int j=21752;int k=1632;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

void student:: syl_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE SYLHET BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=33465;int j=19131;int k=3343;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

void student:: jess_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE JESSORE BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=23242;int j=17432;int k=1267;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

void student:: din_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE DINAJPUR BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=31205;int j=16131;int k=3642;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

void student:: com_b()
{

    int z;
	cout<<"*******************************************************************************";
	cout<<"\n\t\t****WELCOME TO THE COMILLA BOARD****\n\n";
	cout<<"\t\tENTER THE EXAMINATION YEAR:";
		 cin>>z;
		 cout<<"\n\t\t**HERE IS YOUR REQUIRED INFORMATION:**\n";
	int i=23458;int j=12131;int k=1267;
	cout<<"\n\t\tTOTAL NUMBER OF CANDIDATES: "<<i;
		cout<<"\n\t\tTOTAL NUMBER OF A+ HOLDERS: "<<j;
		cout<<"\n\t\tTOTAL NUMBER OF FAILED CANDIDATES: "<<k<<endl;
		cout<<"\n";
		cout<<"*******************************************************************************";
}

float student::showgrade(int s)
       {
    float g;
    if((s>=80)&&(s<=100))
    g=5.00;
    else if((s<79)&&(s>=70))
    g=4.00;
    else if((s<69)&&(s>=60))
    g=3.5;
    if((s<59)&&(s>=50))
    g=3.00;
    else if((s<49)&&(s>=40))
    g=2.00;
    else if((s<39)&&(s>=33))
    g=1.00;
    else if((s<32)&&(s>=0))
    g=0.00;
      return g;
         }

void student::calculate()
{
float gp,sum=0;
float s_gpa;
cout<<"\t\t\t***WELCOME TO THE ADMIN'S SECTION***\n\n\n";

            FILE *st;
			st=fopen("info.txt","a");

			cout<<"\t\t\tENTER THE CANDIDATE'S NAME:";
			gets(q);
	        cin.get(q,20);
       //cin>>s_name;
			//cin>>q;
			cout<<"\n";
			cout<<"\t\t\tENTER THE CANDIDATE'S ROLL NUMBER:";
			cin>>w;
			cout<<"\n";

cout<<"\t\t\tEnter the Score in BANGLA:";
cin>>s;
cout<<"\n";
gp=showgrade(s);
sum=sum+gp;

cout<<"\t\t\tEnter the Score in ENGLISH :";
cin>>s2;
cout<<"\n";
gp=showgrade(s2);
sum=sum+gp;

cout<<"\t\t\tEnter the Score in MATH:";
cin>>s3;
cout<<"\n";
gp=showgrade(s3);
sum=sum+gp;

cout<<"\t\t\tEnter the Score in PHYSICS:";
cin>>s4;
cout<<"\n";
gp=showgrade(s4);
sum=sum+gp;

cout<<"\t\t\tEnter the Score in CHEMISTRY:";
cin>>s5;
cout<<"\n";
gp=showgrade(s5);
sum=sum+gp;
s_gpa=sum/5;
fprintf(st,"%d  %s   %d   %d   %d   %d   %d   %f\n",w,q,s,s2,s3,s4,s5,s_gpa);
fclose(st);


}









int main()
{
	int x,y;
	student a;

	int i=1,n=1;



	do
	{
		 cout<<"***************WELCOME TO THE BANGLADESH EDUCATION BOARD**************\n\n\n";

		cout<<"\t\t\t***ENTER YOUR CHOICE***\n";
		cout<<"\n\t1:TO VIEW THE BOARD INFORMATION\n\t2.ADD INFO\n\t3:TO VIEW YOUR BOARD RESULT\n\t4.EXIT\n";
		cin>>x;
		switch(x)

		{



		case 1:
			cout<<"***************WELCOME TO THE BANGLADESH EDUCATION BOARD**************\n\n\n";

			cout<<"\t 1:Dhaka\n";
			cout<<"\t 2:Barishal\n";
			cout<<"\t 3:Rajshahi\n";
			cout<<"\t 4:Chittagong\n";
			cout<<"\t 5:Sylhet\n";
			cout<<"\t 6.Jessore\n";
			cout<<"\t 7.Dinajpur\n";
			cout<<"\t 8.Comilla\n\n";



				cout<<"**PLEASE ENTER THE NUMBER OF ANY BOARD YOU WANT TO VIEW**:";
				cin>>y;
				cout<<"\n";
				if(y==1)
				{a.dhk_b();}
				else if(y==2)
				{a.bar_b();}
				else if(y==3)
				{a.raj_b();}
				else if(y==4)
				{a.chi_b();}
				else if(y==5)
				{a.syl_b();}
				else if(y==6)
				{a.jess_b();}
				else if(y==7)
				{a.din_b();}
				else if(y==8)
				{a.com_b();}
			break;

		case 2:

			a.calculate();
			break;


		case 3:
			a.showboard();
			a.show_result();

        break;
		case 4:
			break;

    }

	}

	while(x!=4);
	return 0;
}
