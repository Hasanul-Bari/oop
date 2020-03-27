#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    void input (float real,float img)
    {
        x=real;
        y=img;
    }
    complex sum(complex,complex);

    void show(complex c)
    {
        cout<<x<<"+j"<<y<<endl;
    }



};

int main()
{
        complex c1,c2,c3;
        c1.input(2,3);
        c2.input(3,4);

        c1.show(c1);
        c2.show(c2);

        c3=c3.sum(c1,c2);
        c3.show(c3);

        return 0;

}

complex  complex :: sum(complex a, complex b)
{
    complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;

    return c;
}

