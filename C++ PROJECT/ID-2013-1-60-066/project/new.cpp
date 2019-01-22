#include <iostream>
#include<cstdio>
#include <cstring>
#include <stdlib.h>
using namespace std;
class user
{
public:
    int mobile;
    char fname[30];
    char lname[30];
    char email[50];
    int last;
    char address[150];
    int fnf1;
    int fnf2;
    int fnf3;
    int fnf4;
    int fnf5;
    char package[20];
    char ctune[15];
    char music[15];
    char alert[15];
}a;


int searchmobile(int mobile);
void clientmenu();
void adminmenu();
void createaccount(user a);
void print_file();

int main()
{

    int mobile;
    int pin;
    while(1)
    {
        int choice;
        printf("\nenter yuor mobile number");
        cin>>mobile;
        printf("\nenter pin code");
        cin>>pin;
        if(pin==121)
        {
            searchmobile(mobile);
            while(1)
            {
                clientmenu();
                printf("\n\t=> Enter your choice: ");
                scanf("%d", &choice);
                if(choice==1)
                {
                    int option;
                    int value;
                    printf("\nenter your mobile number to verify your subscription: ");
                    scanf("%d",&option);
                    value=a.mobile;
                    //cout << "Value variable is: " << a.mobile << endl;
                    value=value/100000000;
                    option=value%10;
                    //cout << "Option check: " << option << endl;
                    if(option==4)
                    {
                        int post;
                        //printf("\n\t\t==> you are under post-paid service: \n");
                        while(1){
                        printf("\n\t\t1.package info\n\t\t2.bill info\n\t\t3.payments\n\t\t0: Back\n");
                        printf("\n\n\t=> enter your choice: ");
                        scanf("%d",&post);
                        if(post==1)
                        {
                            int pack;
                            while(1){
                            printf("\n\t\t1.my package\n\t\t2.other package & tarrif  \n\t\t3.package change  \n\t\t0.back");
                            printf("\n\n\t=> enter your choice: ");
                            scanf("%d",&pack);
                            if(pack==1)
                            {
                                printf("Your pacage is : %s", a.package);
                                getchar();
                                getchar();
                            }
                            else if(pack==2)
                            {
                                int advance;
                                while(1){
                                printf("\t\t\n1.classic\t\t\n2.advance\t\t\n0.back");
                                printf("\n\n\t=> enter your choice: ");
                                scanf("%d",&advance);
                                if(advance==1)
                                {
                                    printf("\n\nclassic:on net:0.49(fnf:0.25),\n\noff-net:0.94(fnf:0.65),\n\npulse:5sec.\n\nsms:0.49(fnf:0.29),\n\nintl sms:2.49tk(vat applicable)\n\n");
                                }
                               else if(advance==2)
                                {
                                    printf("\n\nadvance:on net:0.77,\noff-net:0.77,\npulse:5sec.\nsms:0.45,\nintl sms:2.49tk(vat applicable)\n");
                                }
                               else if(advance==0)
                                {
                                    break;
                                }
                                else
                                {
                                    printf("wrong pin");
                                }
                                }
                            }
                            else if(pack==3)
                            {
                                strcpy(a.package,"advance");
                                printf("\n you have now in %s service",a.package);
                                print_file();
                                getchar();
                                getchar();

                            }
                            else if(pack==0)
                            {
                                break;
                            }
                            else
                            {
                                printf("wrong pin");
                            }
                            }
                        }
                        else if(post==2)
                        {
                            printf("you have used 120.00 tk bdt till today");
                            getchar();
                            getchar();
                        }
                        else if (post==3)
                        {
                            int pay;
                            while(1){
                            printf("\n\t\t1.last payment\n\t\t2.door step\n\t\t0.back");
                            printf("\n\n\t=> enter your choice: ");
                            scanf("%d",&pay);
                            if(pay==1)
                            {
                                printf("\n=> Your last payment is: %d", a.last);
                                getchar();
                                getchar();
                            }
                            else if(pay==2)
                            {
                                printf("\n=> Your address is: %s", a.address );
                                getchar();
                                getchar();
                            }

                            else if(pay==0)
                            {
                                break;
                            }
                            else
                            {
                                printf("wrong pin");
                            }
                            } // loop ends
                        }
                        else if(post==0)
                        {
                            break;
                        }
                        else
                        {
                            printf("wrong key word");
                        }
                    } // loop ends


                    }
                    else if(option==6)
                    {
                        printf("you are under pre-paid service");
                        printf("\t\t\nto cheak balance press 566\t\t\n0.previous");
                        int cheak;
                        if(cheak==566)
                        {
                            printf("yur balance is 30.00tk bdt and your balance exprire date is 23 november 2013");
                        }
                        else if(cheak==0)
                        {
                            break;
                        }
                        else
                        {
                            printf("wrong number");
                        }

                    }
                    else if(option==0)
                    {
                        break;
                    }
                    else
                    {
                        printf("wrong number");
                    }


                }
                else if(choice==2)
                {
                    int caller;

                    while(1)
                    {
                        printf("\n\t\t1.caller tune\n\t\t2.music & entertainment\n\t\t3.aleart service\n\t\t0.back");
                        printf("\n==> enter your choice");
                        scanf("%d",&caller);
                        if(caller==1)
                        {
                            strcpy(a.ctune,"activeted");
                            printf("\n you have %s caller tune",a.ctune);
                            print_file();
                            getchar();
                            getchar();
                        }
                        else if(caller==2)
                        {
                            strcpy(a.music,"activeted");
                            printf("\n you have %s music service",a.music);
                            print_file();
                            getchar();
                            getchar();
                        }
                        else if(caller==3)
                        {
                            strcpy(a.alert,"activeted");
                            printf("\n you have %s alert service",a.alert);
                            print_file();
                            getchar();
                            getchar();
                        }
                        else if(caller==0)
                        {
                            break;
                        }
                        else
                        {
                            printf("\n wrong pin");
                        }
                    }

                }
                else if(choice==3)
                {
                   int stop;

                   while(1)
                   {
                        printf("\n\t\t1.stop caller tune service\n\t\t2.stop music & entertainment service\n\t\t3.stop aleart service\n\t\t0.back");
                        printf("\n==> enter your choice");
                        scanf("%d",&stop);
                        if(stop==1)
                        {
                            strcpy(a.ctune,"deactiveted");
                            printf("\n you have %s caller tune",a.ctune);
                            print_file();
                            getchar();
                            getchar();
                        }
                        else if(stop==2)
                        {
                            strcpy(a.music,"deactivated");
                            printf("\n you have %s music service",a.music);
                            getchar();
                            getchar();
                        }
                        else if(stop==3)
                        {
                            strcpy(a.alert,"deactivated");
                            printf("\n you have %s alert service",a.alert);
                            getchar();
                            getchar();
                        }
                        else if(stop==0)
                        {
                            break;
                        }
                        else
                        {
                            printf("\n wrong pin");
                        }
                   }
                }
                else if(choice==4)
                {
                    int fnf;
                    while(1)
                    {
                        printf("\n\t\t1.add a number\n\t\t2.delate a number\n\t\t3.number list\n\t\t0.back");
                        printf("\n ==> enter your choice");
                        scanf("%d",&fnf);
                        if(fnf==1)
                        {
                            int number;
                            while(1)
                            {


                            printf("\n\t\t enter your choice");
                            printf("\n\t\t 1.add a number\n\t\t 2.add two number\n\t\t 3.add three number\n\t\t 4.add four number\n\t\t 5.add five number\n\t\t 0.back");
                            printf("\n ==> enter your choice");
                            cin >> number;
                            if(number==1)
                            {
                                int veriable;
                                scanf("%d", &veriable);
                                veriable=a.fnf1;
                                printf("\n 1st fnf is %d",a.fnf1);
                                print_file();

                                getchar();
                                getchar();
                            }
                            else if(number==2)
                            {
                                int naim;
                                scanf("%d",&naim);
                                a.fnf2=naim;
                                printf("\n 2nd fnf is %d",a.fnf2);
                                print_file();

                                getchar();
                                getchar();
                            }
                            else if(number==3)
                            {
                                int hasan;
                                scanf("%d",&hasan);
                                a.fnf3=hasan;
                                print_file();
                                printf("\n 3rd fnf is %d",a.fnf3);

                                getchar();
                                getchar();
                            }
                            else if(number==4)
                            {
                                int nayeem;
                                scanf("%d",&nayeem);
                                a.fnf4=nayeem;
                                print_file();
                                printf("\n 4th fnf is %d",a.fnf4);

                                getchar();
                                getchar();
                            }
                            else if(number==5)
                            {
                                int abba;
                                scanf("%d",&abba);
                                a.fnf5=abba;
                                print_file();
                                printf("\n 5th fnf is %d",a.fnf5);

                                getchar();
                                getchar();
                            }
                            else if(number==0)
                            {
                                break;
                            }
                            else
                            {
                                printf("\n wrong number");
                            }
                        }

                        }
                        else if(fnf==2)
                        {
                            cout << "\nYour FnF Number is: \n";
                            printf("\n\t1: %d",a.fnf1);
                            printf("\n\t2: %d",a.fnf2);
                            printf("\n\t3: %d",a.fnf3);
                            printf("\n\t4: %d",a.fnf4);
                            printf("\n\t5: %d",a.fnf5);
                            printf("\n\t=>0.back Enter your choice to delete: ");
                            int del;
                            while(1)
                            {
                                scanf("%d", &del);
                                if(del==1)
                                {
                                    a.fnf1=1;
                                    print_file();
                                    printf("\n\tFnF Number Deleted.");
                                }
                                else if(del==2)
                                {
                                    a.fnf2=1;
                                    print_file();
                                    printf("\n\tFnF number delated.");
                                }
                                else if(del==3)
                                {
                                    a.fnf3=1;
                                    print_file();
                                    printf("\n\tFnF number delated");
                                }
                                else if(del==4)
                                {
                                    a.fnf4=1;
                                    print_file();
                                    printf("\n\tFnF number delated");
                                }
                                else if(del==5)
                                {
                                    a.fnf5=1;
                                    print_file();
                                    printf("\n\tFnF number delated");
                                }
                                else if(del==0)
                                {
                                    break;
                                }
                                else
                                {
                                    printf("\n\t wrong pin");
                                }


                                print_file();
                            }


                        }
                        else if(fnf==3)
                        {


                            printf("\n\t1st fnf is: %d", a.fnf1);


                            printf("\n\t2nd fnf is: %d",a.fnf2);
                            printf("\n\t3rd fnf is: %d",a.fnf3);
                            printf("\n\t4th fnf is: %d",a.fnf4);
                            printf("\n\t5th fnf is: %d",a.fnf5);
                        }
                        else if(fnf==0)
                        {
                            break;
                        }
                        else
                        {
                            printf("wrong number");
                        }
                    }

                }


                else if(choice==0)
                {
                    break;
                }
                else
                {
                    printf("\n\t\t=> Invalid Input <=");
                }
            }
        }  // Client Panel End Here
        else if(pin==212)
        {
            adminmenu();

        }
        else
        {
            printf("wrong pin code");
        }
    }
}


