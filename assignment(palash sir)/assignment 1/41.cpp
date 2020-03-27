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
        cout<<endl<<"inches= ";
        cin>>in;
    }
    void display()
    {
        cout<<"sum= "<<f <<"  feet  "<<in <<"  inches";
    }
    friend DM add(DM, DB);
    friend DB add2(DM,DB);
};

class DM
{
    float m,cm;
public:
    void get()
    {
        cout<<"Enter the distance in meters and centimeters"<<endl;
        cout<<endl<<"meters= ";
        cin>>m;
        cout<<endl<<"centimeters= ";
        cin>>cm;
    }
    void display()
    {
        cout<<"sum= "<<m <<"  meters  "<<cm <<"  centimeters";
    }
    friend DM add(DM, DB);
    friend DB add2(DM,DB);
};

DM add(DM a, DB b)
{
    DM c;
    b.f=b.f*12;
    b.in=b.f+b.in;

    c.cm=a.cm+(b.in*2.54);
    c.m=a.m;
    while(c.cm>=100)
    {
        c.m++;
        c.cm=c.cm-100;
    }

    return c;

}

DB add2(DM a,DB b)
{
    DB c;
    a.cm=a.cm+(a.m*100);

    c.f=b.f;
    c.in=b.in+(a.cm*0.3937);
    while(c.in>=12)
    {
        c.f++;
        c.in=c.in-12;
    }
    return c;

}



int main()
{
    DB y;
    DM x;
    x.get();
    y.put();

    int h;
    cout<<endl<<"Enter your option.. "<<endl;
    cout<<"1. meters and centimeters "<<endl;
    cout<<"2. feet and inches "<<endl;
    cin>>h;
    if(h==1)
    {
        x=add(x,y);
        x.display();
    }
    else if(h==2)
    {
        y=add2(x,y);
        y.display();
    }



    return 0;
}
