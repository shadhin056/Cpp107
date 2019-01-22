/********************************************

NAME:REZWANUR RAHMAN KHAN
ID:2013-1-60-055
SEC:2
DEPT:CSE

*********************************************/


/*********************************************

     COMPUTER SHOP MANAGEMNET SYSTEM

**********************************************/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

 class store
  {
  public:
      int quantity;
      float price;
      char item[50],ch;

    public:
       void add_new(char*);
       void show(char*);
       void del_item(char*);
       void search(char*);
     };

   void store::add_new(char fname[20])
   {

      int p;
      float t;
      do
      {
      FILE *fp;
      fp=fopen(fname,"a");
      cout<<"Product Name:";
      gets(item);
      cin.get(item,50);
      cout<<"Price:";
      cin>>price;
      cout<<"Quantity:";
      cin>>quantity;
      t=price*quantity;
      fprintf(fp,"%s \t\t\t%0.2fTK \t \t%d\t\t  %0.2fTK\n",item,price,quantity,t);
      fclose(fp);
      system("cls");
      cout<<"\nTo add another item press 1 and to stop press 0 !\n";
      cin>>p;
      }
      while(p!=0);

   }
    void store::show(char fname[20])
     {
        cout<<"----------------------------------------------------------------------\n";
        cout<<"NAME\t\t\tPRICE\t\tQUANTITY\tTOTAL AMOUNT"<<endl;
        cout<<"----------------------------------------------------------------------\n\n";
        fstream fp;
        fp.open(fname,ios::in);
        while(fp)
        {
        fp.get(ch);
        cout<<ch;
        }
        cout<<"----------------------------------------------------------------------\n\n";
     }
     void store:: del_item(char fname[20])
     {
         int k;
         do
		{

		FILE *fp;
		char temp[5000],del[100],m[5000];
		int d,i,j=0,n=0,u=0;



        printf("Enter the item name you want to delete!\n");
		gets(del);
        cin.get(del,100);
		fp=fopen(fname,"r");
		for(d=0; del[d]!='\0'; d++)
		{
		}
		fp=fopen(fname,"r");
		while(fgets(temp, 5000, fp) != NULL)
		{

			if((strstr(temp, del)) != NULL)
			{
			    u++;
			}

			else
			{
				for(i=0; temp[i]!='\0'; i++)
				{
					m[j]=temp[i];
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

		cout<<"\nProduct has been successfully deleted from the list!\n";
		if(u==0)
			{
			    system("cls");
				cout<<"\nSorry,there is no item like this to delete.\nTry again!\n";

			}
        fclose(fp);
        printf("\nTo delete another item then press 1 and to stop press 0 !\n");
        cin>>k;
		}
		while(k!=0);


     }
    void store::search(char fname[20])
    {
        FILE *fp;
		char search[100],temp[5000];
		int m,n;
		do
        {

		    fp=fopen(fname,"r");
			n=0;
			printf("Enter the item name you want to search!\n");
			gets(search);
			cin.get(search,100);
			system("cls");
			while(fgets(temp, 5000,fp)!=NULL)
			{
				if(strstr(temp,search)!=NULL)
				{
				    cout<<"Your search result:\n\n";
				    cout<<"----------------------------------------------------------------------\n";
                    cout<<"NAME\t\t\tPRICE\t\tQUANTITY\tTOTAL AMOUNT"<<endl;
                    cout<<"----------------------------------------------------------------------\n\n";
					printf("%s\n",temp);
					n++;
				}
			}
			if(n==0)
			{
				printf("\nSorry there is no item called '%s' in the list.\nTry again!\n\n",search);
			}


            printf("To search another item then press 1 and to stop press 0 !\n");
            cin>>m;
        }
		while(m!=0);
    }
  int main()
  {
     char m[15],n[10]=".txt";
     cout<<"Please enter your file name?"<<endl;
     cin>>m;
     strcat(m,n);
     FILE *fp;
     fp=fopen(m,"a");
     fclose(fp);
     system("cls");
     store obj;
     int x;
     system("color fc");

    do{
       cout<<endl<<"****************************************************"<<endl;;
       cout<<"\n\tCOMPUTER SHOP MANAGEMNET SYSTEM\n";
       cout<<endl<<"****************************************************"<<endl;
       cout<<"\nENTER YOUR CHOICE:\n";
       cout<<"\n1. SELL A PRODUCT:";
       cout<<"\n2. SHOW ALL SOLD PRODUCTS:";
       cout<<"\n3. DELETE A PRODUCT:";
       cout<<"\n4. SEARCH A PRODUCT:";
       cout<<"\n5. QUIT\n";


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

