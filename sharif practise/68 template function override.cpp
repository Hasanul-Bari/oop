#include<iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

void print(double b)
{
    cout<<"override"<<endl;
}

int main()
{
    print(5);
    print(5.965);
    print("hasanhp");
}

