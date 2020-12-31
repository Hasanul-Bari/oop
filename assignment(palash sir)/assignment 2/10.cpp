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
    void putcount(void)
    {
        cout<<"count="<<count<<endl;
    }
    ~item() {}

};

int item :: count;

int main()
{
    item a(20);
    a.putcount();
    item b(30);
    b.putcount();
    item c(25);
    c.putcount();


    return 0;
}

