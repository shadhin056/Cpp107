//newton page 09

#include<iostream>
using  namespace std;
class Account
{
    char AccNo[10];
    char AccType[15];
    double balance;
public :
    Account (char *no ,char *type,double bl)
    {
        strcpy(AccNo,no);
        strcpy(AccType,type);
        balance=bl;
    }
    void showinfo()
    {
        cout <<"Account Number:"<<AccNo<<endl;
        cout <<"Account type:"<<AccType<<endl;
        cout <<"Current Balance:"<<balance<<endl;
    }
};
int main(void)
{
    Account ram("SCB 0043","Current",339874.98);
    Account sam("SCB 2332","fixed",339874.98);
    ram.Showinfo();
    sam.Showinfo();
}
