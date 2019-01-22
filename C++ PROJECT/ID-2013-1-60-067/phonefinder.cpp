#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;
class Phone
{
	private:
		char brand[30];
		char name[30];
		char os[30];
		char touchkey[30];
		double size;
		char ram[30];
		int memory;
		char wifi[30];
		char camera[30];
		char radio[30];
		char cardslot[30];
		int battery;
		int price;
	public:
		void set_brand(char*);
		char* get_brand();
		void set_name(char*);
		char* get_name();
		void set_os(char*);
		char* get_os();
		void set_touchkey(char*);
		char* get_touchkey();
		void set_size(double);
		double get_size();
		void set_ram(char*);
		char* get_ram();
		void set_memory(int);
		int get_memory();
		void set_wifi(char*);
		char* get_wifi();
		void set_camera(char*);
		char* get_camera();
		void set_radio(char*);
		char* get_radio();
		void set_cardslot(char*);
		char* get_cardslot();
		void set_battery(int);
		int get_battery();
		void set_price(int);
		int get_price();
};
//----------------------------------------------------------------------

void Phone::set_brand(char inp_brand[30])
{
	strcpy(brand,inp_brand);
}
char* Phone::get_brand()
{
	return brand;
}
void Phone::set_name(char inp_name[30])
{
	strcpy(name,inp_name);
}
char* Phone::get_name()
{
	return name;
}
void Phone::set_os(char inp_os[30])
{
	strcpy(os,inp_os);
}
char* Phone::get_os()
{
	return os;
}
void Phone::set_touchkey(char inp_touchkey[30])
{
    strcpy(touchkey,inp_touchkey);
}
char* Phone::get_touchkey()
{
    return touchkey;
}
void Phone::set_size(double inp_size)
{
	size=inp_size;
}
double Phone::get_size()
{
	return size;
}
void Phone::set_ram(char inp_ram[30])
{
	strcpy(ram,inp_ram);
}
char* Phone::get_ram()
{
	return ram;
}
void Phone::set_memory(int inp_memory)
{
	memory=inp_memory;
}
int Phone::get_memory()
{
	return memory;
}
void Phone::set_wifi(char inp_wifi[30])
{
	strcpy(wifi,inp_wifi);
}
char* Phone::get_wifi()
{
	return wifi;
}
void Phone::set_camera(char inp_camera[30])
{
    strcpy(camera,inp_camera);
}
char* Phone::get_camera()
{
    return camera;
}
void Phone::set_radio(char inp_radio[30])
{
    strcpy(radio,inp_radio);
}
char* Phone::get_radio()
{
    return radio;
}
void Phone::set_cardslot(char inp_cardslot[30])
{
    strcpy(cardslot,inp_cardslot);
}
char* Phone::get_cardslot()
{
    return cardslot;
}
void Phone::set_battery(int inp_battery)
{
	battery=inp_battery;
}
int Phone::get_battery()
{
	return battery;
}
void Phone::set_price(int inp_price)
{
	price=inp_price;
}
int Phone::get_price()
{
	return price;
}

//=================================================================
typedef struct data{
	char ibrand[30];
	char iname[30];
	char iios[30];
	char itouchkey[30];
    double isize;
    char iram[30];
    int imemory;
    char iwifi[30];
    char icamera[30];
    char iradio[30];
    char icardslot[30];
	int ibattery;
	int iprice;
}sdata;

//===========================================================================

