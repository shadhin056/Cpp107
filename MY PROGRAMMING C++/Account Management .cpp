//mid- 1, q-3
//Account Management program in c++ style with class
//Nasif Ahmed


#include<iostream>
#include<cstdio>
#include<string>



using namespace std;


char gr;
int total_account;


                //structure of account management

class account_class
    {
    private:

        int a_code;
        string a_name;
        int depo;
        int withd;
        int balance;

    public:
        account_class();
        ~account_class();

        void a_entry (int i);
        void f_deposit();
        void f_withdraw();
        void show_account();
        int a_search();


    }account[150];


                //main function start
int main()
{
    int a,i=0;

    while(1)                                                        //action menu start
    {
        cout << "\n\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **\n";
        cout << "\t*                                                                *\n";
        cout << "\t*  1.Press 1 to add a new account.                               *\n";
        cout << "\t*  2.Press 2 to deposit money.                                   *\n";
        cout << "\t*  3.Press 3 to withdraw money.                                  *\n";
        cout << "\t*  4.Press 4 to show your account status.                        *\n";
        cout << "\t*  5.Press 5 to EXIT!!                                           *\n";
        cout << "\t*                                                                *\n";
        cout << "\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **\n";
        cout << "\n                What do you want?(1,2,3,4): ";

        cin >> a;


        while(a<1||a>5)                                             //invalid input checking
        {
            cout << "\n\tYour entry was invalid\n";
            cout << "\tPlease select one of the action from the above list: ";
            cin >> a;
        }

        switch(a)
        {
            case 1: account[i].a_entry (i);
                    //p_info(i);
                    i++;
                    total_account=i;
                    break;

            case 2: account[i].f_deposit();
                    break;

            case 3: account[i].f_withdraw();
                    break;
            case 4: account[i].show_account();
                    break;

        }

        if(a==5)                                            //terminate while loop & exit the program
            break;

    }

    return 0;
}


        //---------user defined function--------//

account_class::account_class()
{
    a_code=1000;

}
account_class::~account_class()
{

}



void account_class::a_entry (int i)                                        //this func for adding a new account
{
    account[i].a_code+=i;

    cout << "\n\taccount Code               : " << account[i].a_code;

    gr=getchar();                                        //this line is needed for action list

    cout << "\n\tEnter account holder name  : ";
    getline(cin,account[i].a_name);

    cout << "\n\t -----------------------------------------------------\n";
    cout << "\t |  You have successfully added another account.     |\n";
    cout << "\t -----------------------------------------------------\n\n";

}

void account_class::f_deposit()                                             //function for input depo
{
    int i,depo;
    i=a_search();

    cout << "\t|     Enter deposit ammount   : ";
    cin >> depo;
    cout << "\t-----------------------------------------------------\n";

    account[i].depo= depo;

    account[i].balance += depo;

}

void account_class::f_withdraw()                                             //function for input depo
{
    int i,withd;
    i=a_search();

    cout << "\t|     Enter withdraw ammount    : ";
    cin >> withd;
    cout << "\t-----------------------------------------------------\n";

    account[i].withd= withd;

    account[i].balance -= withd;

}


void account_class::show_account()
{
    int i;
    i=a_search();
    //cout << "\n\taccount Code       : " << account[i].a_code;
    cout << "\n\taccount Code           : " << account[i].a_code;
    cout << "\n\taccount name           : " << account[i].a_name;
    cout << "\n\tCurrent balance        : " << account[i].balance;
    cout << "\n\tLast deposit           : " << account[i].depo;
    cout << "\n\tLast withdraw amount  : "<< account[i].withd;
}

int account_class::a_search()
{
    int i;
    int temp;
    cout << "\n\t-----------------------------------------------------";
    cout << "\n\t|";
    cout << "\n\t|    Enter account code         : ";
    cin >> temp;

    while(temp<1000)                                             //invalid input checking
    {
    cout << "\n\t|    !!!!!Your entry was invalid!!!!!";
    cout << "\n\t|    Please give your account id carefully: ";
    cin >> temp;
    }

    for(i=0;i<total_account;i++)
    {
        if(temp==account[i].a_code)
            break;
    }


    return i;
}


//have to develop more

