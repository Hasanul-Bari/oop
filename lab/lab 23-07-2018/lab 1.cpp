#include<iostream>
using namespace std;

class base
{
    int a;
public:
    int b;
    void get_ab()    {a=5; b=10;}
    int put_a(void)  {return a;}
    void show_a(void) {cout<<a;}
};

class derived : public base
{
    int c;
public:
    void multi (void) {c=b*put_a();}
    void display(void)  {cout<<put_a()<<endl<<b<<endl<<c<<endl;}
};

int main()
{
    derived d;
    d.get_ab();
    d.multi();
    d.display();


    //d.a;   wrong

    d.b=20;

    return 0;
}
