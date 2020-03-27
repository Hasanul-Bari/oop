#include<iostream>
using namespace std;

template<class T1, class T2>
void display(T1 x, T2 y)
{
    cout<<x<<" "<<y<<endl;
}

int main()
{
    cout<<"calling function template with int and string data types.. :"<<endl;

    display(1999,"EBG");

    cout<<"calling function template with float and int data types..:"<<endl;

    display(12.34,1234);
}
