#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
public:
    void get(int a)
    {
        number=a;
        count++;
    }
    void putcount(void)
    {
        cout<<"count="<<count<<endl;
    }

};

int item :: count;

int main()
{
    item a,b,c;
    a.putcount();
    b.putcount();
    c.putcount();

    a.get(20);
    b.get(30);
    c.get(40);

    a.putcount();
    b.putcount();
    c.putcount();




    return 0;
}
