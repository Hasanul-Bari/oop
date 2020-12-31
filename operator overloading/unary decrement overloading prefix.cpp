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

    space operator -- ();
};

space space :: operator -- ()
{
    space temp;
    temp.x=--x;
    temp.y=--y;
    temp.z=--z;
    return temp;
}

int main()
{
    space s,s1;
    s.getdata();
    cout<<"s : ";
    s.display();

    --s;
    s1=--s;

    cout<<"s : ";
    s.display();
    s1.display();
    return 0;
}


