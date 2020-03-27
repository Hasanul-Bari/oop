#include<iostream>
using namespace std;

class exep
{
    int id;
    string name;
public:
    exep(int i,string n)  {id=i;  name=n; }
    void print()  {cout<<"Error ID : "<<id<<" - "<<name<<endl;}
};



void positive(int a)
{
    cout<<a<<endl;
    try
    {
        if(a<0)
            throw exep(1,"Not a positive number");
    }
    catch(exep e)
    {
        e.print();
    }
}

int main()
{
   positive(5);
   positive(-5);
   positive(6);
}


