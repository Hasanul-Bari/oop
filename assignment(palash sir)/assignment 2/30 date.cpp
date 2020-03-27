#include<iostream>
using namespace std;

class DATE
{
    int dd,mm,yy;
public:
    DATE()
    {
        dd=0;  mm=0; yy=0;
    }
    DATE(int x, int y, int z)
    {
        dd=x;  mm=x; yy=z;
    }


    friend DATE operator +(DATE x, int y)
    {

        DATE temp;
        temp.dd=y/365;
        y=y%365;
        temp.mm=y/30;
        temp.dd=y%30;

        x.dd=x.dd+temp.dd;
        x.mm=x.mm+temp.mm;
        x.yy=x.yy+temp.yy;

        return x;
    }

    friend int operator -(DATE x, DATE y)
    {
        long long z1=(x.yy*365)+(x.mm*30)+x.dd;
        long long z2=(y.yy*365)+(y.mm*30)+y.dd;

        return z1-z2;
    }

    friend DATE operator -(DATE x,int y)
    {
        DATE temp;
        temp.yy=y/365;
        y=y%365;
        temp.mm=y/30;
        temp.dd=y%30;

        x.dd=x.dd-temp.dd;
        x.mm=x.mm-temp.mm;
        x.yy=x.yy-temp.yy;

        return x;
    }

    friend ostream &operator << (ostream &os, DATE x)
    {
        os<<x.dd<<"/"<<x.mm<<"/"<<x.yy<<endl;
    }
};



int main()
{
    DATE d1(9,9,2018),d2(5,9,2018),d3,d4;
    cout<<d1<<d2<<d3;
    int a;


    a=d1-d2;
    cout<<"No of days(d1-d2) : "<<a<<endl;

    d3=d1+5;
    cout<<d3<<endl;

    d4=d1-6;
    cout<<d4<<endl;

    return 0;


}
