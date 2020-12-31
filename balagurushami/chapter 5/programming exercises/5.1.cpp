#include<iostream>
using namespace std;

class bankac
{
    char name[20];
    int ac_no;
    char ac_type[10];
    float balance;
public:
    void getvalues(void)
    {
        cin>>name>>ac_no>>ac_type;
    }
    void deposit(void);
    void withdraw(void);
    void display(void)
    {
        cout<<endl<<"name="<<name<<endl<<"balance="<<balance<<endl;
    }

};

void bankac :: deposit(void)
{
    cout<<"Enter the balance to deposit"<<endl;
    cin>>balance;
}
void bankac :: withdraw(void)
{
    cout<<"balance"<<balance<<endl;
    cout<<"Enter the balance to withdraw"<<endl;
    float a;
    cin>>a;
    balance=balance-a;
}


int main()
{
    bankac d[3];
    for(int i=0; i<3; i++){
        cout<<"enter the info of people "<< i+1<<endl;
        d[i].getvalues();}




    for(int i=0; i<3; i++)
        d[i].deposit();


    d[2].withdraw();

    for(int i=0; i<3; i++)
        d[i].display();


    return 0;

}




