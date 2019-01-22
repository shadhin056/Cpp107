#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


class admin
{
public:
	void password(void)
	{
		FILE *f;
		char *x;
		char file_name[15]="password.txt",password[20],turna[20];
		int i,j,k,l;
		while(1)
		{
			if(l==0)
			{
				break;
			}
			printf("\n          Admin enter your password\n          ");
			scanf("%s",password);
			time_delay();
			for(k=0; password[k]!='\0'; k++)
			{
			}
			x=file_name;
			f=fopen(x,"r");
			fgets(turna, 20, f);
			for(j=0; turna[j]!='\0'; j++)
			{
			}
			for(i=0; turna[i]==password[i] && i<j; i++)
			{
			}
			fclose(f);
			if(i==j && k==j)
			{
				l=0;
				working();
			}
			else
			{
				printf("\n          WRONG PASSWORD \n            For again try press any key or Back to 1 step press 0\n          ");
				scanf("%d", &l);
			}

		}
	}


	void working(void)
	{
		int x,y;
		while(1)
		{
			if(y==0)
			{
				break;
			}
			printf("          What you want:-\n\n");
			printf("          1.Add            :-\n");
			printf("          2.Delete         :-\n");
			printf("          3.Search         :-\n");
			printf("          4.Change Password:-\n");
			printf("          ");
			scanf("%d", &x);
			if(x==1)
			{
				add();
			}
			else if(x==2)
			{
				del();
			}
			else if(x==3)
			{
				search();
			}
			else if(x==4)
			{
				change_password();
			}
			else
			{
				printf("\n          You press wrong number\n");
			}	
			printf("\n\n          To Log out press 0 and continue press anything\n          ");
			scanf("%d", &y);
		}
	}


	void add()
	{
		FILE *f;
		char turna[5000],filename[15]="project.txt",add[100];
		char *e,*g;
		int a=0,b,c,d=0,i;
		e=filename;
		f=fopen(e,"r");
		printf("Enter accordingly below\n\n");
		while(fgets(turna, 5000, f)!=NULL)
		{
			printf("\n\n%s\n\n",turna);
			a++;
			if(a!=0)
			{
				break;
			}
		}
		fclose(f);
		f=fopen(e,"a");
	//	printf("          ");
		while(1)
		{
			if(d!=0)
			{
				break;
			}
			for(c=0; c<=3; c++)
			{
				gets(add);
				g=add;
				for(i=0; add[i]!='\0'; i++)
				{
				}
				b=25-i;
				fprintf(f,"%s",g);
				for(i=0; i<b; i++)
				{
					fprintf(f," ");
				}
				printf("          ");
			}
			fprintf(f,"\n");
			time_delay();
			printf("\n          WORK DONE\n");
			printf("\n\n          For again add press 0 and stop to 1\n          ");
			scanf("%d",&d);
		}
		fclose(f);

	}


	void del()
	{
		char filename[15]="project.txt",del[100],muna[5000],turna[5000];
		FILE *f;
		char *e;
		int a,d,i,j,n;
		while(1)
		{
			j=0;
			n=0;
			if(a==0)
			{
				break;
			}
			printf("          ****Enter a string of deleteline****\n\n          ");
			scanf("\n\n          %s",del);
			for(d=0; del[d]!='\0'; d++)
			{
			}
			e=filename;
			f=fopen(e,"r");
			while(fgets(turna, 5000, f) != NULL)
			{
				if((strstr(turna, del)) != NULL)
				{

				}
				else
				{
					for(i=0; turna[i]!='\0'; i++)
					{
						muna[j]=turna[i];
						j++;
					}
				}
			}
			fclose(f);
			f=fopen(e,"w");
			for(n=0; n<j; n++)
			{
				fprintf(f,"%c",muna[n]);
			}
			fclose(f);
			time_delay();
			printf("\n          WORK DONE\n");
			printf("\n\n          For again delete something press 1 and stop to 0\n          ");
			scanf("%d",&a);
		}


	}
	void change_password()
	{
		FILE *f;
		char *x,*y;
		char file_name[15]="password.txt",password[20],turna[20];
		int i,j,k,l;
		while(1)
		{
			if(l==0)
			{
				break;
			}
			printf("\n          Admin enter your password\n          ");
			scanf("%s",password);
			time_delay();
			for(k=0; password[k]!='\0'; k++)
			{
			}
			x=file_name;
			f=fopen(x,"r");
			fgets(turna, 20, f);
			for(j=0; turna[j]!='\0'; j++)
			{
			}
			for(i=0; turna[i]==password[i] && i<j; i++)
			{
			}
			fclose(f);
			if(i==j && k==j)
			{
				l=0;
				x=file_name;
				f=fopen(x,"w");
				printf("          Enter new password\n          ");
				scanf("%s",password);
				y=password;
				fprintf(f,"%s",y);
				fclose(f);
				printf("\n\n          WORK DONE\n\n");
				time_delay();
			}
			else
			{
				printf("\n          WRONG PASSWORD \n            For again try press any key or Back to 1 step press 0\n          ");
				scanf("%d", &l);
			}

		}
	}


	friend void search();
	friend void time_delay();
};
class viewer
{
public:
	void view()
	{
		search();
	}

	friend void search();
	friend void time_delay(); 
};


void search()
{
	
		FILE *f;
		char filename[15]="project.txt",search[100],turna[5000];
		char *x;
		int a,b=0,c;
		printf("          How do you want to search\n          ");
		printf("          1.Track Name\n          ");
		printf("          2.Artists Name\n          ");
		printf("          3.Album Name\n          ");
		scanf("%d", &c);
		x=filename;
		f=fopen(x,"r");			
		while(1)
		{
			a=0;
			printf("          Enter your searching item\n          ");
			scanf("%s",search);
			time_delay();
			while(fgets(turna, 5000,f)!=NULL)
			{
				if(strstr(turna,search)!=NULL)
				{
					printf("\n\n****     %s    \n\n\n",turna);
					a++;
				}
			}
			if(a==0)
			{
				printf("Does not match with your searching item %s\n",search);
			}
			printf("If you want to continue press 0 and stop press 1\n");
			scanf("%d",&b);
			if(b==1)
			{
				break;
			}
		}
		fclose(f);
}


void time_delay()
{
	int i,j;
	for(i=0; i<20000; i++)
	{
		for(j=0; j<20000; j++)
		{
		}
	}
}


int main()
{
	int a;
	admin ad;
	viewer vi;
	system("color E");
	while(1)
	{
		if(a==0)
		{
			break;
		}
		printf("For Admin press 1\nFor normal viewer press 2\nFor stop the program press 3\n");
		scanf("%d", &a);
		if(a==1)
		{
			ad.password();
		}
		else if(a==2)
		{
			vi.view();
		}
		else if(a==3)
		{
		    break;
		}

		else
		{
			printf("you press wrong key\n");
		}
		printf("For continue the program prees any key and 0 to stop\n");
	}
	return 0;
}