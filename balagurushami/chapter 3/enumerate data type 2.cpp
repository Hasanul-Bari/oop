#include<iostream>
using namespace std;

enum color
{
    red,blue,green
};

int main()
{
    color c;

    c=green;

    int a= red;

    color b=(color)5;


    cout<<c<<endl<<a<<endl<<b;
}