void print_file()
{
    FILE *fp;
    char name[30];
    itoa(a.mobile, name, 10);
    strcat(name, ".txt");
    fp = fopen(name, "w");
    if(fp!=NULL)
    {
        fprintf(fp, "%s %s %d %s %d %d %d %d %d %s %s %d %s %s %s ", a.fname, a.lname, a.mobile, a.email, a.fnf1, a.fnf2, a.fnf3, a.fnf4, a.fnf5 , a.package, a.address, a.last,a.ctune,a.music,a.alert);
    }
    fclose(fp);
}

int searchmobile(int mobile)
{
    FILE *fp;
    char name[30];
    itoa(mobile, name, 10);
    strcat(name, ".txt");
    fp = fopen(name, "r");
    if(fp!=NULL)
    {
        fscanf(fp, "%s%s%d%s%d%d%d%d%d%s%s%d%s%s%s", a.fname, a.lname, &a.mobile, a.email, &a.fnf1, &a.fnf2, &a.fnf3, &a.fnf4, &a.fnf5 , a.package, a.address, &a.last,a.ctune,a.music,a.alert);
    }
    else
        cout << "Error Opening user file !!! " << endl;
}

void clientmenu()
{
    printf("\n\t\t1: Bill & Package Info\n\t\t2: Start a Service\n\t\t3: Stop a Service\n\t\t4: FnF\n\t\t0: Exit\n\n");
}

void adminmenu()
{
    printf("Admin Menu Here");
}

void createaccount(user a)
{
    printf("\nEnter Mobile Number: ");
    scanf("%d", &a.mobile);
    printf("First Name: ");
    scanf("%s", a.fname);
    printf("Last Name: ");
    scanf("%s", a.lname);
    printf("Email Name: ");
    scanf("%s", a.email);
    printf("Package Name: ");
    scanf("%s", a.package);
    FILE *fp;
    //fp = fopen();
}










