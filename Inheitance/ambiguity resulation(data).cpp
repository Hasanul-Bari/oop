#include<iostream>
using namespace std;

class base1
{
public:
    int m;
    void display()   {cout<<"Class base1 m ="<<m<<endl;}
};

class base2
{
public:
    int m;
    void display()   {cout<<"Class base2 m ="<<m<<endl;}

};

class derived : public base1 ,public base2
{
public:
    int m;
    void display()   {cout<<"Class derived m="<<m<<endl;}
};

int main()
{
    derived x;
    x.display();
    x.base1 ::display();
    x.base2 ::display();
    x.derived :: display();

    x.m=10;
    x.base1 ::m=25;
    x.base2 ::m=15;

    x.display();
    x.base1 ::display();
    x.base2 ::display();
    x.derived :: display();



   return 0;

}

