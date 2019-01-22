 #include<iostream>
 #include<conio.h>
 #include<fstream>
 #include<string.h>
 #include<stdlib.h>
 #include<windows.h>
 using namespace std;

 class lib
 {
    protected:
        char name[25][25];
        char wn[25][25];
        char code[25][15];
        char copy[25][15];

 };

 class fn:public lib
 {
        int z;
    public:
        void AddBook(void);
        void DisplayBook(void);
        void initial(){z=0;}
        void SearchBook();
 };

 void fn ::AddBook(void)
 {
    int m,n,k;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    fstream f1;
    f1.open("book1.txt",ios::out|ios::app);

    cout<<"\n\nEnter the book name   :";
    cin>>name[z];
    cout<<"Enter writter name    :";
    cin>>wn[z];
    cout<<"Enter the book code   :";
    cin>>code[z];
    cout<<"Enter the no. of copy :";
    cin>>copy[z];

    int i;

    m=strlen(name[z]);
    n=strlen(wn[z]);
    k=strlen(code[z]);

    f1.seekg(0,ios::end);
    f1<<endl;

    f1<<name[z];
    for(i=0;i<26-m;i++)
    f1<<" ";
    f1 <<wn[z];
    for(i=0;i<22-n;i++)
    f1<<" ";
    f1 <<code[z];
    for(i=0;i<17-k;i++)
    f1<<" ";
    f1 <<copy[z];
    f1.close();

    z++;
 }
 void fn ::DisplayBook(void)
 {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    fstream f2;
    f2.open("book1.txt",ios::in|ios::app);
    f2.seekg(0);

    char a;

    cout<<"\n\n";
    cout<<"\t*************** BOOK LIST ***************";
    cout<<"\n\n";


    while(f2)
    {
        f2.get(a);
        cout<<a;
    }
    f2.close();

 }

 void fn ::SearchBook()
 {
    int j,k=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    cout<<"\nPlease enter the Book code: ";
    cin>>j;

    fstream f3;
    f3.open("book1.txt",ios::in|ios::app);
    f3.seekg(0);

    char c[20],d[20];
    int n,p;

    while(f3.eof()==0)
    {
        f3>>c;
        f3>>d;
        f3>>n;
        f3>>p;

        if(n==j)
        {
            cout<<"  \nBook name      : "<<c<<endl;
            cout<<"  \nWritter name   : "<<d<<endl;
            cout<<"  \nBook code      : "<<n<<endl;
            cout<<"  \nAvailable copy : "<<p<<endl<<endl;
            getch();
            k++;
        }
        if(k==1)
            break;
    }

 }

 int main ()
 {
    int i;

    fn f;
    f.initial();

    while(1)
    {

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\n***----- WELL COME TO LIBRARY MANAGEMENT PROGRAM -----***\n\n";
        cout<<"\n\n\t\t\tMAIN MENU"<<endl;
        cout<<"\n\t1: Add a new book to the list.";;
        cout<<"\n\t2: Display the Book information.";
        cout<<"\n\t3: Search a Book from list.";
        cout<<"\n\t4: Exit."<<endl;
        cout<<"\n\tENTER YOUR CHOICE:";
        cin>>i;
        switch(i)
        {
            case 1:
            {
                f.AddBook();
                break;
            }

            case 2:
            {
                f.DisplayBook();
                break;
            }

            case 3:
            {
                f.SearchBook();
                break;
            }

            default:
            {
                cout<<"Thank you.";
                break;
            }
        }

        if (i==4)
            break;
    }

    getch();
    return 0;
 }
