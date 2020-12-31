#include<iostream>
using namespace std;

class base1
{
protected:
    int a;
public:
    int b;
    void get_ab() {cin>>a>>b;}

};

class base2
{
protected:
    int c;
public:
    int d;
    void get_cd() {cin>>c>>d;}

};

class derive : protected base1 ,protected base2
{
    int e;
public:
    void multi()
    {
        get_ab();
        get_cd();
        e=a*b*c*d;
    }
    void display() {cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl ;}
};

int main()
{
    derive e;
    e.multi();
    e.display();



   return 0;

}
