#include<iostream>
using namespace std;

class space
{
    int x,y,z;
public:
    void getdata()   {cin>>x>>y>>z;}
    void display()
    {
        cout<<"x= "<<x<<"  ";
        cout<<"y= "<<y<<"  ";
        cout<<"z= "<<z<<endl;
    }

    void operator + ();
};

void space :: operator + ()
{
    x=+x;
    y=+y;
    z=+z;
}

int main()
{
    space s;
    s.getdata();
    cout<<"s : ";
    s.display();

    +s;

    cout<<"s : ";
    s.display();

    return 0;
}

