#include<iostream>
using namespace std;

class code
{
    int id;
public:
    code(){}
    code(int a)      {id=a;}
    code(code & x)   {id=x.id;
                      cout<<"copy constructor called"<<endl;}

    void display()   {cout<<id<<endl;}
};

int main()
{
    code c3,c2(10);
    c3=code(5);

    code c1=c3;  ///copy constructor

    c1.display();

    code c4,c5;

    c4=c2;     ///must initialize c5....,,bt error hoilo na.. ///assignment operator

    c4.display();

    return 0;
}