void show(Phone showphone)
{
	cout<<"\n-----------------------------------\n\n";
	cout<<"Brand             : "<<showphone.get_brand()<<" "<<showphone.get_name()<<endl;
	cout<<"Operating System  : "<<showphone.get_os()<<endl;
	cout<<"Touchscreen/Keypad: "<<showphone.get_touchkey()<<endl;
    cout<<"Display Size      : "<<showphone.get_size()<<" inches"<<endl;
    cout<<"RAM               : "<<showphone.get_ram()<<endl;
	cout<<"Internal Memory   : "<<showphone.get_memory()<<endl;
	cout<<"WLAN              : "<<showphone.get_wifi()<<endl;
	cout<<"Secondary Camera  : "<<showphone.get_camera()<<endl;
	cout<<"FM radio          : "<<showphone.get_radio()<<endl;
	cout<<"Memory card slot  : "<<showphone.get_cardslot()<<endl;
	cout<<"Battery           : "<<showphone.get_battery()<<" mAh"<<endl;
	cout<<"\n-----------------------------------\n\n";
	cout<<"Price: "<<showphone.get_price()<<" BDT"<<endl;
	cout<<"\n-----------------------------------\n\n";
}

//===================================================================

void finder(sdata datain)
{
	Phone list[100];
	sdata output;
	int num=0;
	ifstream fileout("data.txt",ios::in);
        fileout>>output.ibrand;
	    fileout>>output.iname;
	    fileout>>output.iios;
	    fileout>>output.itouchkey;
	    fileout>>output.isize;
	    fileout>>output.iram;
	    fileout>>output.imemory;
	    fileout>>output.iwifi;
	    fileout>>output.icamera;
	    fileout>>output.iradio;
	    fileout>>output.icardslot;
	    fileout>>output.ibattery;
	    fileout>>output.iprice;
	while (fileout)
	{

		list[num].set_brand(output.ibrand);
		list[num].set_name(output.iname);
		list[num].set_os(output.iios);
		list[num].set_touchkey(output.itouchkey);
		list[num].set_ram(output.iram);
		list[num].set_memory(output.imemory);
		list[num].set_size(output.isize);
		list[num].set_wifi(output.iwifi);
		list[num].set_camera(output.icamera);
		list[num].set_radio(output.iradio);
		list[num].set_cardslot(output.icardslot);
		list[num].set_battery(output.ibattery);
		list[num].set_price(output.iprice);
		fileout>>output.ibrand;
	    fileout>>output.iname;
	    fileout>>output.iios;
	    fileout>>output.itouchkey;
	    fileout>>output.isize;
	    fileout>>output.iram;
	    fileout>>output.imemory;
	    fileout>>output.iwifi;
	    fileout>>output.icamera;
	    fileout>>output.iradio;
	    fileout>>output.icardslot;
	    fileout>>output.ibattery;
	    fileout>>output.iprice;
		num++;
    }
	fileout.close();
	int check=1;
	for (int i=0;i<num;i++)
	{

		if (((strcmp(list[i].get_brand(),datain.ibrand)==0)||(strcmp(datain.ibrand,"0")==0))
		&& ((strcmp(list[i].get_os(),datain.iios)==0)||(strcmp(datain.iios,"0")==0))
        && ((strcmp(list[i].get_touchkey(),datain.itouchkey)==0)||(strcmp(datain.itouchkey,"0")==0))
 		&& ((list[i].get_size()>=datain.isize)||(datain.isize==0))
		&& ((strcmp(list[i].get_ram(),datain.iram)>=0)||(strcmp(datain.iram,"0")==0))
		&& ((list[i].get_memory()>=datain.imemory)||(datain.imemory==0))
		&& ((strcmp(list[i].get_wifi(),"0")!=0)||(strcmp(datain.iwifi,"0")==0))
        && ((strcmp(list[i].get_camera(),datain.icamera)==0)||(strcmp(datain.icamera,"0")==0))
        && ((strcmp(list[i].get_radio(),datain.iradio)==0)||(strcmp(datain.iradio,"0")==0))
        && ((strcmp(list[i].get_cardslot(),datain.icardslot)==0)||(strcmp(datain.icardslot,"0")==0))
		&& ((list[i].get_battery()>=datain.ibattery)||(datain.ibattery==0)))
			{
				show(list[i]);
				check=0;
			};
	}

	if (check==1) cout<<"Sorry, we have no phone with your request!\n\n";
}

