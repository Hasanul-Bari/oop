#include<iostream>
using namespace std;

class DM;
class DB
{
    float f,in;
public:
    void put()
    {
        cout<<"Enter the distance in feet and inch"<<endl;
        cout<<endl<<"feet= ";
        cin>>f;
        cout<<endl<<"inch= ";
        cin>>in;
    }
    friend DM add(DM , DB);
};

class DM
{
    float m,cm;
public:
    void get()
    {
        cout<<"Enter the distance in feet and inch"<<endl;
        cout<<endl<<"metre= ";
        cin>>m;
        cout<<endl<<"centimetres= ";
        cin>>cm;
    }
    void display()
    {
        cout<<"sum= "<<m <<"  metres  "<<cm <<"  centimetrs";
    }
    friend DM add(DM , DB);
};

DM add(DM a, DB b)
{
    DM c;
    b.f=b.f*12;
    b.in=b.f+b.in;

    a.cm=a.cm+(b.in*2.54);
    c.cm=(int)a.cm%100;
    c.m=(int)(a.m+(a.cm/100));

    return c;

}

int main()
{
    DB y;
    DM x,z;
    x.get();
    y.put();

    z=add(x,y);
    z.display();

    return 0;
}


