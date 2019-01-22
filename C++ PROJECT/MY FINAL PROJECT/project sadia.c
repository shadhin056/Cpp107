#include<iostream>

#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
class patient{
    public:
	char pname1[100];
	char pname2[100];
	int page;
	char pblood[20];
	char adate[20];
	char *pdept;
	int weight;
	char *proom;
	char *pdoc;
	int a,rty,prnum;
	int dat,mon,yer,rdat,rmon,amon,adat;
	double price;

	public:

	void input(){

		system("cls");
		system("color D");
		cout<<"\nENTER PATIENT 1ST NAME=";
		cin>>pname1;
		cout<<"\nENTER PATIENT LAST NAME=";
		cin>>pname2;
		cout<<"\nAGE=";
		cin>>page;
		cout<<"\nBLOOD GROUP=";
		cin>>pblood;

		cout<<"\nADMISSION DATE=";
		cin>>dat;
		 cout<<"/";
		cin>>mon;
		cout<<"/";
		cin>>yer;
		cout<<"\n\n";
		cout<<"\nCHOOSE ROOM TYPE--\n";
		cout<<"\n1.CABIN.";
		cout<<"\n2.WARD.";
			cin>>rty;
			if(rty==1){

				cout<<"\nENTER CABIN NUMBER=";

				cin>>prnum;
               proom="CABIN";
			}
			else if(rty==2){
				cout<<"\nENTER WARD NUMBER=";
               cin>>prnum;
               proom="WARD";
			}
			else{
				cout<<"\nINCORRECT NUMBER!";
			}


        cout<<"\nSector=\nPress 1,2or3 for choose sector.";
		cout<<"\n1.ARTHOLOGY";
		cout<<"\n2.CARDIOLOGY";
		cout<<"\n3.NEUROLOGY";
		cin>>a;
		try{
			if(a==1){
				pdept="ARTHOLOGY";
				pdoc="DR.ALAMGIR";
			}
			else if(a==2){
				pdept="CARIOLOGY";
				pdoc="M.A.MANOS";
			}
			else if(a==3){
				pdept="Neurology";
				pdoc="PROF.DR.SAFIUUDIN";
			}
			else{
				throw(a);
			}
		}
		catch(int){
			cout<<"\nWRONG INFORMATION!";
			exit(1);
		}
	}

		void display(){
      strcat(pname1," ");
strcat(pname1,pname2);

		cout<<"\n\t\tNAME"<<"\tBLOOD"<<"\tAGE="<<"\tROOM NUMBER\n\t\t";
        for(int t=0;t<45;t++){
			cout<<"=";
		}
		cout<<"\n\t\t"<<pname1;
		cout<<"\t"<<pblood;
		cout<<"\t"<<page;
        cout<<"\t"<<proom<<prnum;
	    cout<<"\n\t\tAdmission Date"<<"\tPatient Sector"<<"\tDoctor name\n\t\t";
        for(t=0;t<45;t++){
			cout<<"=";
		}
		cout<<"\n\t\t"<<dat<<"/"<<mon<<"/"<<yer;

		cout<<"\t\t"<<pdept;
		cout<<"\t"<<pdoc<<"\n\n\n";




	}


void camount(){
			cout<<"\nENTER RELISE DATE--";
				cin>>rdat;
			cout<<"\nENTER RELISE MONTH--";
			cin>>rmon;
			int adat=dat+rdat;

			int amon=rmon-mon;

			adat=adat+(amon*30);
			price=1500*adat;
			display();
			cout<<"\nTOTAL FEES="<<price;





		}

void wamount(){
			cout<<"\nENTER RELISE DATE--";
				cin>>rdat;
			cout<<"\nENTER RELISE MONTH--";
			cin>>rmon;
			int adat=dat+rdat;

			int amon=rmon-mon;

			adat=adat+(amon*30);
			price=800*adat;
			display();

cout<<"\nTOTAL FEES="<<price;


		}

	};

int main(){
	int b=0,i=0,n;
	patient x1[100];
    /*char rname1[100];
	char rname2[100];*/
	int num;
	int rnum;
		char rroom[20];
		char ch;


	do{
 system("cls");
		system("Color 3D");
cout<<"\nDATA ENTRY:";
	cout<<"\n\n\t\tADMIT PATIENT                       [1]";
    cout<<"\n\n\t\tVIEW LIST OF PATIENTS               [2]";
	cout<<"\n\n\t\tTOTAL AMOUNT OF RELISED PATIENT     [3]";
	cout<<"\n\n\t\tEXIT                                [4]\n\t\t";

		cin>>num;
		switch(num)
		{
		case 1:
	    system("cls");
		system("Color 1E");
        cout<<"\nHOW MANY PATIENTS DO YOU ADMIT=";
	    cin>>n;

        for(i=0;i<n;i++){

        x1[i].input();



		}



		break;



		case 2:

        system("cls");
		system("Color 3C");


cout<<"\nLIST OF PATIENTS--";
for(i=0;i<n;i++){




		x1[i].display();





	}
cout<<"\nPLEASE PRESS ANY KEY FOR THE MAIN MENU";
cin>>ch;

break;
		case 3:
        system("cls");
		system("Color 3C");

			cout<<"\n\t\tENTER ROOM NAME=";
			cin>>rroom;
			cout<<"\n\t\tENTER ROOM NUMBER=";
			cin>>rnum;
for(i=0;i<n;i++){
		if(x1[i].prnum==rnum){
			x1[i].camount();

	}
		else if(x1[i].prnum==rnum){
			x1[i].wamount();
		}
		else{	cout<<"\nWRONG INFORMATION!";}
cout<<"\nPLEASE PRESS ANY KEY FOR THE MAIN MENU";
cin>>ch;
}

break;
		case 4:
			break;
		}
		}while(num!=4);


	return 0;
}