//============================================================

void getuserdata()
{
    char check;
 do{
		int key;
		sdata input;
    do {
		cout<<"\nchoose Brand:\n";
		cout<<"[1].Nokia\t[2].Samsung\t[3].Sony\t[4].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.ibrand,"Nokia");break;
			case 2:strcpy(input.ibrand,"Samsung");break;
			case 3:strcpy(input.ibrand,"Sony");break;
			case 4:strcpy(input.ibrand,"0");break;
			default: cout<<"\n\nwrong key, please enter again!";
		};
       } while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4));

    do {
		cout<<"\nchoose Operating System:\n";
		cout<<"[1].Android\t[2].Windows Phone\t[3].Symbian\t[4].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.iios,"Android");break;
			case 2:strcpy(input.iios,"Windows_Phone");break;
			case 3:strcpy(input.iios,"Symbian");break;
			case 4:strcpy(input.iios,"0");break;
			default: cout<<"\n\nwrong key, please enter again!";
		}
    } while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4));


    do {
            cout<<"\nchoose Screen type:\n";
            cout<<"[1].Touchscreen\t[2].Keypad\t[3].It doesn't matter\n";
            cin>>key;
            switch (key)
            {
                case 1:strcpy(input.itouchkey,"Touchscreen");break;
                case 2:strcpy(input.itouchkey,"Keypad");break;
                case 3:strcpy(input.itouchkey,"0");break;
                default:cout<<"\n\nwrong key, please enter again!";
            }
        } while ((key!=1)&&(key!=2)&&(key!=3));

	do {
		cout<<"\nchoose Size: At least:\n";
		cout<<"[1].2,0inches\t[2].3,0inches\t[3].4,0inches[4].5,0inches\t[5].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:input.isize=2.0;break;
			case 2:input.isize=3.0;break;
			case 3:input.isize=4.0;break;
			case 4:input.isize=5.0;break;
			case 5:input.isize=0;break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4)&&(key!=5));

	do {
		cout<<"\nchoose RAM: At least:\n";
		cout<<"[1].256MB\t[2].512MB\t[3].1GB\t[4].2GB\t[5].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.iram,".256 MB");break;
			case 2:strcpy(input.iram,".512 MB");break;
			case 3:strcpy(input.iram,"1 GB");break;
			case 4:strcpy(input.iram,"2 GB");break;
			case 5:strcpy(input.iram,"0");break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4)&&(key!=5));

	do{
		cout<<"\nchoose memory: At least:\n";
		cout<<"[1].1GB\t\t[2].2GB\t\t[3].4GB\t\t[4].8GB\t\t[5].16GB\t[6].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:input.imemory=1 ;break;
			case 2:input.imemory=2 ;break;
			case 3:input.imemory=4 ;break;
			case 4:input.imemory=8 ;break;
			case 5:input.imemory=16;break;
			case 6:input.imemory=0;break;
			default: cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4)&&(key!=5)&&(key!=6));

	do {
		cout<<"\nchoose Wifi option:\n";
		cout<<"[1].Required\t[2].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.iwifi,"1");break;
			case 2:strcpy(input.iwifi,"0");break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2));

	do {
		cout<<"\nchoose Secondary Camera option:\n";
		cout<<"[1].Required\t[2].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.icamera,"Yes");break;
			case 2:strcpy(input.icamera,"0");break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2));

    do {
		cout<<"\nchoose FM radio option:\n";
		cout<<"[1].Required\t[2].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.iradio,"Yes");break;
			case 2:strcpy(input.iradio,"0");break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2));

	do {
		cout<<"\nchoose Memory card slot option:\n";
		cout<<"[1].Required\t[2].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:strcpy(input.icardslot,"Yes");break;
			case 2:strcpy(input.icardslot,"0");break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2));

	do {
		cout<<"\nchoose battery option: At least\n";
		cout<<"[1].1500mAh\t[2].2500mAh\t[3].3500mAh\t[4].4500mAh\t[5].It doesn't matter\n";
		cin>>key;
		switch (key)
		{
			case 1:input.ibattery=1500;break;
			case 2:input.ibattery=2500;break;
			case 3:input.ibattery=3500;break;
			case 4:input.ibattery=4500;break;
			case 5:input.ibattery=0;break;
			default:cout<<"\n\nwrong key, please enter again!";
		}
	} while ((key!=1)&&(key!=2)&&(key!=3)&&(key!=4)&&(key!=5));

	cout<<"\n==============================================";
	cout<<"\n\nYOUR SEARCH RESULT:\n\n";
	finder(input);
	cout<<"\n\nDo you want search continue?\n";
	cout<<"[1].yes\t[2].no\n";
	fflush(stdin);
	cin>>check;
 } while (check=='1');
}

