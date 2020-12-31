#include<iostream>
using namespace std;

class circle3;
class circle2;
class circle1
{
    float rad1;           /// private data
public:
    void get() {cin>>rad1;}

    friend float largest(circle1,circle2,circle3);    ///friend function declaration
};

class circle2
{
    float rad2;         ///private data
public:
    void set() {cin>>rad2;}
    friend float largest(circle1,circle2,circle3);     ///friend function declaration

};

class circle3
{
    float rad3;         ///private data
public:
    void put() {cin>>rad3;}
    friend float largest(circle1,circle2,circle3);     ///friend function declaration

};

float largest (circle1 a, circle2 b, circle3 c)         ///friend function definition
{
    if(a.rad1>b.rad2 && a.rad1>c.rad3)
        return a.rad1;
    else if(b.rad2>a.rad1 && b.rad2>c.rad3)
        return b.rad2;
    else if(c.rad3>a.rad1 && c.rad3>b.rad2)
        return a.rad1;

}


int main()
{
    circle1 x;                                             /// taking objects
    circle2 y;
    circle3 z;
    x.get();
    y.set();
    z.put();

    float m;
    m=largest(x,y,z);                                    ///calling friend function

    cout<<m<<endl;

    return 0;

}


