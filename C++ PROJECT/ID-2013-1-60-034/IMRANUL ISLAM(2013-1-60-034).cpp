/*******************************************
CINEMA HALL TICKETING SYSTEM
NAME:IMRANUL ISLAM
ID:2013-1-60-034
SEC:2
*********************************************/

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class plan
{
   private:
     int code;
     int ticket,c,y,am;
     float d,k,t;
     char date[30],id[100];
     char time[30];
     int keep;
     char z[30];
     char h[30];
    char ch;
   public:
     void get(void);
     void display(void);
     void i_delete(void);
     void s(void);

};

void plan::get()
{
       cout<<"Enter ID no:                                   \n";
       cin>>id;
   X:
   cout<<"Choose from the following movies\n";
   cout<<"\n************************************************\n";
   cout<<"*    1.The Avengers                    \n";
   cout<<"*    2.The Wolverine                    \n";
   cout<<"*    3.World War Z                        \n";
   cout<<"*    4.Fast and Furious 6                      \n";
   cout<<"*    5.The Amazing Spiderman                      \n";
   cout<<"\n************************************************\n";
   cout<<"\nPlease,Enter your movie code(1-5):                   \n";
   cin>>code;
   if(code<1 || code>5){
    cout<<"\nInvalid input \n";
  goto X;
   }
   O:
   cout<<"\nEnter your ticket category \n1.regular    300 Taka(incl. 15% VAT)\n2.Premium    350 Taka(incl. 15% VAT)\n3.3D         400 Taka(incl. 15% VAT)\n";
   cin>>ticket;
   if(ticket<1 || ticket>3){
    cout<<"\nInvalid input \n";
  goto O;
   }
   cout<<"\nAmount:                                   \n";
   cin>>am;
   switch(ticket)
   {
       case 1:
       k=am*300.00+am*300.00*0.15;
       break;
       case 2:
       k=am*350.00+am*350.00*0.15;
       break;
       case 3:
       k=am*400.00+am*400.00*0.15;
       break;
   }
   cout<<"\nEnter Date:(dd-m-yyyy)  \n";
   cin>>date;
   cout<<"\nEnter Time:(hr.minam\pm)  \n";
   cin>>time;
   FILE *fp;
    fp=fopen("plan.txt","a");
    fprintf(fp,"%s  %d    %d \t  %d     %0.2f   %s\t%s\n",id,code,ticket,am,k,date,time);
    fclose(fp);


}
void plan::display()
{
        cout<<"**********************************************************************\n";
        cout<<"ID  CODE  TICKET AMOUNT  TOTAL   DATE\t\tTIME"<<endl;
        cout<<"**********************************************************************\n\n";
        fstream fp;
        fp.open("plan.txt",ios::in);
        while(fp)
        {
        fp.get(ch);
        cout<<ch;
        }

     }
void plan::i_delete()
     {

		FILE *fp;
		int line_num = 1;
		int search_result = 0;
		char temp[5000];
		char *e;
		char del[100],m[5000];
		int d,i,j=0,n=0,u=0;
		printf("Enter your delete part\n");
		scanf("%s",del);
		e="plan.txt";
		fp=fopen(e,"r");
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
		fp=fopen(e,"w");
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
		cout<<"\nID has been successfully deleted from the list!\n";
		if(u==0)
			{
			    system("cls");
				cout<<"\nSorry,there is no item like this to delete.\nTry again!\n";
			}
		fclose(fp);
     }
void plan::s()
{
        FILE *fp;
         char search[100];
		int m,n;
		char temp[5000];
		do
        {

		    fp=fopen("plan.txt","r");
			n=0;
			printf("Enter the item name you want to search!\n");
			scanf("%s",search);
			system("cls");
			while(fgets(temp, 5000,fp)!=NULL)
			{

				if(strstr(temp,search)!=NULL)
				{
				    cout<<"Your search result:\n\n";
                    cout<<"**********************************************************************\n";
                    cout<<"ID  CODE  TICKET AMOUNT  TOTAL   DATE\t\tTIME"<<endl;
                    cout<<"**********************************************************************\n\n";
					printf("%s\n",temp);
					n++;
				}
			}
			if(n==0)
			{
				printf("\nSorry there is no item called '%s' in the list.\nTry again!\n\n",search);
			}break;
        }
		while(m!=0);
    }
int main()
{
   plan p;
   int m;
   do
   {
       cout<<endl<<"****************************************************"<<endl;;
       cout<<"\n\tWELCOME TO CINEMA HALL TICKETING SYSTEM\n";
       cout<<endl<<"****************************************************"<<endl;
       cout<<"\nEnter The Appropriate number.\n"
       <<"\n1.For taking information."
       <<"\n2.For display."
       <<"\n3.For delete."
       <<"\n4.For search."
       <<"\n5.Quit."
       <<"\nWhat is your option?\n ";
    cin>>m;
    switch(m)

    {
    case 1:

         p.get();



     break;

    case 2:
      cout<<"displaying info\n";
        p.display();


     break;
      case 3:

       p.i_delete();

      break;


   case 4:

       p.s();

      break;
   case 5:
     break;

   default:
     cout<<"\nError Input .Try Again.\n";
   }
}while(m!=5);

return 0;
}
