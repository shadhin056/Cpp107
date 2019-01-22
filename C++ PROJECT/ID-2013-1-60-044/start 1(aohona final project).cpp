//*******************************************************
   //Depertmental store Management
//*******************************************************
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

 class list
  {
      int id,quality,quantity,i,t,j;//count;
      float price,value,p;
      char product[10],keep[10],ch;

    public:
       void add_products();
       void show(char*);
       void del_product();
       void search();
       //void total_sold();
     };

   void list::add_products()
   {
       int n;
       do
       {
      FILE *fp;
      fp=fopen("dept.txt","a");
      printf("Product id:");
      scanf("%d",&id);
      printf("Product name:");
      scanf("%s",&product);
      printf("product Price:");
      scanf("%f",&price);
      printf("product Quality:");
      scanf("%d",&quality);
      printf("product Quantity:");
      scanf("%d",&quantity);
      fprintf(fp,"%d \t\t %s \t\t %0.2f \t\t %d \t\t%d\n",id,product,price,quality,quantity);
      fclose(fp);
      system("cls");
      cout<<"to add another products press  0and to stop press 1 !";
      cin>>n;
       }
       while(n!=0);
      //count++;




   }
    void list::show(char m[20])
       {
       cout<<"id \t\t name\t \t price \t \t quality\t\tquantity"<<endl;
       fstream fp;
        fp.open(m,ios::in);
        while(fp)
        {
        fp.get(ch);
        cout<<ch;
        }
     }
     //void list::total_sold()
         // {
        // cout<<"Total sold products :"<<count<<endl;

     //}
       void list:: del_product()
     {

		FILE *fp;
		int line_num = 1;
		int search_result = 0;
		char temp[5000];
		char *e;
		char fname[10],del[100],m[5000];
		int d,i,j=0,n=0;
		printf("Enter your file name and delete part\n");
		scanf("%s %s",fname,del);

		for(d=0; del[d]!='\0'; d++)
		{
		}
		e=fname;
		fp=fopen(e,"r");
		while(fgets(temp, 5000, fp) != NULL)
		{
			if((strstr(temp, del)) != NULL)
			{
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
		fclose(fp);
     }
        void list::search()
    {
        FILE *fp;
		char fname[10],search[100],temp[5000];
		char *e;
		int m=0,n;
		printf("Enter your file name\n");
		scanf("%s",fname);
		e=fname;
		fp=fopen(e,"r");
		while(1)
		{
			n=0;
			printf("Enter your search string\n");
			scanf("%s",search);
			while(fgets(temp, 5000,fp)!=NULL)
			{
				if(strstr(temp,search)!=NULL)
				{
					printf("%s\n",temp);
					n++;
				}
			}
			if(n==0)
			{
				printf("Does not match :- %s\n",search);
			}
			printf("If you want to continue press 0 and stop press 1\n");
			scanf("%d",&m);
			if(m==1)
			{
				break;
			}
		}
    }


  int main()
  {
     list ob;
     int x;
     char m[20]="dept.txt";
    // system("color 3");

    do{
       cout<<"\n******************************************************************";
       cout<<"\n" "\t""EAST WEST UNIVERSITY";
       cout<<"\n******************************************************************";
       cout<<"\n\nMAKE YOUR CHOICE:\n";
       cout<<"\n1. FOR ADD PRODUCTS:";
       cout<<"\n2. FOR SEE PRODUCTS:";
       cout<<"\n3. DELETE PRODUCTS:";
       cout<<"\n4. SEARCH PRODUCTS:";
      // cout<<"\n5. TOTAL SOLD PRODUCTS:";
       cout<<"\n5. QUIT\n";

      cin>>x;
    switch(x)
    {

       case 1:ob.add_products();
            break;
        case 2: ob.show(m);
            break;
        case 3: ob.del_product();
            break;
        case 4: ob.search();
            break;
//        case 5:ob.total_sold();
  //          break;
        case 5: break;
    }
    }
    while(x!=5);
    return 0;
    }
