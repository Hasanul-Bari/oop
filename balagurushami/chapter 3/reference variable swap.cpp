#include<iostream>
using namespace std;


void swape(int & a, int & b)
{
    int temp=a;
    a=b;
    b=temp;
}



int main()
{
    int a=2, b=3;
    swape(a,b);
    cout<<"a="<<a<<endl<<"b="<<b<<endl;

    return 0;
}
