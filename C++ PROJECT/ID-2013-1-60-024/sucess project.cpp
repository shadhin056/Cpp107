///====================CREARED BY JAMIUL ALAM===========================
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

 class student
  {
  public:
      char name[50],dept[30],ch,adress[40];
      float id;

    public:
       void add_new(char*);
       void show(char*);
       void del_item(char*);
       void search(char*);
     };

   void student::add_new(char fname[20])
   {

      int d,t,s,i;
      char sub[30];
      do
      {
      FILE *fp;
      fp=fopen(fname,"a");
      fopen(fname,"a");
      cout<<"student Name: ";
      //cin>>name;
      gets(name);
      cin.get(name,20);
      cout<<"\nGiven Id: ";
      cin>>id;
      cout<<"\nDepartment: ";
      cin>>dept;
      cout<<"\nAddress= ";
      gets(adress);
     cin.get(adress,20);

      fprintf(fp,"\t%s\t\t%0.1f  \t\t\t%s\t\t\t%s\n",name,id,dept,adress);
      fclose(fp);
      system("cls");
      cout<<"\n1.To add student.\n\n0.To Break\n";
      cin>>d;
      }
      while(d!=0);

   }
    void student::show(char fname[20])
     {
        cout<<"--------------------------------------------------------------------------------\n";
        cout<<"\tNAME\t\tId  \t\t\tDEPARTMENT\t\tADDRESS\n"<<endl;
        fstream fp;
        fp.open(fname,ios::in);
        while(fp)
        {
        fp.get(ch);
        cout<<ch;
        }
        cout<<"--------------------------------------------------------------------------------\n\n";
     }
     void student:: del_item(char fname[20])
     {
         int k;
         do
		{

		FILE *fp;
		char temd[5000],del[100],m[5000];
		int d,i,j=0,n=0,u=0;



        printf("Enter the name you want to delete!\n");
		scanf("%s",del);
		fp=fopen(fname,"r");
		for(d=0; del[d]!='\0'; d++)
		{
		}
		fp=fopen(fname,"r");
		while(fgets(temd, 5000, fp) != NULL)
		{

			if((strstr(temd, del)) != NULL)
			{
			    u++;
			}

			else
			{
				for(i=0; temd[i]!='\0'; i++)
				{
					m[j]=temd[i];
					j++;
				}
			}

		}
		fclose(fp);
		fp=fopen(fname,"w");
		for(n=0; n<j; n++)
		{
			if(m[n]==1)
			{
				fprintf(fp,"\n");

			}
			else
			{
				fprintf(fp,"%c",m[n]);

			}

		}

		cout<<"\nname has been successfully DELETE from the list!\n";
		if(u==0)
			{
			    system("cls");
				cout<<"\nSorry,there is no name.\nTry again!\n";

			}
        fclose(fp);
        printf("\nTo Delete another name then press 1\n\nto stop press 0 !\n");
        cin>>k;
		}
		while(k!=0);


     }
    void student::search(char fname[20])
    {
        FILE *fp;
		char search[100],temd[5000];
		int m,n;
		do
        {

		    fp=fopen(fname,"r");
			n=0;
			printf("Enter the  name you want to search!\n");
			scanf("%s",search);
			system("cls");
			while(fgets(temd, 5000,fp)!=NULL)
			{
				if(strstr(temd,search)!=NULL)
				{
				    cout<<"Your search result:\n\n";
				    cout<<"-----------------------------------------------------------------------------------\n";
				    cout<<"\tNAME\t\tId  \t\t\tDEPARTMENT\t\tADDRESS"<<endl;
				    cout<<"-------------------------------------------------------------------------------------\n";
					printf("%s\n",temd);
					n++;
				}
			}
			if(n==0)
			{
				printf("\nSorry there is no name match '%s' in the list.\nTry again!\n\n",search);
			}


            printf("To search another student then press 1  \n\nto stop press 0 !\n");
            cin>>m;
        }
		while(m!=0);
    }
  int main()
  {
     char m[15],name[20];
     float id,l;
     cout<<"Create your file first"<<endl;
     cin>>m;
     cout<<"\n\nUser name: ";
     gets(name);
     cin.get(name,20);
     cout<<"\n\npassword: ";cin>>id;
     system("cls");
     student obj;
     int x;

    do{
       cout<<endl<<"****************************************************"<<endl;;
       cout<<"\n\tWELCOME TO DATABASE SYSTEM \n";
       cout<<endl<<"****************************************************"<<endl;
       cout<<"\n YOUR OPTIONS:\n";
       cout<<"\n\n\t1. ADD NEW:";
       cout<<"\n\n\t2. SHOW :";
       cout<<"\n\n\t3. DELETE :";
       cout<<"\n\n\t4. SEARCH :";
       cout<<"\n\n\t5. EXIT\n";


      cin>>x;

    switch(x)
    {
        case 1: obj.add_new(m);
            break;
        case 2:obj.show(m);
            break;
        case 3: obj.del_item(m);
            break;
        case 4: obj.search(m);
            break;
        case 5: break;
    }
    }
    while(x!=5);
    return 0;
    }

