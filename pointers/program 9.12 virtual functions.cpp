#include<iostream>
#include<cstring>

using namespace std;

class base
{
public:
    void display()        { cout<<"Display base"<<endl; }
    virtual void show()  { cout<<"Show base"<<endl; }
};

class derived :public base
{
public:
    void display()        { cout<<"Display derived"<<endl; }
    void show()  { cout<<"Show derived"<<endl; }
};

int main()
{
    base b;
    derived d;
    base *bptr;

    cout<<endl<<"bptr points to base"<<endl;

    bptr=&b;
    bptr->display();
    bptr->show();

    cout<<endl<<"bptr points to derived"<<endl;

    bptr=&d;
    bptr->display();
    bptr->show();

    return 0;

}
