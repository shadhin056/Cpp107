#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
using namespace std;

 class food
  {
  public:
      int code,cd;
      char w,item[20];
      float price;
    public:
       void add_item();
       void menu(char*);
       void del_item();
       void sell();

     }obj;

   void food::add_item()
   {

      int n;
      do
      {
      FILE *fp;
      fp=fopen("pjt.txt","a");
      cout<<"Code No.:";
      cin>>code;
      cout<<"Food Item:";
      cin>>item;
      cout<<"Price:";
      cin>>price;
      fprintf(fp,"%s \t\t %d \t\t %0.2f \n",item,code,price);
      fclose(fp);
      cout<<"Add more! (1 = Yes/0 = No)\n";
      cin>>n;
      }
      while(n!=0);

   }
    void food::menu(char r[20])
     {
        cout<<"---------------------------------------------------------\n";
        cout<<"NAME\t\tCode\t\tPRICE"<<endl;
        cout<<"---------------------------------------------------------\n";
        fstream fp;
        fp.open(r,ios::in);
        while(fp)
        {
        fp.get(w);
        cout<<w;
        }
        cout<<"---------------------------------------------------------\n";
     }
     void food:: del_item()
     {

		FILE *fp;
		char t[6000];

		char del[20],m[6000];
		int d,i,j=0,n=0;

		printf("\nEnter the Food Item: ");
        scanf("%s",del);
		for(d=0; del[d]!='\0'; d++)
		{
		}

		fp=fopen("pjt.txt","r");
		while(fgets(t, 6000, fp) != NULL)
		{
			if((strstr(t, del)) != NULL)
			{
			}
			else
			{
				for(i=0; t[i]!='\0'; i++)
				{
					m[j]=t[i];
					j++;
				}
			}
		}
		fclose(fp);
		fp=fopen("pjt.txt","w");
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
     void food::sell()
   {
       int j;

      FILE *fp;
        fp=fopen("pjt.txt","r");
        do
        {
          cout<<"\nEnter Food Code:\n";
         cin>>cd;

         if(cd==code)
        {
          printf("%s \t\t %d \t\t %0.2f \n",item,code,price);
          

        }
        else{printf("No food available\n");
        }
        printf("Press 0 to quit :");
        cin>>j;
        if(j==0)
            break;

        }
      while(fp);
      fclose(fp);
}



  int main()
  {
     char r[20]="pjt.txt";
     int x;

    do{
       cout<<endl<<"****************************************************"<<endl;;
       cout<<"\n\tFOOD Corner\n";
       cout<<endl<<"****************************************************"<<endl;
       cout<<"\nCHoose Your Option:\n";
       cout<<"\n1. Show all food items:";
       cout<<"\n2. Add a new item:";
       cout<<"\n3. Delete items:";
       cout<<"\n4. Sell Items";
       cout<<"\n5. Quit\n";
       cout<<"\nEnter Your Choice: ";


      cin>>x;

    switch(x)
    {
        case 1:obj.menu(r);
            break;
        case 2:obj.add_item();
            break;
        case 3: obj.del_item();
            break;
        case 4: obj.sell();
        case 5:exit(0);
    }
    }
    while(x!=5);
    return 0;
    }

