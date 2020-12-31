#include<iostream>
using namespace std;

class bankac
{
    char acname[20];
    int ac_no;
    int amount;
public:
    void deposit()
    {
        cout<<"Enter amount=";
        cin>>amount;
    }

    void withdraw()
    {
        cout<<"your account have  "<<amount<<"  tk"<<endl;
        int x;
        cout<<"Enter account you want to withdraw=";
        cin>>x;
        amount=amount-x;
    }
    void display()
    {
        cout<<"amount="<<amount<<endl;
    }
};

int main()
{
    bankac hp;          ///used as built in data type
    hp.deposit();
    hp.withdraw();
    hp.display();

    bankac a[3];       ///used as built in data type


    for(int i=0; i<3; i++)
    {
        a[i].deposit();
        a[i].withdraw();
        a[i].display();
    }

    return 0;
}
