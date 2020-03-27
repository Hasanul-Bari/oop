#include<iostream>
using namespace std;

class bank_ac
{
    char name[25];
    int ac_no;
    char ac_type[10];
    int balance;
public:
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<endl<<"Enter account number : ";
        cin>>ac_no;
        cout<<endl<<"Enter account type : ";
        cin>>ac_type;

    }

    void deposit()
    {
        cout<<endl<<"Enter the amount you want to deposit : ";
        cin>>balance;
    }

    void withdraw()
    {
        cout<<endl<<"Your account have "<<balance<<" tk"<<endl;
        int x;
        cout<<endl<<"Enter the amount you want to withdraw : ";
        cin>>x;
        if(x<=balance)
        {
            balance=balance-x;
            cout<<endl<<"Entered amount is successfully withdrawn"<<endl;
        }
        else
            cout<<endl<<"Insufficient balance"<<endl;
    }
    void display()
    {
        cout<<endl<<"Name : "<<name<<endl;
        cout<<"Account Balance : "<<balance<<endl;
    }


};

int main()
{
    bank_ac man1;
    man1.input();
    man1.deposit();
    man1.withdraw();
    man1.display();

    return 0;

}
