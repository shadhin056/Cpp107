#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
class  employee
{
private:
    char* emp_name;
    int emp_join_year;
    float emp_salary;
public:
    employee(char* _name,int _year,float _salary);
private:
    int workedyear(void);
    void printinfo(void);
};
//************************************************
employee::employee (char*_name,int _year,float _salary)
{
    emp_name=_name;
    emp_join_year=_year;
    emp_salary=_salary;
    printinfo();
}
//************************************************
int employee::workedyear()
{
    struct data current_data;
    int yeardifference;
    getdata(&current_data);
    yeardifference=current_data.da_year-emp_join_year;
    return(yeardifference);
}
//************************************************
int employee::printinfo()
{
    cout<<"name:"<<emp_name<<"\n";
    cout<<"joined data:"<<emp_join_year<<"\n";
    cout<<"salary:"<<emp_salary<<"\n";
    cout<<"worked:"<<workedyear()<<"years\n\n";
}
int main()
{
    //clrscr();
    employee ram ("ram",1997,12500);
    employee sam ("sam",1986,7500);
    employee jadu ("jadu",1981,8700);
    employee madhu ("madhu",1974,27500);
    getch();
}


















