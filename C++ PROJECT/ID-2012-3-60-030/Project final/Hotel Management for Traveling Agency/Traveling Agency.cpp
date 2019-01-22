#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define MaxRoom 1000



class CustomerData
{
    public:
    string username;
    int userid;
    string cell;
    string address;
};

class RoomData
{
    public:
    int roomNumber;
    CustomerData C;
    int rate;
    bool flag;
};

class HotelData
{
public:
    string HotelName;
    int HotelId;
    int NumberOfRoom;
    int NumberOfCustomer;
    RoomData Room[MaxRoom];

    HotelData(string hn, int id, int n)
    {
        HotelName=hn;
        HotelId=id;
        NumberOfRoom=n;
        UpdateRoomData();

    }
    void UpdateRoomData()
    {
        for(int i=0;i<NumberOfRoom;i++)
        {
            Room[i].roomNumber=1001+i;
            Room[i].flag=false;
            Room[i].rate=2000;
        }

        ifstream myfile;
        string fileName = HotelName+".txt";
        char  c[fileName.size()+1];
        memset(c, 0, sizeof(c));
        for(int i=0;i<fileName.size();i++)
            c[i]=fileName[i];
        myfile.open(c);
        stringstream ss;
        string a,cn,ca;
        int number,cid,cc,r;
        CustomerData uu;

        while(getline(myfile,a))
        {
            ss.clear();ss<<a;ss>>number;
            getline(myfile,a);
            cn=a;
            getline(myfile,a);
            ss.clear();ss<<a;ss>>cid;
            getline(myfile,a);
            ss.clear();ss<<a;ss>>cc;
            getline(myfile,a);
            ca=a;
            getline(myfile,a);
            ss.clear();ss<<a;ss>>r;
            uu.username=cn;
            uu.userid=cid;
            uu.cell=cc;
            uu.address=ca;
            AddUser(uu,number);
        }
        myfile.close();
        UpdateFile();
    }
    void AddUser(CustomerData NewUser, int num)
    {
        for(int i=0;i<NumberOfRoom;i++)
        {
            if(Room[i].roomNumber==num)
            {
                Room[i].C=NewUser;
                Room[i].flag=true;
                break;
            }
        }
    }
    void UpdateFile()
    {
        ofstream myfile;
        string fileName = HotelName+".txt";
        char  c[fileName.size()+1];
        memset(c, 0, sizeof(c));
        for(int i=0;i<fileName.size();i++)
            c[i]=fileName[i];
        myfile.open(c);

        for(int i=0;i<NumberOfRoom;i++)
        {
            if(Room[i].flag)
            {
                myfile<<Room[i].roomNumber<<endl;
                myfile<<Room[i].C.username<<endl;
                myfile<<Room[i].C.userid<<endl;
                myfile<<Room[i].C.cell<<endl;
                myfile<<Room[i].C.address<<endl;
                myfile<<Room[i].rate<<endl;
            }
        }
        myfile.close();

    }

};

void printOptions(void)
{
    cout<<"1. Show Hotel List"<<endl;
    cout<<"2. Select Hotel"<<endl;
    cout<<"3. Show Available Rooms"<<endl;
    cout<<"4. New Customer Entry"<<endl;
    cout<<"5. Remove Customer"<<endl;
    cout<<"6. Exit"<<endl;


}

vector<HotelData> H;
bool hotelSelection;
int hotelId;

void preCalculate(void)
{
    ifstream myfile;
    myfile.open("HotelList.txt");
    string a;
    string name;
    int id, n;
    stringstream ss;
    while(getline(myfile,a))
    {
        name=a;
        getline(myfile,a);
        ss.clear();
        ss<<a;
        ss>>id;
        getline(myfile,a);
        ss.clear();
        ss<<a;
        ss>>n;

        //cout<<name<<" "<<id<<" "<<n<<endl;
        HotelData th(name,id,n);
        H.push_back(th);

    }
    myfile.close();

    for(int i=0;i<H.size();i++)
        H[i].UpdateFile();


}

