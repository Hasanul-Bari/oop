///1. Write a basic C++ program.

#include<iostream>             //header file
using namespace std;

int main()
{
    int a,b,s;
    cout<<"Enter the value of a and b"<<endl;    ///printing the message to monitor
    cin>>a>>b;                                   ///assigning values to a and b from keyboard

    s=a+b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<s<<endl;  ///printing the sum to monitor

    return 0;
}
