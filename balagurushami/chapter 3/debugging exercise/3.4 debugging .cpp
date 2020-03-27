#include<iostream>
#define pi 3.14
using namespace std;


int squarearea (int &);
int circlearea (int &);

main()
{
    int a=10;
    cout<<squarearea(a)<<"  ";
    cout<<circlearea(a)<<"  ";
    cout<<a<<endl;

}

int squarearea (int &a)
{
    return a*=a;
}

int circlearea (int &r)
{
    return r=pi*r*r;
}