void ShowHotelList()
{
    ifstream myfile;
    myfile.open("HotelList.txt");
    string a;
    string name;
    int id, n;
    stringstream ss;
    while(getline(myfile,a))
    {
        name=a;
        getline(myfile,a);
        ss.clear();
        ss<<a;
        ss>>id;
        getline(myfile,a);
        ss.clear();
        ss<<a;
        ss>>n;

        cout<<"Name: "<<name<<endl;
        cout<<"HotelId: "<<id<<endl;

    }
    printf("\n\n");
    myfile.close();

}

void SelectHotel()
{

    cout<<"Enter HotelID: ";
    cin>>hotelId;
    hotelSelection=true;
    cout<<"Hotel Selected..."<<endl;



}
string getHotelName(int id)
{
    for(int i=0;i<H.size();i++)
    {
        if(H[i].HotelId==id)
            return H[i].HotelName;
    }
    return "HotelName Not Found";
}
void ShowAvailAbleRooms(void)
{
    cout<<"Hotel Name: "<<getHotelName(hotelId)<<endl;
    for(int i=0;i<H.size();i++)
    {
        if(H[i].HotelId==hotelId)
        {
            cout<<"Available Rooms.....\n";
            for(int j=0;j<H[i].NumberOfRoom;j++)
            {
                if(H[i].Room[j].flag==false)
                    cout<<H[i].Room[j].roomNumber<<endl;

            }
        }
    }

}

void NewCustomerEntry(void)
{
    string fileName = getHotelName(hotelId)+".txt";
    CustomerData cc;
    int roomnumber, rate;

    cout<<"Enter Room Number: "; cin>>roomnumber;
    cout<<"Enter Customer Name: "; cin>>cc.username;
    cout<<"Enter Customer Id: "; cin>>cc.userid;
    cout<<"Enter Customer Cell: "; cin>>cc.cell;
    cout<<"Enter Customer Address: "; cin>>cc.address;
    rate=2000;

    for(int i=0;i<H.size();i++)
    {
        if(H[i].HotelId==hotelId)
        {
            H[i].AddUser(cc,roomnumber);
            H[i].UpdateFile();
        }
    }
    cout<<"Entry completed"<<endl;


}
void RemoveUser()
{
    int userId;
    cout<<"Enter UserId: ";
    cin>>userId;

    for(int i=0;i<H.size();i++)
    {
        if(H[i].HotelId==hotelId)
        {
            for(int j=0;j<H[i].NumberOfRoom;j++)
            {
                if(H[i].Room[j].C.userid==userId)
                {
                    H[i].Room[j].flag=false;
                    H[i].UpdateFile();
                    cout<<"Customer Deleted Successfully"<<endl;
                    return;
                }
            }


        }
    }
    cout<<"Cutomer Id not found"<<endl;

    return;
}


int main()
{


    preCalculate();

    int token;

    while(token>0)
    {
        printOptions();
        cout<<"Enter Your Choice: ";
        cin>>token;
        system("cls");
        if(token==1)
            ShowHotelList();
        if(token==2)
            SelectHotel();
        if(token==3)
        {
            if(hotelSelection==false)
            {
                cout<<"Hotel must be selected first"<<endl;
                continue;
            }
            ShowAvailAbleRooms();
        }
       if(token==4)
        {
            if(hotelSelection==false)
            {
                cout<<"Hotel must be selected first"<<endl;
                continue;
            }
            NewCustomerEntry();
        }

        if(token==5)
        {
            if(hotelSelection==false)
            {
                cout<<"Hotel must be selected first"<<endl;
                continue;
            }
            RemoveUser();


        }
        if(token==6)
           break;

        cout<<"Press any key to continue....."<<endl;
        getchar();
        getchar();
    }



    return 0;
}
