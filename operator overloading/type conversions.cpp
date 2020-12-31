#include<iostream>
using namespace std;

class number
{
    int x,y;
public:
    number() {x=0; y=0;}
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    number(int a)   {  x=a;  y=0; }   ///build --> class

    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()  { cout<<x<<" "<<y<<endl;}

    operator int()                     ///class --> build
    {
         return x+y;
    }
};


class number1
{
    int x;
public:
    number1() {x=0;}
    number1(int a)
    {
        x=a;
    }
    void set(int a)
    {
        x=a;
    }
    void print()  { cout<<x<<endl;}

    operator number()                ///class-->class
    {
         number temp(x);
         return temp;
    }

};

int main()
{
    number n1(2,5),n2(1,5),n3(7,8);

    ///build --> class
    int a=5;
    n1=a;
    n1.print();

    ///class --> build

    int b;
    b=n2;
    cout<<b<<endl;

    ///class-->class
    number x1;
    x1=5;
    n3=x1;
    n3.print();



    return 0;
}

