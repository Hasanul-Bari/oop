#include<iostream>
using namespace std;

template <class T>
void interchange(T & a,T & b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    string  x="hasan",y="hp";
    cout<<x<<" "<<y<<endl;
    interchange(x,y);
    cout<<x<<" "<<y<<endl;
}

