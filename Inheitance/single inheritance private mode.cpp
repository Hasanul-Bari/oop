#include<iostream>
using namespace std;

class base
{
    int a;
protected:
    int b;
public:
    int c;
    void get_abc() {cin>>a>>b>>c;}
    int put_a()     {return a;}

};

class derive : private base
{
    int d;
public:
    void getget_abc ()  {get_abc();}
    void multi()  {d=c*b*put_a();}
    void display() {cout<<put_a()<<endl<<b<<endl<<c<<endl<<d<<endl ;}
};

int main()
{
    derive d;
    d.getget_abc();
    d.multi();
    d.display();
    cout<<endl;
    /*d.c=10;
    d.multi();
    d.display();*/


    //d.b=2;  //b is protected|

   return 0;

}
