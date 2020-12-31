#include<iostream>
using namespace std;

class code
{
    int id;
public:
    code(){}
    code(int a)      {id=a;}
    code(code & x)   {id=x.id;}

    void display()   {cout<<id<<endl;}
};

int main()
{
    code c1,c2(10),c3;
    c3=code(5);

    c1=c3;

    c1.display();

    code c4,c5;

    c4=c5;     ///must initialize c5....,,bt error hoilo na..

    return 0;
}

