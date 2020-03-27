#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
public:
    item(int a)
    {
        number=a;
        count++;
    }
    static void putcount(void)
    {
        cout<<"count="<<count<<endl;
    }
    ~item(){}

};

int item :: count;

int main()
{

    item :: putcount();



    item a(20),b(30),c(40);


    cout<<"After creating objects"<<endl;
    item :: putcount();


    return 0;
}
