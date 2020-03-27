#include<iostream>
using namespace std;

class base1
{
public:
    void display()   {cout<<"Class base1"<<endl;}
};

class base2: public base1
{
public:
    void display()   {cout<<"Class base2"<<endl;}

};

class derived : public base2
{
public:
    void display()   {cout<<"Class derived"<<endl;}
};

int main()
{
    derived x;
    x.display();
    x.base1 ::display();
    x.base2 ::display();
    x.derived :: display();



   return 0;

}