//===============================================================

void input_data()
{
	ofstream filein("data.txt",ios::out|ios::app);
		sdata input;
		char key;
	do{cout<<"\nbrand (type Nokia or Samsung or Sony): ";
		fflush(stdin);
		gets(input.ibrand);
		cout<<"\nphone name (e.g: Lumia_920): ";
		fflush(stdin);
		gets(input.iname);
		cout<<"\nOperating system (type Android or Windows_Phone or Symbian): ";
		fflush(stdin);
		cin>>input.iios;
		cout<<"\nTouchscreen/Keypad: (type Touchsreen or Keypad): ";
		fflush(stdin);
		gets(input.itouchkey);
		cout<<"\nsize (e.g: 3.5): ";
		cin>>input.isize;
		cout<<"\nram (e.g: 1GB): ";
		fflush(stdin);
		gets(input.iram);
		cout<<"\nMemory (e.g: 8): ";
		fflush(stdin);
		cin>>input.imemory;
		cout<<"\nWifi (e.g: Wifi 802.11 a/b/g/n or 0): ";
		fflush(stdin);
		gets(input.iwifi);
		cout<<"\nSecondary camera: (type Yes or No): ";
		fflush(stdin);
		gets(input.icamera);
		cout<<"\nFM radio: (type Yes or No): ";
		fflush(stdin);
		gets(input.iradio);
		cout<<"\nMemory card slot: (type Yes or No): ";
		fflush(stdin);
		gets(input.icardslot);
		cout<<"\nbattery (e.g: 2300): ";
		cin>>input.ibattery;
		cout<<"\nPrice (e.g: 5000): ";
		cin>>input.iprice;
		cout<<"\n do you want add more? enter 0 to continue or another number to finish!";
		fflush(stdin);
		cin>>key;
		filein<<input.ibrand<<endl;
		filein<<input.iname<<endl;
		filein<<input.iios<<endl;
		filein<<input.itouchkey<<endl;
        filein<<input.isize<<endl;
        filein<<input.iram<<endl;
        filein<<input.imemory<<endl;
        filein<<input.iwifi<<endl;
        filein<<input.icamera<<endl;
        filein<<input.iradio<<endl;
        filein<<input.icardslot<<endl;
        filein<<input.ibattery<<endl;
        filein<<input.iprice;
        filein<<endl;
	}while (key=='0');
		filein.close();

}

//===============================================================
//===============================================================

int main()
{
    char choose;
do{

    cout<<"\n\tMENU: \n\n";
    cout<<"[1]. Input Phone Data(admin)\n\n";
    cout<<"[2]. Search Phone (user)\n\n";
    cout<<"[3]. Exit!\n\n";
    fflush(stdin);
    cin>>choose;
    switch (choose)
    {
        case '1': input_data();break;
        case '2': getuserdata();break;
        case '3': exit(0);
        default: cout<<"\n\nWrong key! please enter again!";
    }
} while((choose!='1')&&(choose!='2'));
}
