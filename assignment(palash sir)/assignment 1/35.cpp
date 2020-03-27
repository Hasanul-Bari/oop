#include<iostream>
using namespace std;
class complex
{
    static int count;
    float x,y;
public:
    void input (void)
    {
        count++;
        cout<<"Enter the value of x and y of object "<<count<<endl;
        cin>>x>>y;
    }
    friend complex sum(complex,complex);

    void show(complex c)
    {
        cout<<x<<"+j"<<y<<endl;
    }



};

int complex :: count;

int main()
{
        complex c1,c2,c3;
        c1.input();
        c2.input();

        c1.show(c1);
        c2.show(c2);

        c3=sum(c1,c2);
        c3.show(c3);

        return 0;

}

complex sum(complex a, complex b)
{
    complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;

    return c;
}

