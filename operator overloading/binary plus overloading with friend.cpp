#include<iostream>
using namespace std;

class complex
{
    float x;
    float y;
public:
    complex() {}
    complex(float real,float imag)
    {
        x=real;
        y=imag;
    }
    friend complex operator +(complex,complex);

    void display() {cout<<x<<" +j"<<y<<endl;}
};

complex  operator + (complex c,complex d)
{
    complex temp;
    temp.x=c.x+d.x;
    temp.y=c.y+d.y;

    return temp;
}

int main()
{
    complex c1(2.5,3.5)  ,c2(1.6,2.7) ,c3;
    c3=c1+c2;

    cout<<"c1 = ";  c1.display();
    cout<<"c2 = ";  c2.display();
    cout<<"c3 = ";  c3.display();

}

